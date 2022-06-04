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
void Trachea::OxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic)
{
	oxygen -= block_percentage;
	this->oxygen = oxygen;
	ReynoldsNumber();
	Womersley();
	FlowRate();
}

void Trachea::ReynoldsNumber()
{
	double tmp_tracheal_diameter = _tracheal_diameter * 0.001; //unit adjustment to m
	_reynolds_number = (_mean_flow_speed * tmp_tracheal_diameter) / _viscosity_of_air;
}

double Trachea::Womersley()
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

double Trachea::TrachealDiameter()
{
	return _tracheal_diameter;
}

double Trachea::ViscosityOfAir()
{
	return _viscosity_of_air;
}

double Trachea::MeanFlowSpeed()
{
	return _mean_flow_speed;
}

double Trachea::RespiratoryRate()
{
	return _respiratory_rate;
}

double Trachea::OuterThickness()
{
	return _outer_thickness;
}

int Trachea::Inflow()
{
	return _inflow;
}

void Trachea::TrachealDiameter(double new_tracheal_diameter)
{
	_tracheal_diameter = new_tracheal_diameter;
}

void Trachea::ViscosityOfAir(double new_viscosity_of_air)
{
	_viscosity_of_air = new_viscosity_of_air;
}

void Trachea::MeanFlowSpeed(double new_mean_flow_speed)
{
	_mean_flow_speed = new_mean_flow_speed;
}

void Trachea::RespiratoryRate(double new_respiratory_rate)
{
	_respiratory_rate = new_respiratory_rate;
}

void Trachea::OuterThickness(double new_thickness)
{
	_outer_thickness = new_thickness;
}

void Trachea::ResetTrachealDiameter()
{
	_tracheal_diameter = 18;
}

void Trachea::ResetViscosityOfAir()
{
	_viscosity_of_air = 1.46 * 0.00001;
}

void Trachea::ResetMeanFlowSpeed()
{
	_mean_flow_speed = 3.4;
}

void Trachea::ResetBreathingTime()
{
	_breathing_time = 60;
}

void Trachea::ResetOuterThickness()
{
	_outer_thickness = 3;
}

void Trachea::FlowRate()
{
	CrossSectionalArea();
	double tmp_tracheal_diameter = _tracheal_diameter * 0.001; //unit adjustment to m
	flow_rate = _reynolds_number * _viscosity_of_air  * _cross_sectional_area / tmp_tracheal_diameter;
	flow_rate *= 60000; //unit adjustment from m3/s in l/min
	if (_inflow == -1) {
		_breathing_time = 60 / _respiratory_rate;
		double tmp_breathing_time = _breathing_time * 0.01667; //unit adjustment to min
		double tmp_inhalation_time = _inhalation_time * 0.01667; //unit adjustment to min
		flow_rate *= (tmp_inhalation_time / (tmp_breathing_time - tmp_inhalation_time));
	}
}

void Trachea::CrossSectionalArea()
{
	_cross_sectional_area = 0.25 * PI * (pow(_tracheal_diameter * 0.001, 2) - pow(_tracheal_diameter * 0.001 - 2 * (_outer_thickness * 0.001), 2)); //unit adjustment to 
}

