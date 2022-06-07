#include "pch.h"
#include "ventricle.h"
#include "definitions.h"
#include <cmath>

void Ventricle::ComputeRadius(double time, double addend)
{
	_radius_at_zero_pressure = addend;
	GetVolumeAtTime(time);
	radius = sqrt(_volume * 3.0 / (2.0 * PI)) / (2.0 * _coefficient * _scaling_coefficient) + addend;
	_inflow_length = 2.0 * radius;
}

void Ventricle::ComputeInflowInertance()
{
	inflow_inertance = _blood_density * _inflow_length / (PI * radius);
}

void Ventricle::ComputePressure(double time, double factor)
{
	ComputePressureActive(time, factor);
	ComputePressurePassive(time, factor);
	pressure = pressure_active + pressure_passive;
}

void Ventricle::ComputePressureActive(double time, double factor)
{
	pressure_active = _end_systolic_elastance * factor * PI * _coefficient * _scaling_coefficient * (pow(radius, 2.0) - pow(_radius_at_zero_pressure, 2.0)) * ComputeActivationValue(time);
}

void Ventricle::ComputePressurePassive(double time, double factor)
{
	pressure_passive = exp(0.02 * factor * PI * _coefficient * pow(radius, 2.0) * _scaling_coefficient) - 1.0;
}

double Ventricle::ComputeActivationValue(double time)
{
	double result = 0.0;
	if (time < _keytime_1 * _cycle_duration)
		result = (1.0 - cos((time / _keytime_1) * PI)) / 2.0;
	else if (time < _keytime_2 * _cycle_duration)
		result = (1.0 + cos((time - _keytime_1 * _cycle_duration) / (_keytime_2 * _cycle_duration - _keytime_1 * _cycle_duration) * PI)) / 2.0;
	return result;
}

/*GETTER*/

void Ventricle::GetVolumeAtTime(double time)
{
	//note: inefficient //to be changed with volume calculation
	double cycle_time_percentage = time / _cycle_duration;
	if (cycle_time_percentage == 0)
		_volume = _volume_over_time[0];
	else if (cycle_time_percentage <= ((1.0 / 8.0) * _cycle_duration))
		_volume = _volume_over_time[1];
	else if (cycle_time_percentage <= ((2.0 / 8.0) * _cycle_duration))
		_volume = _volume_over_time[2];
	else if (cycle_time_percentage <= ((3.0 / 8.0) * _cycle_duration))
		_volume = _volume_over_time[3];
	else if (cycle_time_percentage <= ((4.0 / 8.0) * _cycle_duration))
		_volume = _volume_over_time[4];
	else if (cycle_time_percentage <= ((5.0 / 8.0) * _cycle_duration))
		_volume = _volume_over_time[5];
	else if (cycle_time_percentage <= ((6.0 / 8.0) * _cycle_duration))
		_volume = _volume_over_time[6];
	else if (cycle_time_percentage <= ((7.0 / 8.0) * _cycle_duration))
		_volume = _volume_over_time[7];
	else
		_volume = _volume_over_time[8];
}

double Ventricle::GetVolume()
{
	return _volume;
}

double Ventricle::GetRadiusAtZeroPressure()
{
	return _radius_at_zero_pressure;
}

double Ventricle::GetEndSystolicElastance()
{
	return _end_systolic_elastance;
}

double Ventricle::GetBloodDensity()
{
	return _blood_density;
}

double Ventricle::GetInflowLength()
{
	return _inflow_length;
}

double Ventricle::GetScalingCoefficient()
{
	return _scaling_coefficient;
}

double Ventricle::GetCycleDuration()
{
	return _cycle_duration;
}

/*SETTER*/

void Ventricle::SetRadiusAtZeroPressure(double new_radius_at_zero_pressure)
{
	_radius_at_zero_pressure = new_radius_at_zero_pressure;
}

void Ventricle::SetEndSystolicElastance(double new_end_systolic_elastance)
{
	_end_systolic_elastance = new_end_systolic_elastance;
}

void Ventricle::SetBloodDensity(double new_blood_density)
{
	_blood_density = new_blood_density;
}

void Ventricle::SetInflowLength(double new_inflow_length)
{
	_inflow_length = new_inflow_length;
}

void Ventricle::SetScalingCoefficient(double new_scaling_coefficient)
{
	_scaling_coefficient = new_scaling_coefficient;
}

void Ventricle::SetCycleDuration(double new_cycle_duration)
{
	_cycle_duration = new_cycle_duration;
}

/*RESETTER*/

void Ventricle::ResetBloodDensity()
{
	SetBloodDensity(INIT_BLOOD_DENSITY);
}

void Ventricle::ResetInflowLength()
{
	SetInflowLength(INIT_INFLOW_LENGTH);
}

void Ventricle::ResetScalingCoefficient()
{
	SetScalingCoefficient(INIT_SCALING_COEFFICIENT);
}

