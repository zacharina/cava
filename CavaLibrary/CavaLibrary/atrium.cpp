#include "pch.h"
#include "atrium.h"
#include "definitions.h"
#include <cmath>

void Atrium::ComputeElastance(double time)
{
	elastance = _minimum_elastance + 0.5 * (_maximum_elastance - _minimum_elastance) * ComputeActivationValue(time - _keytime_elastance * _cycle_duration);
}

void Atrium::ComputePressure(double time, double factor)
{
	pressure = elastance * factor * PI * _coefficient * _scaling_coefficient * (pow(radius, 2.0) - pow(_radius_at_zero_pressure, 2.0));
}

void Atrium::ComputeRadius(double time)
{
	GetVolumeAtTime(time);
	radius = pow(3.0 * _volume / (4.0 * PI), 1.0 / 3.0);
}

double Atrium::ComputeActivationValue(double time)
{
	double result = 0.0;
	if (time < _cycle_duration && time >= _atrial_duration * _cycle_duration)
		result = 1.0 - cos(2.0 * PI * ((time - _atrial_duration * _cycle_duration) / (_cycle_duration - _atrial_duration * _cycle_duration)));
	return result;
}

/*GETTER*/

void Atrium::GetVolumeAtTime(double time)
{
	//note: inefficient //to be changed with volume calculation
	double cycle_time_percentage = time / _cycle_duration;
	if (cycle_time_percentage == 0.0)
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

double Atrium::GetMinimumElastance()
{
	return _minimum_elastance;
}

double Atrium::GetMaximumElastance()
{
	return _maximum_elastance;
}

double Atrium::GetZeroPressureRadius()
{
	return _radius_at_zero_pressure;
}

double Atrium::GetCycleDuration()
{
	return _cycle_duration;
}

double Atrium::GetAtrialDuration()
{
	return _atrial_duration;
}

double Atrium::GetVolume()
{
	return _volume;
}

double Atrium::GetElastanceKeytimeInCycle()
{
	return _keytime_elastance;
}

/*SETTER*/

void Atrium::SetMinimumElastance(double new_minimum_elastance)
{
	_minimum_elastance = new_minimum_elastance;
}

void Atrium::SetMaximumElastance(double new_maximum_elastance)
{
	_maximum_elastance = new_maximum_elastance;
}

void Atrium::SetZeroPressureRadius(double new_zero_pressure_radius)
{
	_radius_at_zero_pressure = new_zero_pressure_radius;
}

void Atrium::SetCycleDuration(double new_cycle_duration)
{
	_cycle_duration = new_cycle_duration;
}

void Atrium::SetAtrialDuration(double new_atrial_duration)
{
	_atrial_duration = new_atrial_duration;
}

void Atrium::SetVolume(double new_volume)
{
	_volume = new_volume;
}

void Atrium::SetElastanceKeytimeInCycle(double new_keytime)
{
	_keytime_elastance = new_keytime;
}

/*RESETTER*/

void Atrium::ResetMinimumElastance()
{
	SetMinimumElastance(INIT_MINIMUM_ELASTANCE);
}

void Atrium::ResetMaximumElastance()
{
	SetMaximumElastance(INIT_MAXIMUM_ELASTANCE);
}

void Atrium::ResetZeroPressureRadius()
{
	SetZeroPressureRadius(INIT_RADIUS_AT_ZERO_PRESSURE);
}

void Atrium::ResetElastanceKeytimeInCycle()
{
	SetElastanceKeytimeInCycle(INIT_KEYTIME_ELASTANCE);
}