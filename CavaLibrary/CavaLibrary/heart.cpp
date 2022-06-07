#include "pch.h"
#include "heart.h"
#include <iostream>

using namespace std;

/*
* All heart related calculation combined, including oxygen transport
* @param time					time passed since the last frame/mathod call
* @param oxygen					provided amount of oxygen to the in percent
* @param human_characteristic
*/
void Heart::ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic)
{
	ComputeFlowRate();
	left_atrium->ComputeRadius(time);
	right_atrium->ComputeRadius(time);
	left_atrium->ComputeElastance(time);
	right_atrium->ComputeElastance(time);
	left_atrium->ComputePressure(time, _coefficient_radius_la);
	right_atrium->ComputePressure(time, _coefficient_radius_ra);
	left_ventricle->ComputeRadius(time, _radius_addend_lv);
	right_ventricle->ComputeRadius(time, _radius_addend_rv);
	left_ventricle->ComputeInflowInertance();
	right_ventricle->ComputeInflowInertance();
	left_ventricle->ComputePressure(time, _coefficient_pressure_lv);
	right_ventricle->ComputePressure(time, _coefficient_pressure_rv);

	SetOxygenSaturationFor(human_characteristic);
	SetHemoglobinFor(human_characteristic);
	ComputeVolume();
	this->oxygen = GetOxygenContent(oxygen_saturation, hemoglobin_level, _volume);
}

void Heart::ComputeFlowRate()
{
	flow_rate = _stroke_volume * _heart_rate;
}

void Heart::ComputeVolume()
{
	_volume = right_atrium->GetVolume() + left_atrium->GetVolume() + right_ventricle->GetVolume() + left_ventricle->GetVolume();
}

/*GETTER*/

double Heart::GetHeartRate()
{
	return _heart_rate;
}

double Heart::GetStrokeVolume()
{
	return _stroke_volume;
}

double Heart::GetCycleDuration()
{
	return _cycle_duration;
}

double Heart::GetRadiusSummandLV()
{
	return _radius_addend_lv;
}

double Heart::GetRadiusSummandRV()
{
	return _radius_addend_rv;
}

/*SETTER*/

void Heart::SetCycleDuration(double new_cycle_duration)
{
	_cycle_duration = new_cycle_duration;
	_heart_rate = 60.0 / _cycle_duration;
	left_ventricle->SetCycleDuration(_cycle_duration);
	right_ventricle->SetCycleDuration(_cycle_duration);
	left_atrium->SetCycleDuration(_cycle_duration);
	right_atrium->SetCycleDuration(_cycle_duration);
}

void Heart::SetHeartRate(double new_heart_rate)
{
	_heart_rate = new_heart_rate;
	_cycle_duration = 60.0 / _heart_rate;
	left_ventricle->SetCycleDuration(_cycle_duration);
	right_ventricle->SetCycleDuration(_cycle_duration);
	left_atrium->SetCycleDuration(_cycle_duration);
	right_atrium->SetCycleDuration(_cycle_duration);
}

void Heart::SetStrokeVolume(double new_stroke_volume)
{
	_stroke_volume = new_stroke_volume;
}

void Heart::SetRadiusSummandLV(double new_radius_addend)
{
	_radius_addend_lv = new_radius_addend;
}

void Heart::SetRadiusSummandRV(double new_radius_addend)
{
	_radius_addend_rv = new_radius_addend;
}

/*RESETTER*/

void Heart::ResetHeartRate()
{
	SetHeartRate(INIT_HEART_RATE);
	SetCycleDuration(INIT_CYCLE_DURATION);
}

void Heart::ResetStrokeVolume()
{
	_stroke_volume = INIT_CYCLE_DURATION;
}

void Heart::ResetCycleDuration()
{
	SetCycleDuration(INIT_CYCLE_DURATION);
	SetHeartRate(INIT_HEART_RATE);
}

void Heart::ResetRadiusSummandLV()
{
	SetRadiusSummandLV(INIT_RADIUS_ADDEND_LV);
}

void Heart::ResetRadiusSummandRV()
{
	SetRadiusSummandRV(INIT_RADIUS_ADDEND_RV);
}
