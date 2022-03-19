#include "pch.h"
#include "lung.h"
#include "definitions.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
* All lung related calculation combined, including oxygen transport
* @param time					time passed since the last frame/mathod call
* @param inflow					inflow or outflow as 1 and 0
* @param oxygen					provided amount of oxygen to the in percent
* @param human_characteristic
*/
void Lung::OxygenTransport(double time, int inflow, double& oxygen, HumanCharacteristic human_characteristic)
{
	Airflow(human_characteristic.temperature, inflow);
	Pressure(time, human_characteristic.temperature, inflow, _pressure_summand);
	OxygenSaturation(human_characteristic);
	Hemoglobin(human_characteristic);
	this->oxygen = OxygenContent(oxygen_saturation, _volume, hemoglobin_level);
}

double Lung::MassOfAir()
{
	return _mass_of_air;
}

double Lung::Volume()
{
	return _volume;
}

double Lung::AreaOfThrottle()
{
	return _area_of_throttle;
}

double Lung::UpstreamPressure()
{
	return _upstream_pressure;
}

double Lung::DownstreamPressure()
{
	return _downstream_pressure;
}

double Lung::CriticalPressureRatio()
{
	return _critical_pressure_ratio;
}

double Lung::GasConstant()
{
	return _gas_constant;
}

double Lung::RespiratoryCompliance()
{
	return _respiratory_compliance;
}

double Lung::AtmosphericDensity()
{
	return _atmospheric_density;
}

double Lung::PressureSummand()
{
	return _pressure_summand;
}

double Lung::AirMassFlow()
{
	return _air_mass_flow;
}

void Lung::MassOfAir(double new_mass_of_air)
{
	_mass_of_air = new_mass_of_air;
}

void Lung::Volume(double new_volume)
{
	_volume = new_volume;
}

void Lung::AreaOfThrottle(double new_area_of_throttle)
{
	_area_of_throttle = new_area_of_throttle;
}

void Lung::UpstreamPressure(double new_upstream_pressure)
{
	_upstream_pressure = new_upstream_pressure;
}

void Lung::DownstreamPressure(double new_downstream_pressure)
{
	_downstream_pressure = new_downstream_pressure;
}

void Lung::CriticalPressureRatio(double new_critical_pressure_ratio)
{
	_critical_pressure_ratio = new_critical_pressure_ratio;
}

void Lung::GasConstant(double new_gas_constant)
{
	_gas_constant = new_gas_constant;
}

void Lung::AtmosphericDensity(double new_atmospheric_density)
{
	_atmospheric_density = new_atmospheric_density;
}

void Lung::RespiratoryComplianceInflow(double new_compliance)
{
	_respiratory_compliance_inflow = new_compliance;
}

void Lung::RespiratoryComplianceOutflow(double new_compliance)
{
	_respiratory_compliance_outflow = new_compliance;
}

void Lung::PressureSummand(double new_pressure_summand)
{
	_pressure_summand = new_pressure_summand;
}

void Lung::AirMassFlow(double new_air_mass_flow)
{
	_air_mass_flow = new_air_mass_flow;
}

void Lung::ResetMassOfAir()
{
	_mass_of_air = 0.12;
}

void Lung::ResetVolume()
{
	_volume = 0.003251;
}

void Lung::ResetAreaOfThrottle()
{
	_area_of_throttle = 32;
}

void Lung::ResetUpstreamPressure()
{
	_upstream_pressure = 10.3;
}

void Lung::ResetDownstreamPressure()
{
	_downstream_pressure = 41.0;
}

void Lung::ResetCriticalPressureRatio()
{
	_critical_pressure_ratio = 0.528;
}

void Lung::ResetGasConstant()
{
	_gas_constant = 287;
}

void Lung::ResetAtmosphericDensity()
{
	_atmospheric_density = 1.2;
}

void Lung::ResetRespiratoryComplianceInflow()
{
	_respiratory_compliance_inflow = 58;
}

void Lung::ResetRespiratoryComplianceOutflow()
{
	_respiratory_compliance_outflow = 44;
}

void Lung::ResetPressureSummand()
{
	_pressure_summand = 1;
}

void Lung::ResetAirMassFlow()
{
	_air_mass_flow = 1.2;
}

void Lung::Airflow(double temperature, int inflow)
{
	double flow_coefficient = -1;
	if (!inflow)
		flow_coefficient = 1;

	double kelvin_temperature = 274.15 + temperature;
	double numerator = flow_coefficient * _area_of_throttle * _upstream_pressure * sqrt(1-_critical_pressure_ratio);
	double denominator = _atmospheric_density * sqrt(_gas_constant * kelvin_temperature);
	double factor = sqrt(1 - pow((_downstream_pressure / _upstream_pressure - _critical_pressure_ratio) / (1 - _critical_pressure_ratio), 2));
	oxygen_flow = (numerator / denominator) * factor;
}

void Lung::Pressure(double time, double temperature, int inflow, double summand)
{
	double kelvin_temperature = 274.15  + temperature;
	double numerator = _air_mass_flow * _gas_constant * kelvin_temperature * _volume * time;
	if (inflow)
		_respiratory_compliance = _respiratory_compliance_inflow;
	else
		_respiratory_compliance = _respiratory_compliance_outflow;

	double denominator = pow(_volume, 2) + _respiratory_compliance * _mass_of_air * _gas_constant * kelvin_temperature;
	pressure = numerator / denominator + summand;	
}


