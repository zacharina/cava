#include "pch.h"
#include "ventricle.h"
#include "definitions.h"
#include <cmath>

void Ventricle::Radius(double time, double addend, double valve_flow_rate_1, double valve_flow_rate_2)
{
	double coefficients = _coefficient * _scaling_coefficient * PI;
	radius = sqrt(3.0) * time * (valve_flow_rate_1 - valve_flow_rate_2) / (4.0 * coefficients * sqrt(_volume / coefficients)) + addend;
	_inflow_length = 2 * radius;
}

void Ventricle::Radius(double addend)
{
	radius_constant = pow((3 * _volume) / (PI * _coefficient * _scaling_coefficient), 0.5);
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
	_inflow_length = 2 * radius_constant;
}

void Ventricle::ResetScalingCoefficient()
{
	_scaling_coefficient = 8;
}

void Ventricle::PressureActive(double time, double factor)
{
	double radius_at_zero_pressure = pow((3 * _volume_at_zero_pressure) / (PI * _coefficient * _scaling_coefficient), 0.5);
	pressure_active = _end_systolic_elastance * factor * PI * _coefficient * _scaling_coefficient * (pow(radius_constant, 2) - pow(radius_at_zero_pressure, 2)) * ActivationFunction(time);
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
		result = (1 - cos(time / _keytime_1 * PI)) / 2;
	else if (time < _keytime_2)
		result = (1 + cos((time - _keytime_1) / (_keytime_2 - _keytime_1) * PI)) / 2;
	return result;
}