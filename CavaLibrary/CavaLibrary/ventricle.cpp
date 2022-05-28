#include "pch.h"
#include "ventricle.h"
#include "definitions.h"
#include <cmath>

void Ventricle::Radius(double time, double addend, double valve_flow_rate_1, double valve_flow_rate_2)
{
	VolumeAtTime(time);
	if (time == 0) {
		radius = pow(3 * _volume_at_zero_pressure / (4 * PI), 1.0 / 3.0);
	}
	else {
		double coefficients = _coefficient * _scaling_coefficient * PI;
		radius = (3 * (valve_flow_rate_1 - valve_flow_rate_2) * time) / (2 * coefficients * sqrt((3 * _volume) / coefficients)) + addend;
	}
	_inflow_length = 2 * radius;
}

void Ventricle::InflowInertance()
{
	inflow_inertance = _blood_density * _inflow_length / (PI * radius);
}

double Ventricle::Volume()
{
	return _volume;
}

double Ventricle::VolumeAtZeroPressure()
{
	return _volume_at_zero_pressure;
}

double Ventricle::EndSystolicElastance()
{
	return _end_systolic_elastance;
}

double Ventricle::BloodDensity()
{
	return _blood_density;
}

double Ventricle::InflowLength()
{
	return _inflow_length;
}

double Ventricle::ScalingCoefficient()
{
	return _scaling_coefficient;
}

double Ventricle::CycleDuration()
{
	return _cycle_duration;
}

void Ventricle::VolumeAtZeroPressure(double new_volume_at_zero_pressure)
{
	_volume_at_zero_pressure = new_volume_at_zero_pressure;
}

void Ventricle::EndSystolicElastance(double new_end_systolic_elastance)
{
	_end_systolic_elastance = new_end_systolic_elastance;
}

void Ventricle::BloodDensity(double new_blood_density)
{
	_blood_density = new_blood_density;
}

void Ventricle::InflowLength(double new_inflow_length)
{
	_inflow_length = new_inflow_length;
}

void Ventricle::ScalingCoefficient(double new_scaling_coefficient)
{
	_scaling_coefficient = new_scaling_coefficient;
}

void Ventricle::CycleDuration(double new_cycle_duration)
{
	_cycle_duration = new_cycle_duration;
}

void Ventricle::ResetBloodDensity()
{
	_blood_density = 1.060;
}

void Ventricle::ResetInflowLength()
{
	_inflow_length = 2 * radius;
}

void Ventricle::ResetScalingCoefficient()
{
	_scaling_coefficient = 8;
}

void Ventricle::PressureActive(double time, double factor)
{
	double radius_at_zero_pressure = pow(3 * _volume_at_zero_pressure / (4 * PI), 1.0 / 3.0);
	pressure_active = _end_systolic_elastance * factor * PI * _coefficient * _scaling_coefficient * abs(pow(radius, 2) - pow(radius_at_zero_pressure, 2)) * ActivationFunction(time);
}

void Ventricle::PressurePassive(double time, double factor)
{
	pressure_passive = exp(0.02 * factor * PI * _coefficient * pow(radius, 2) *_scaling_coefficient) - 1;
}

void Ventricle::Pressure(double time, double factor)
{
	PressureActive(time, factor);
	PressurePassive(time, factor);
	pressure = pressure_active + pressure_passive;
}

double Ventricle::ActivationFunction(double time)
{
	double result = 0;
	if (time < _keytime_1)
		result = (1 - cos((time / _keytime_1) * PI)) / 2;
	else if (time < _keytime_2)
		result = (1 + cos((time - _keytime_1) / (_keytime_2 - _keytime_1) * PI)) / 2;
	return result;
}

void Ventricle::VolumeAtTime(double time)
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
