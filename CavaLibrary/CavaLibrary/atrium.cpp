#include "pch.h"
#include "atrium.h"
#include "definitions.h"
#include <cmath>


double Atrium::ActivationFunction(double time)
{
	double result = 0;
	if (time < _cycle_duration && time >= _atrial_duration)
		result = 1 - cos(2 * PI * ((time - _atrial_duration) / (_cycle_duration - _atrial_duration)));
	return result;
}

void Atrium::VolumeAtTime(double time)
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

double Atrium::Elastance(double time)
{
	elastance = _minimum_elastance + 0.5 * (_maximum_elastance - _minimum_elastance) * ActivationFunction(time - _keytime_1 * _cycle_duration);
	return elastance;
}

void Atrium::Pressure(double time, double factor)
{
	_radius_at_zero_pressure = pow(3.0 / (4.0 * PI) * _volume_at_zero_pressure, 1.0 / 3.0);
	pressure = elastance * factor * PI * _coefficient * _scaling_coefficient * (pow(radius, 2) - pow(_radius_at_zero_pressure, 2));
}

void Atrium::Radius(double time)
{
	VolumeAtTime(time);
	radius = pow(3.0 / (4.0 * PI) * _volume, 1.0 / 3.0);
}

double Atrium::MinimumElastance()
{
	return _minimum_elastance;
}

double Atrium::MaximumElastance()
{
	return _maximum_elastance;
}

double Atrium::ZeroPressureVolume()
{
	return _volume_at_zero_pressure;
}

double Atrium::ZeroPressureRadius()
{
	return _radius_at_zero_pressure;
}

double Atrium::CycleDuration()
{
	return _cycle_duration;
}

double Atrium::AtrialDuration()
{
	return _atrial_duration;
}

double Atrium::Volume()
{
	return _volume;
}

double Atrium::VolumeAtZeroPressure()
{
	return _volume_at_zero_pressure;
}

double Atrium::KeytimeInCycle()
{
	return _keytime_1;
}

void Atrium::MinimumElastance(double new_minimum_elastance) 
{
	_minimum_elastance = new_minimum_elastance;
}

void Atrium::MaximumElastance(double new_maximum_elastance)
{
	_maximum_elastance = new_maximum_elastance;
}

void Atrium::ZeroPressureVolume(double new_zero_pressure_volume)
{
	_volume_at_zero_pressure = new_zero_pressure_volume;
}

void Atrium::ZeroPressureRadius(double new_zero_pressure_radius)
{
	_radius_at_zero_pressure = new_zero_pressure_radius;
}

void Atrium::CycleDuration(double new_cycle_duration)
{
	_cycle_duration = new_cycle_duration;
}

void Atrium::AtrialDuration(double new_atrial_duration)
{
	_atrial_duration = new_atrial_duration;
}

void Atrium::VolumeAtZeroPressure(double new_volume)
{
	_volume_at_zero_pressure = new_volume;
}

void Atrium::Volume(double new_volume)
{
	_volume = new_volume;
}

void Atrium::KeytimeInCycle(double new_keytime)
{
	_keytime_1 = new_keytime;
}

void Atrium::ResetMinimumElastance()
{
	_minimum_elastance = 0.2;
}

void Atrium::ResetMaximumElastance()
{
	_maximum_elastance = 0.3;
}

void Atrium::ResetZeroPressureVolume()
{
	_volume_at_zero_pressure = 1.06;
}

void Atrium::ResetZeroPressureRadius()
{
	_radius_at_zero_pressure = 1.316;
}

void Atrium::ResetKeytimeInCycle()
{
	_keytime_1 = 0.05;
}

void Atrium::ResetVolumeAtZeroPressure()
{
	_volume_at_zero_pressure = 5.0;
}
