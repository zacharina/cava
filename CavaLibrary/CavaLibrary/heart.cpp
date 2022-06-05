#include "pch.h"
#include "heart.h"
#include <iostream>

using namespace std;

/*
* All heart related calculation combined, including oxygen transport
* @param time					time passed since the last frame/mathod call
* @param inflow					inflow or outflow as 1 and 0
* @param oxygen					provided amount of oxygen to the in percent
* @param human_characteristic
*/
void Heart::ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic)
{
	FlowRate();
	left_atrium->ComputeRadius(time);
	right_atrium->ComputeRadius(time);
	left_atrium->ComputeElastance(time);
	right_atrium->ComputeElastance(time);
	left_atrium->ComputePressure(time, (1.0/3.0));
	right_atrium->ComputePressure(time, (4.0/6.0));
	left_ventricle->Radius(time, _radius_addend_lv);
	right_ventricle->Radius(time, _radius_addend_rv);
	left_ventricle->InflowInertance();
	right_ventricle->InflowInertance();
	left_ventricle->Pressure(time, 1.0);
	right_ventricle->Pressure(time, 1.0);

	SetOxygenSaturationFor(human_characteristic);
	SetHemoglobinFor(human_characteristic);
	Volume();
	this->oxygen = GetOxygenContent(oxygen_saturation, hemoglobin_level, _volume);
}

void Heart::CycleDuration(double new_cycle_duration)
{
	_cycle_duration = new_cycle_duration;
	_heart_rate = 60.0 / _cycle_duration;
	left_ventricle->CycleDuration(_cycle_duration);
	right_ventricle->CycleDuration(_cycle_duration);
	left_atrium->CycleDuration(_cycle_duration);
	right_atrium->CycleDuration(_cycle_duration);
}

void Heart::HeartRate(double new_heart_rate)
{
	_heart_rate = new_heart_rate;
	_cycle_duration = 60.0 / _heart_rate;
	left_ventricle->CycleDuration(_cycle_duration);
	right_ventricle->CycleDuration(_cycle_duration);
	left_atrium->CycleDuration(_cycle_duration);
	right_atrium->CycleDuration(_cycle_duration);
}

void Heart::Volume()
{
	_volume = right_atrium->Volume() + left_atrium->Volume() + right_ventricle->Volume() + left_ventricle->Volume();
}

void Heart::FlowRate()
{
	flow_rate = _stroke_volume * _heart_rate;
}

// Getter/Setter/Resetter

void Heart::StrokeVolume(double new_stroke_volume)
{
	_stroke_volume = new_stroke_volume;
}

void Heart::RadiusSummandLV(double new_radius_addend)
{
	_radius_addend_lv = new_radius_addend;
}

void Heart::RadiusSummandRV(double new_radius_addend)
{
	_radius_addend_rv = new_radius_addend;
}


void Heart::ResetHeartRate()
{
	_heart_rate = 70.0;
	_cycle_duration = 0.8;
}

void Heart::ResetStrokeVolume()
{
	_stroke_volume = 80.0;
}

void Heart::ResetCycleDuration()
{
	_cycle_duration = 0.8;
	_heart_rate = 70.0;
}

void Heart::ResetRadiusSummandLV()
{
	_radius_addend_lv = 1.0;
}

void Heart::ResetRadiusSummandRV()
{
	_radius_addend_rv = 1.0;
}

double Heart::HeartRate()
{
	return _heart_rate;
}

double Heart::StrokeVolume()
{
	return _stroke_volume;
}

double Heart::CycleDuration()
{
	return _cycle_duration;
}

double Heart::RadiusSummandLV()
{
	return _radius_addend_lv;
}

double Heart::RadiusSummandRV()
{
	return _radius_addend_rv;
}