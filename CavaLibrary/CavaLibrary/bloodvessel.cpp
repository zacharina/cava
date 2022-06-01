#include "pch.h"
#include "bloodvessel.h"
#include "definitions.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
* All blood network related calculation combined, including oxygen transport
* @param time					time passed since the last frame/mathod call
* @param inflow					inflow or outflow as 1 and 0
* @param oxygen					provided amount of oxygen to the in percent
* @param human_characteristic
*/
void BloodVessel::OxygenTransport(double time, int inflow, double& oxygen, HumanCharacteristic human_characteristic)
{
	_hemoglobin_oxygen_saturation *= (oxygen / 100);
	
	HillCoefficient(human_characteristic.temperature);
	HalfPressure(human_characteristic.temperature);
	Velocity();
	Windkessel(time);
	OxygenFlow();
	PartialPressure();
	OxygenConcentration();

	PartialPressureTissue();
	OxygenConsumptionTissue();
		
	this->oxygen = oxygen_concentration;
}

void BloodVessel::HillCoefficient(double temperature)
{
	if (temperature < 37)
		_hill_coefficient = 2.57;
	else if (temperature <= 44)
		_hill_coefficient = temperature * -0.017 + 3.199;
	else
		_hill_coefficient = 2.45;
}

void BloodVessel::HalfPressure(double temperature)
{
	if (temperature < 37)
		_half_pressure = 27;
	else if (temperature <= 44)
		_half_pressure = temperature * 1.27 - 19.99;
	else
		_half_pressure = 35.9;
}

void BloodVessel::HemoglobinSaturation()
{
	_hemoglobin_oxygen_saturation = pow(partial_pressure / _half_pressure, _hill_coefficient) / pow(1 + partial_pressure / _half_pressure, _hill_coefficient);
}

void BloodVessel::PartialPressure()
{
	partial_pressure = _half_pressure * pow(_hemoglobin_oxygen_saturation / (1 - _hemoglobin_oxygen_saturation), 1 / _hill_coefficient);
}

void BloodVessel::Velocity()
{
	velocity = 2 * _start_velocity * (_velocity_coefficient - pow(_vessel_thickness, 2) / pow(_vessel_radius, 2));
}

void BloodVessel::Windkessel(double time)
{
	double coefficient_1 = 0.1729;
	double coefficient_2 = 0.0075;
	if (_vessel_radius < 0.2) { //2000) { //microm
		coefficient_1 = 0.2057;
		coefficient_2 = 0.0392;
	}

	resistance = (0.76/101325.0) * (coefficient_1 / coefficient_2 - 1) * (8 * _viscosity * _vessel_length / (PI * pow(_vessel_radius, 4)));
	inertance = (760.0/1013250.0) * (coefficient_1 - coefficient_2) * (8 * _blood_density * _vessel_length) / (PI * pow(_vessel_radius, 2));
	compliance = (3.0 * PI * pow(_vessel_radius, 3) * _vessel_length) / (2.0 * _young_modulus * _vessel_thickness);
	elastance = (_young_modulus * _vessel_thickness) / (2 * PI * pow(_vessel_radius, 3) * _vessel_length * _number_of_vessels);

	double subtotal = exp(-time / (resistance * compliance));

	if (time <= _systolic_time) {
		double tmp_flow = _flow * _cycle_duration / (60 * (-_systolic_time * cos(time * PI / _systolic_time) / PI + _flow_addend));
		systolic_pressure =  _initial_systolic_pressure * subtotal + (500.0)*(tmp_flow * time * compliance * PI * pow(resistance, 2)) / (pow(_systolic_time, 2) + pow(compliance, 2) * pow(PI, 2) * pow(resistance, 2)) * (1 + subtotal);
		diastolic_pressure = 0;
		//_initial_diastolic_pressure = systolic_pressure;
	}
	else {
		diastolic_pressure = _diastolic_multiplier * _initial_diastolic_pressure * subtotal;
		systolic_pressure = 0;
		//_initial_systolic_pressure = diastolic_pressure;
	}
}

void BloodVessel::OxygenFlow()
{
	oxygen_flow = 0.001 *PI * pow(_vessel_radius * 2, 2) / 4.0 * _rbc_velocity * _oxygen_binding_capacity * _hemoglobin_concentration * _hemoglobin_oxygen_saturation;
}

void BloodVessel::OxygenConcentration()
{
	oxygen_concentration = _bunsen_solubility_coefficient * partial_pressure;
}

void BloodVessel::PartialPressureTissue()
{
	double radius_difference = pow(_tissue_radius, 2) - pow(_vessel_radius, 2);
	partial_pressure_tissue = partial_pressure + 760.0 * (_metabolic_rate / 2 * _krogh_diffusion_coefficient)
		* ((3.0 * radius_difference) / 8.0 - (pow(_tissue_radius, 4) / (2.0 * radius_difference)) * log(_tissue_radius / _vessel_radius));
}

void BloodVessel::OxygenConsumptionTissue()
{
	//Michaelis-Menten-Formula
	oxygen_consumption_tissue = _max_consumption_rate * partial_pressure_tissue / (_half_pressure + partial_pressure);
}

void BloodVessel::StartVelocity(double new_start_velocity)
{
	_start_velocity = new_start_velocity;
}

void BloodVessel::VelocityCoefficient(double new_velocity_coefficient)
{
	_velocity_coefficient = new_velocity_coefficient;
}

void BloodVessel::NumberOfVessels(double new_number_of_vessels)
{
	_number_of_vessels = new_number_of_vessels;
}

void BloodVessel::VesselLength(double new_vessel_length)
{
	_vessel_length = new_vessel_length;
}

void BloodVessel::VesselThickness(double new_vessel_thickness)
{
	_vessel_thickness = new_vessel_thickness;
}

void BloodVessel::BloodDensity(double new_blood_density)
{
	_blood_density = new_blood_density;
}

void BloodVessel::InitialSystolicPressure(double new_systolic_pressure)
{
	_initial_systolic_pressure = new_systolic_pressure;
}

void BloodVessel::SystolicTime(double new_systolic_time)
{
	_systolic_time = new_systolic_time;
}

void BloodVessel::InitialDiastolicPressure(double new_diastolic_pressure)
{
	_initial_diastolic_pressure = new_diastolic_pressure;
}

void BloodVessel::DiastolicTime(double new_diastolic_time)
{
	_diastolic_time = new_diastolic_time;
}

void BloodVessel::OxygenBindingCapacity(double new_oxygen_binding_capacity)
{
	_oxygen_binding_capacity = new_oxygen_binding_capacity;
}

void BloodVessel::HemoglobinConcentration(double new_hemoglobin_concentration)
{
	_hemoglobin_concentration = new_hemoglobin_concentration;
}

void BloodVessel::HemoglobinOxygenSaturation(double new_hemoglobin_oxygen_saturation)
{
	_hemoglobin_oxygen_saturation = new_hemoglobin_oxygen_saturation;
}

void BloodVessel::RBCVelocity(double new_rbc_velocity)
{
	_rbc_velocity = new_rbc_velocity;
}

void BloodVessel::TissueRadius(double new_tissue_radius)
{
	_tissue_radius = new_tissue_radius;
}

void BloodVessel::MetabolicRate(double new_metabolic_rate)
{
	_metabolic_rate = new_metabolic_rate;
}

void BloodVessel::VesselRadius(double new_vessel_radius)
{
	_vessel_radius = new_vessel_radius;
}

void BloodVessel::MaxConsumption(double new_max_consumption)
{
	_max_consumption_rate = new_max_consumption;
}

void BloodVessel::InitialInertance(double new_initial_inertance)
{
	_initial_inertance = new_initial_inertance;
}

void BloodVessel::Viscosity(double new_viscosity)
{
	_viscosity = new_viscosity;
}

void BloodVessel::Flow(double new_flow)
{
	_flow = new_flow;
}

void BloodVessel::FlowAddend(double new_addend)
{
	_flow_addend = new_addend;
}

void BloodVessel::ResetStartVelocity()
{
	_start_velocity = 424.4;
}

void BloodVessel::ResetVelocityCoefficient()
{
	_velocity_coefficient = 1;
}

void BloodVessel::ResetNumberOfVessels()
{
	_number_of_vessels = 319;
}

void BloodVessel::ResetVesselLength()
{
	_vessel_length = 0.02;
}

void BloodVessel::ResetVesselThickness()
{
	_vessel_thickness = 0.0001;
}

void BloodVessel::ResetBloodDensity()
{
	_blood_density = 1.060;
}

void BloodVessel::ResetInitialSystolicPressure()
{
	_initial_systolic_pressure = 160;
}

void BloodVessel::ResetSystolicTime()
{
	_systolic_time = 0.33;
}

void BloodVessel::ResetInitialDiastolicPressure()
{
	_initial_diastolic_pressure = 100;
}

void BloodVessel::ResetDiastolicTime()
{
	_diastolic_time = 0.67;
}

void BloodVessel::ResetOxygenBindingCapacity()
{
	_oxygen_binding_capacity = 1.34;
}

void BloodVessel::ResetHemoglobinConcentration()
{
	_hemoglobin_concentration = 15; 
}

void BloodVessel::ResetHemoglobinOxygenSaturation()
{
	_hemoglobin_oxygen_saturation = 0.926;
}

void BloodVessel::ResetRBCVelocity()
{
	_rbc_velocity = 0.656;
}

void BloodVessel::ResetTissueRadius()
{
	_tissue_radius = _vessel_radius + _vessel_thickness;
}

void BloodVessel::ResetMetabolicRate()
{
	_metabolic_rate = 0.4 * 0.0001;
}

void BloodVessel::ResetVesselRadius()
{
	_vessel_radius = 2.5;
}

void BloodVessel::ResetMaxConsumption()
{
	_max_consumption_rate = 0.00667;
}

void BloodVessel::ResetInitialInertance()
{
	_initial_inertance = 0.013;
}

void BloodVessel::ResetViscosity()
{
	_viscosity = 0.01 * 10000;
}

void BloodVessel::ResetFlow()
{
	_flow = 5;
}

void BloodVessel::ResetFlowAddend()
{
	_flow_addend = 0.0855;
}

double BloodVessel::StartVelocity()
{
	return _start_velocity;
}

double BloodVessel::VelocityCoefficient()
{
	return _velocity_coefficient;
}

double BloodVessel::NumberOfVessels()
{
	return _number_of_vessels;
}

double BloodVessel::VesselLength()
{
	return _vessel_length;
}

double BloodVessel::VesselThickness()
{
	return _vessel_thickness;
}

double BloodVessel::BloodDensity()
{
	return _blood_density;
}

double BloodVessel::InitialSystolicPressure()
{
	return _initial_systolic_pressure;
}

double BloodVessel::InitialDiastolicPressure()
{
	return _initial_diastolic_pressure;
}

double BloodVessel::SystolicTime()
{
	return _systolic_time;
}

double BloodVessel::DiastolicTime()
{
	return _diastolic_time;
}

double BloodVessel::OxygenBindingCapacity()
{
	return _oxygen_binding_capacity;
}

double BloodVessel::HemoglobinConcentration()
{
	return _hemoglobin_concentration;
}

double BloodVessel::HemoglobinOxygenSaturation()
{
	return _hemoglobin_oxygen_saturation;
}

double BloodVessel::RBCVelocity()
{
	return _rbc_velocity;
}

double BloodVessel::TissueRadius()
{
	return _tissue_radius;
}

double BloodVessel::MetabolicRate()
{
	return _metabolic_rate;
}

double BloodVessel::VesselRadius()
{
	return _vessel_radius;
}

double BloodVessel::MaxConsumption()
{
	return _max_consumption_rate;
}

double BloodVessel::InitialInertance()
{
	return _initial_inertance;
}

double BloodVessel::Viscosity()
{
	return _viscosity;
}

double BloodVessel::Flow()
{
	return _flow;
}
