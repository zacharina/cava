#include "pch.h"
#include "bloodvessel.h"
#include "definitions.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
* All blood network related calculation combined, including oxygen transport
* @param time					time passed since the last frame/mathod call
* @param oxygen					provided amount of oxygen to the in percent
* @param human_characteristic
*/
void BloodVessel::ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic)
{
	_hemoglobin_oxygen_saturation *= (oxygen / 100);
	
	SetHillCoefficientFrom(human_characteristic.temperature);
	SetHalfPressureFrom(human_characteristic.temperature);

	ComputeVelocity();
	ComputeWindkessel(time);
	ComputeOxygenFlow();
	ComputePartialPressure();
	ComputeOxygenConcentration();

	ComputePartialPressureTissue();
	ComputeOxygenConsumptionTissue();
		
	this->oxygen = oxygen_concentration;
}

void BloodVessel::SetHillCoefficientFrom(double temperature)
{
	if (temperature < 37.0)
		_hill_coefficient = 2.57;
	else if (temperature <= 44.0)
		_hill_coefficient = temperature * -0.017 + 3.199;
	else
		_hill_coefficient = 2.45;
}

void BloodVessel::SetHalfPressureFrom(double temperature)
{
	if (temperature < 37.0)
		_half_pressure = 27.0;
	else if (temperature <= 44.0)
		_half_pressure = temperature * 1.27 - 19.99;
	else
		_half_pressure = 35.9;
}

void BloodVessel::ComputeHemoglobinSaturation()
{
	_hemoglobin_oxygen_saturation = pow(partial_pressure / _half_pressure, _hill_coefficient) / pow(1 + partial_pressure / _half_pressure, _hill_coefficient);
}

void BloodVessel::ComputePartialPressure()
{
	partial_pressure = _half_pressure * pow(_hemoglobin_oxygen_saturation / (1.0 - _hemoglobin_oxygen_saturation), 1 / _hill_coefficient);
}

void BloodVessel::ComputeVelocity()
{
	velocity = 2.0 * _start_velocity * (_velocity_coefficient - pow(_vessel_thickness, 2.0) / pow(_vessel_radius, 2.0));
}

void BloodVessel::ComputeWindkessel(double time)
{
	double coefficient_1 = 0.1729;
	double coefficient_2 = 0.0075;
	if (_vessel_radius < 0.2) { //cm
		coefficient_1 = 0.2057;
		coefficient_2 = 0.0392;
	}

	resistance = (0.76/101325.0) * (coefficient_1 / coefficient_2 - 1.0) * (8.0 * _viscosity * _vessel_length / (PI * pow(_vessel_radius, 4.0)));
	inertance = (760.0/1013250.0) * (coefficient_1 - coefficient_2) * (8.0 * _blood_density * _vessel_length) / (PI * pow(_vessel_radius, 2.0));
	compliance = (3.0 * PI * pow(_vessel_radius, 3.0) * _vessel_length) / (2.0 * _young_modulus * _vessel_thickness);
	elastance = (_young_modulus * _vessel_thickness) / (2.0 * PI * pow(_vessel_radius, 3) * _vessel_length * _number_of_vessels);

	double systolic_time_seconds = _systolic_time * _cycle_duration;
	double diastolic_time_seconds = _diastolic_time * _cycle_duration;

	double subtotal_systolic = exp(-systolic_time_seconds / (resistance * compliance * 150.0));
	double subtotal_diastolic = exp(-diastolic_time_seconds / (resistance * compliance * 750.0));
	
	if (time <= systolic_time_seconds) {
		double tmp_flow = (1000.0 / 60.0) * _flow * _cycle_duration / (60.0 * (2.0 * systolic_time_seconds) / PI);
		systolic_pressure = _initial_systolic_pressure * subtotal_systolic + (tmp_flow * systolic_time_seconds * compliance * PI * pow(resistance, 2.0)) / (pow(systolic_time_seconds, 2.0) + pow(compliance, 2.0) * pow(PI, 2.0) * pow(resistance, 2.0)) * (1.0 + subtotal_systolic);
	}
	else {
		diastolic_pressure = _initial_diastolic_pressure * subtotal_diastolic;
	}
}

void BloodVessel::ComputeOxygenFlow()
{
	oxygen_flow = 0.001 *PI * pow(_vessel_radius * 2.0, 2.0) / 4.0 * _rbc_velocity * _oxygen_binding_capacity * _hemoglobin_concentration * _hemoglobin_oxygen_saturation;
}

void BloodVessel::ComputeOxygenConcentration()
{
	oxygen_concentration = _bunsen_solubility_coefficient * partial_pressure;
}

void BloodVessel::ComputePartialPressureTissue()
{
	double radius_difference = pow(_tissue_radius, 2.0) - pow(_vessel_radius, 2.0);
	partial_pressure_tissue = partial_pressure + 760.0 * (_metabolic_rate / 2.0 * _krogh_diffusion_coefficient)
		* ((3.0 * radius_difference) / 8.0 - (pow(_tissue_radius, 4.0) / (2.0 * radius_difference)) * log(_tissue_radius / _vessel_radius));
}

void BloodVessel::ComputeOxygenConsumptionTissue()
{
	//Michaelis-Menten-Formula
	oxygen_consumption_tissue = _max_consumption_rate * partial_pressure_tissue / (_half_pressure + partial_pressure);
}

/*GETTER*/

double BloodVessel::GetStartVelocity()
{
	return _start_velocity;
}

double BloodVessel::GetVelocityCoefficient()
{
	return _velocity_coefficient;
}

double BloodVessel::GetNumberOfVessels()
{
	return _number_of_vessels;
}

double BloodVessel::GetVesselLength()
{
	return _vessel_length;
}

double BloodVessel::GetVesselThickness()
{
	return _vessel_thickness;
}

double BloodVessel::GetBloodDensity()
{
	return _blood_density;
}

double BloodVessel::GetInitialSystolicPressure()
{
	return _initial_systolic_pressure;
}

double BloodVessel::GetInitialDiastolicPressure()
{
	return _initial_diastolic_pressure;
}

double BloodVessel::GetSystolicTime()
{
	return _systolic_time;
}

double BloodVessel::GetDiastolicTime()
{
	return _diastolic_time;
}

double BloodVessel::GetOxygenBindingCapacity()
{
	return _oxygen_binding_capacity;
}

double BloodVessel::GetHemoglobinConcentration()
{
	return _hemoglobin_concentration;
}

double BloodVessel::GetHemoglobinOxygenSaturation()
{
	return _hemoglobin_oxygen_saturation;
}

double BloodVessel::GetRBCVelocity()
{
	return _rbc_velocity;
}

double BloodVessel::GetTissueRadius()
{
	return _tissue_radius;
}

double BloodVessel::GetMetabolicRate()
{
	return _metabolic_rate;
}

double BloodVessel::GetVesselRadius()
{
	return _vessel_radius;
}

double BloodVessel::GetMaxConsumption()
{
	return _max_consumption_rate;
}

double BloodVessel::GetInitialInertance()
{
	return _initial_inertance;
}

double BloodVessel::GetViscosity()
{
	return _viscosity;
}

double BloodVessel::GetFlow()
{
	return _flow;
}

double BloodVessel::GetCycleDuration()
{
	return _cycle_duration;
}

/*SETTER*/

void BloodVessel::SetStartVelocity(double new_start_velocity)
{
	_start_velocity = new_start_velocity;
}

void BloodVessel::SetVelocityCoefficient(double new_velocity_coefficient)
{
	_velocity_coefficient = new_velocity_coefficient;
}

void BloodVessel::SetNumberOfVessels(double new_number_of_vessels)
{
	_number_of_vessels = new_number_of_vessels;
}

void BloodVessel::SetVesselLength(double new_vessel_length)
{
	_vessel_length = new_vessel_length;
}

void BloodVessel::SetVesselThickness(double new_vessel_thickness)
{
	_vessel_thickness = new_vessel_thickness;
}

void BloodVessel::SetBloodDensity(double new_blood_density)
{
	_blood_density = new_blood_density;
}

void BloodVessel::SetInitialSystolicPressure(double new_systolic_pressure)
{
	_initial_systolic_pressure = new_systolic_pressure;
}

void BloodVessel::SetSystolicTime(double new_systolic_time)
{
	_systolic_time = new_systolic_time;
}

void BloodVessel::SetInitialDiastolicPressure(double new_diastolic_pressure)
{
	_initial_diastolic_pressure = new_diastolic_pressure;
}

void BloodVessel::SetDiastolicTime(double new_diastolic_time)
{
	_diastolic_time = new_diastolic_time;
}

void BloodVessel::SetOxygenBindingCapacity(double new_oxygen_binding_capacity)
{
	_oxygen_binding_capacity = new_oxygen_binding_capacity;
}

void BloodVessel::SetHemoglobinConcentration(double new_hemoglobin_concentration)
{
	_hemoglobin_concentration = new_hemoglobin_concentration;
}

void BloodVessel::SetHemoglobinOxygenSaturation(double new_hemoglobin_oxygen_saturation)
{
	_hemoglobin_oxygen_saturation = new_hemoglobin_oxygen_saturation;
}

void BloodVessel::SetRBCVelocity(double new_rbc_velocity)
{
	_rbc_velocity = new_rbc_velocity;
}

void BloodVessel::SetTissueRadius(double new_tissue_radius)
{
	_tissue_radius = new_tissue_radius;
}

void BloodVessel::SetMetabolicRate(double new_metabolic_rate)
{
	_metabolic_rate = new_metabolic_rate;
}

void BloodVessel::SetVesselRadius(double new_vessel_radius)
{
	_vessel_radius = new_vessel_radius;
}

void BloodVessel::SetMaxConsumption(double new_max_consumption)
{
	_max_consumption_rate = new_max_consumption;
}

void BloodVessel::SetInitialInertance(double new_initial_inertance)
{
	_initial_inertance = new_initial_inertance;
}

void BloodVessel::SetViscosity(double new_viscosity)
{
	_viscosity = new_viscosity;
}

void BloodVessel::SetFlow(double new_flow)
{
	_flow = new_flow;
}

void BloodVessel::SetFlowAddend(double new_addend)
{
	_flow_addend = new_addend;
}

void BloodVessel::SetCycleDuration(double new_cycle_duration)
{
	_cycle_duration = new_cycle_duration;
}

/*RESETTER*/

void BloodVessel::ResetStartVelocity()
{
	SetStartVelocity(INIT_START_VELOCITY);
}

void BloodVessel::ResetVelocityCoefficient()
{
	SetVelocityCoefficient(INIT_VELOCITY_COEFFICIENT);
}

void BloodVessel::ResetNumberOfVessels()
{
	SetNumberOfVessels(INIT_NUMBER_OF_VESSELS);
}

void BloodVessel::ResetVesselLength()
{
	SetVesselLength(INIT_VESSEL_LENGTH);
}

void BloodVessel::ResetVesselThickness()
{
	SetVesselThickness(INIT_VESSEL_THICKNESS);
}

void BloodVessel::ResetBloodDensity()
{
	SetBloodDensity(INIT_BLOOD_DENSITY);
}

void BloodVessel::ResetInitialSystolicPressure()
{
	SetInitialSystolicPressure(INIT_SYSTOLIC_PRESSURE);
}

void BloodVessel::ResetSystolicTime()
{
	SetSystolicTime(INIT_SYSTOLIC_TIME);
}

void BloodVessel::ResetInitialDiastolicPressure()
{
	SetInitialDiastolicPressure(INIT_DIASTOLIC_PRESSURE);
}

void BloodVessel::ResetDiastolicTime()
{
	SetDiastolicTime(INIT_DIASTOLIC_TIME);
}

void BloodVessel::ResetOxygenBindingCapacity()
{
	SetOxygenBindingCapacity(INIT_OXYGEN_BINDING_CAPACITY);
}

void BloodVessel::ResetHemoglobinConcentration()
{
	SetHemoglobinConcentration(INIT_HEMOGLOBIN_CONCENTRATION);
}

void BloodVessel::ResetHemoglobinOxygenSaturation()
{
	SetHemoglobinOxygenSaturation(INIT_HEMOGLOBIN_OXYGEN_SATURATION);
}

void BloodVessel::ResetRBCVelocity()
{
	SetRBCVelocity(INIT_RBC_VELOCITY);
}

void BloodVessel::ResetTissueRadius()
{
	SetTissueRadius(INIT_TISSUE_RADIUS);
}

void BloodVessel::ResetMetabolicRate()
{
	SetMetabolicRate(INIT_METABOLIC_RATE);
}

void BloodVessel::ResetVesselRadius()
{
	SetVesselRadius(INIT_VESSEL_RADIUS);
}

void BloodVessel::ResetMaxConsumption()
{
	SetMaxConsumption(INIT_MAX_CONSUMPTION_RATE);
}

void BloodVessel::ResetInitialInertance()
{
	SetInitialInertance(INIT_INITIAL_INERTANCE);
}

void BloodVessel::ResetViscosity()
{
	SetViscosity(INIT_VISCOSITY);
}

void BloodVessel::ResetFlow()
{
	SetFlow(INIT_FLOW);
}

void BloodVessel::ResetFlowAddend()
{
	SetFlowAddend(INIT_FLOW_ADDEND);
}

