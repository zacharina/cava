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
void Trachea::OxygenTransport(double time, int inflow, double& oxygen, HumanCharacteristic human_characteristic)
{
	oxygen -= block_percentage;
	this->oxygen = oxygen;
	ReynoldsNumber();
	int female = human_characteristic.gender == Gender::female ? 1 : 0;
	FlowRate(inflow, female);
}

void Trachea::ReynoldsNumber()
{
	_reynolds_number = (_mean_flow_speed * _tracheal_diameter) / _viscosity_of_air;
}

double Trachea::Womersley()
{
	_womersley = _tracheal_diameter / 2.0 * sqrt((2 * PI / _breathing_time) / _viscosity_of_air);
	return _womersley;
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

double Trachea::Length()
{
	return _length;
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

void Trachea::LengthFemale(double new_length)
{
	_length_female = new_length;
}

void Trachea::LengthMale(double new_length)
{
	_length_male = new_length;
}

void Trachea::ResetTrachealDiameter()
{
	_tracheal_diameter = 18;
}

void Trachea::ResetViscosityOfAir()
{
	_viscosity_of_air = 1.46 * 0.00005;
}

void Trachea::ResetMeanFlowSpeed()
{
	_mean_flow_speed = 3.4;
}

void Trachea::ResetBreathingTime()
{
	_breathing_time = 60;
}

void Trachea::ResetLengthFemale()
{
	_length_female = 0.0983;
}

void Trachea::ResetLengthMale()
{
	_length_male = 0.105;
}

void Trachea::FlowRate(int inflow, int female)
{
	CrossSectionalArea(female);
	flow_rate = _reynolds_number * _viscosity_of_air  * _cross_sectional_area / _tracheal_diameter;
	flow_rate *= 60; //unit adjustment
	if (!inflow) {
		double tmp_breathing_time = _breathing_time * 0.01667;
		double tmp_inhalation_time = _inhalation_time * 0.01667;
		flow_rate *= (tmp_inhalation_time / (tmp_breathing_time - tmp_inhalation_time));
	}
}

void Trachea::CrossSectionalArea(int female)
{
	if(female)
		_length = 0.0983;
	else
		_length = 0.105;

	_cross_sectional_area = 0.5 * _tracheal_diameter * _length * PI * PI;
}

