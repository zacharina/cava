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
void Lung::ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic)
{
	ComputeAirflow(human_characteristic.temperature);
	ComputePressure(time, human_characteristic.temperature, _pressure_summand);
	SetOxygenSaturationFor(human_characteristic);
	SetHemoglobinFor(human_characteristic);
	this->oxygen = GetOxygenContent(oxygen_saturation, _volume, hemoglobin_level);
}

void Lung::ComputeAirflow(double temperature)
{
	double flow_coefficient = -1.0;
	if (_inflow)
		flow_coefficient = 1.0;

	double kelvin_temperature = 274.15 + temperature;
	double numerator = flow_coefficient * _area_of_throttle * _upstream_pressure * sqrt(1.0 - _critical_pressure_ratio);
	double denominator = _atmospheric_density * sqrt(_gas_constant * kelvin_temperature);
	double factor = sqrt(1.0 - pow((_downstream_pressure / _upstream_pressure - _critical_pressure_ratio) / (1.0 - _critical_pressure_ratio), 2.0));
	oxygen_flow = 0.980665 * 0.00001 * (numerator / denominator) * factor; //unit adjustment 
}

void Lung::ComputePressure(double time, double temperature, double summand)
{
	double kelvin_temperature = 274.15 + temperature;
	double numerator = _air_mass_flow * _gas_constant * kelvin_temperature * _volume * (time * _cycle_time_breath);
	if (_inflow)
		_respiratory_compliance = _respiratory_compliance_inflow;
	else
		_respiratory_compliance = _respiratory_compliance_outflow;

	double denominator = pow(_volume, 2.0) + _respiratory_compliance * _mass_of_air * _gas_constant * kelvin_temperature;
	pressure = (0.5 * 0.0101971621297793 * numerator / denominator) + summand;	// 0.5 unit adjustment to cmH20
}

void Lung::SwitchFlow()
{
	_inflow = !_inflow;
}

double Lung::GetMassOfAir()
{
	return _mass_of_air;
}

double Lung::GetVolume()
{
	return _volume;
}

double Lung::GetAreaOfThrottle()
{
	return _area_of_throttle;
}

double Lung::GetUpstreamPressure()
{
	return _upstream_pressure;
}

double Lung::GetDownstreamPressure()
{
	return _downstream_pressure;
}

double Lung::GetCriticalPressureRatio()
{
	return _critical_pressure_ratio;
}

double Lung::GetGasConstant()
{
	return _gas_constant;
}

double Lung::GetRespiratoryCompliance()
{
	return _respiratory_compliance;
}

double Lung::GetRespiratoryComplianceInflow()
{
	return _respiratory_compliance_inflow;
}

double Lung::GetRespiratoryComplianceOutflow()
{
	return _respiratory_compliance_outflow;
}

double Lung::GetAtmosphericDensity()
{
	return _atmospheric_density;
}

double Lung::GetPressureSummand()
{
	return _pressure_summand;
}

double Lung::GetAirMassFlow()
{
	return _air_mass_flow;
}

double Lung::GetRespiratoryRate()
{
	return _respiratory_rate;
}

double Lung::GetCycleDuration()
{
	return _cycle_time_breath;
}

bool Lung::GetInflow()
{
	return _inflow;
}

void Lung::SetMassOfAir(double new_mass_of_air)
{
	_mass_of_air = new_mass_of_air;
}

void Lung::SetVolume(double new_volume)
{
	_volume = new_volume;
}

void Lung::SetAreaOfThrottle(double new_area_of_throttle)
{
	_area_of_throttle = new_area_of_throttle;
}

void Lung::SetUpstreamPressure(double new_upstream_pressure)
{
	_upstream_pressure = new_upstream_pressure;
}

void Lung::SetDownstreamPressure(double new_downstream_pressure)
{
	_downstream_pressure = new_downstream_pressure;
}

void Lung::SetCriticalPressureRatio(double new_critical_pressure_ratio)
{
	_critical_pressure_ratio = new_critical_pressure_ratio;
}

void Lung::SetGasConstant(double new_gas_constant)
{
	_gas_constant = new_gas_constant;
}

void Lung::SetAtmosphericDensity(double new_atmospheric_density)
{
	_atmospheric_density = new_atmospheric_density;
}

void Lung::SetRespiratoryComplianceInflow(double new_compliance)
{
	_respiratory_compliance_inflow = new_compliance;
}

void Lung::SetRespiratoryComplianceOutflow(double new_compliance)
{
	_respiratory_compliance_outflow = new_compliance;
}

void Lung::SetPressureSummand(double new_pressure_summand)
{
	_pressure_summand = new_pressure_summand;
}

void Lung::SetAirMassFlow(double new_air_mass_flow)
{
	_air_mass_flow = new_air_mass_flow;
}

void Lung::SetRespiratoryRateAndCycleTime(double new_respiratory_rate)
{
	_respiratory_rate = new_respiratory_rate;
	_cycle_time_breath = 60.0 / _respiratory_rate;
}

void Lung::ResetMassOfAir()
{
	SetMassOfAir(MASS_OF_AIR);
}

void Lung::ResetVolume()
{
	SetVolume(VOLUME);
}

void Lung::ResetAreaOfThrottle()
{
	SetAreaOfThrottle(AREA_OF_THROTTLE);
}

void Lung::ResetUpstreamPressure()
{
	SetUpstreamPressure(UPSTREAM_PRESSURE);
}

void Lung::ResetDownstreamPressure()
{
	SetDownstreamPressure(DOWNSTREAM_PRESSURE);
}

void Lung::ResetCriticalPressureRatio()
{
	SetCriticalPressureRatio(CRITICAL_PRESSURE_RATIO);
}

void Lung::ResetGasConstant()
{
	SetGasConstant(GAS_CONSTANT);
}

void Lung::ResetAtmosphericDensity()
{
	SetAtmosphericDensity(ATMOSPHERIC_DENSITY);
}

void Lung::ResetRespiratoryComplianceInflow()
{
	SetRespiratoryComplianceInflow(RESPIRATORY_COMPLIANCE_INFLOW);
}

void Lung::ResetRespiratoryComplianceOutflow()
{
	SetRespiratoryComplianceOutflow(RESPIRATORY_COMPLIANCE_OUTFLOW);
}

void Lung::ResetPressureSummand()
{
	SetPressureSummand(PRESSURE_SUMMAND);
}

void Lung::ResetAirMassFlow()
{
	SetAirMassFlow(AIR_MASS_FLOW);
}

void Lung::ResetRespiratoryRate()
{
	SetRespiratoryRateAndCycleTime(RESPIRATORY_RATE);
}