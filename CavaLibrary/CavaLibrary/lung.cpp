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
void Lung::OxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic)
{
	Airflow(human_characteristic.temperature);
	Pressure(time, human_characteristic.temperature, inflow, _pressure_summand);
	OxygenSaturation(human_characteristic);
	Hemoglobin(human_characteristic);
	this->oxygen = OxygenContent(oxygen_saturation, _volume, hemoglobin_level);
}

void Lung::SwitchFlow()
{
	if(_inflow == 1)
		_inflow = 0;
	else
		_inflow = 1;
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

double Lung::RespiratoryRate()
{
	return _respiratory_rate;
}

double Lung::CycleDuration()
{
	return _cycle_time_breath;
}

int Lung::Inflow()
{
	return _inflow;
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

void Lung::RespiratoryRate(double new_respiratory_rate)
{
	_respiratory_rate = new_respiratory_rate;
	_cycle_time_breath = 60 / _respiratory_rate;
}

void Lung::ResetMassOfAir()
{
	_mass_of_air = 0.00003;
}

void Lung::ResetVolume()
{
	_volume = 3.251;
}

void Lung::ResetAreaOfThrottle()
{
	_area_of_throttle = 32;
}

void Lung::ResetUpstreamPressure()
{
	_upstream_pressure = 55.74;
}

void Lung::ResetDownstreamPressure()
{
	_downstream_pressure = 14;
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
	_pressure_summand = 10;
}

void Lung::ResetAirMassFlow()
{
	_air_mass_flow = 1.2;
}

void Lung::ResetRespiratoryRate()
{
	_respiratory_rate = 16;
}

void Lung::Airflow(double temperature)
{
	double flow_coefficient = -1;
	if (_inflow == 1)
		flow_coefficient = 1;

	double kelvin_temperature = 274.15 + temperature;
	double numerator = flow_coefficient * _area_of_throttle * _upstream_pressure * sqrt(1-_critical_pressure_ratio);
	double denominator = _atmospheric_density * sqrt(_gas_constant * kelvin_temperature);
	double factor = sqrt(1 - pow((_downstream_pressure / _upstream_pressure - _critical_pressure_ratio) / (1 - _critical_pressure_ratio), 2));
	oxygen_flow = 0.980665 * 0.00001 * (numerator / denominator) * factor; //unit adjustment 
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
	pressure = (0.5 * 0.0101971621297793 * numerator / denominator) + summand;	// 0.5 unit adjustment to cmH20
}


