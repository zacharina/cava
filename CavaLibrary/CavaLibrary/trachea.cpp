#include "pch.h"
#include "trachea.h"
#include "definitions.h"
#include <cmath>

using namespace std;

/*
* All trachea related calculation combined, including oxygen transport
* @param time					time passed since the last frame/mathod call
* @param inflow					inflow or outflow as 1 and 0
* @param oxygen					provided amount of oxygen to the in percent
* @param human_characteristic
*/
void Trachea::ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic)
{
	oxygen -= block_percentage;
	this->oxygen = oxygen;
	ComputeReynoldsNumber();
	ComputeWomersley();
	ComputeFlowRate();
}

void Trachea::ComputeReynoldsNumber()
{
	double tmp_tracheal_diameter = _tracheal_diameter * 0.001; //unit adjustment to m
	_reynolds_number = (_mean_flow_speed * tmp_tracheal_diameter) / _viscosity_of_air;
}

double Trachea::ComputeWomersley()
{
	double tmp_tracheal_diameter = _tracheal_diameter * 0.001; //unit adjustment to m
	_breathing_time = 60 / _respiratory_rate;
	_womersley = tmp_tracheal_diameter / 2.0 * sqrt((2 * PI / _breathing_time) / _viscosity_of_air);
	return _womersley;
}

void Trachea::SwitchFlow()
{
	_inflow = !_inflow;
}

double Trachea::GetTrachealDiameter()
{
	return _tracheal_diameter;
}

double Trachea::GetViscosityOfAir()
{
	return _viscosity_of_air;
}

double Trachea::GetMeanFlowSpeed()
{
	return _mean_flow_speed;
}

double Trachea::GetRespiratoryRate()
{
	return _respiratory_rate;
}

double Trachea::GetOuterThickness()
{
	return _outer_thickness;
}

bool Trachea::GetInflow()
{
	return _inflow;
}

void Trachea::SetTrachealDiameter(double new_tracheal_diameter)
{
	_tracheal_diameter = new_tracheal_diameter;
}

void Trachea::SetViscosityOfAir(double new_viscosity_of_air)
{
	_viscosity_of_air = new_viscosity_of_air;
}

void Trachea::SetMeanFlowSpeed(double new_mean_flow_speed)
{
	_mean_flow_speed = new_mean_flow_speed;
}

void Trachea::SetRespiratoryRate(double new_respiratory_rate)
{
	_respiratory_rate = new_respiratory_rate;
}

void Trachea::SetOuterThickness(double new_thickness)
{
	_outer_thickness = new_thickness;
}

void Trachea::ResetTrachealDiameter()
{
	SetTrachealDiameter(INIT_TRACHEAL_DIAMETER);
}

void Trachea::ResetViscosityOfAir()
{
	SetViscosityOfAir(INIT_VISCOSITY_OF_AIR);
}

void Trachea::ResetMeanFlowSpeed()
{
	SetMeanFlowSpeed(INIT_MEAN_FLOW_SPEED);
}

void Trachea::ResetBreathingTime()
{
	_breathing_time = INIT_BREATHING_TIME;
}

void Trachea::ResetOuterThickness()
{
	SetOuterThickness(INIT_OUTER_THICKNESS);
}

void Trachea::ComputeFlowRate()
{
	ComputeCrossSectionalArea();
	double tmp_tracheal_diameter = _tracheal_diameter * 0.001; //unit adjustment to m
	flow_rate = _reynolds_number * _viscosity_of_air  * _cross_sectional_area / tmp_tracheal_diameter;
	flow_rate *= 60000; //unit adjustment from m3/s in l/min
	if (_inflow) {
		_breathing_time = 60 / _respiratory_rate;
		double tmp_breathing_time = _breathing_time * 0.01667; //unit adjustment to min
		double tmp_inhalation_time = _inhalation_time * 0.01667; //unit adjustment to min
		flow_rate *= (tmp_inhalation_time / (tmp_breathing_time - tmp_inhalation_time));
	}
}

void Trachea::ComputeCrossSectionalArea()
{
	_cross_sectional_area = 0.25 * PI * (pow(_tracheal_diameter * 0.001, 2) - pow(_tracheal_diameter * 0.001 - 2 * (_outer_thickness * 0.001), 2)); //unit adjustment to 
}

