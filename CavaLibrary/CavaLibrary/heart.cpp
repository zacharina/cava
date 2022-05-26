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
void Heart::OxygenTransport(double time, int inflow, double& oxygen, HumanCharacteristic human_characteristic)
{
	FlowRate();
	left_atrium->Radius(time);
	right_atrium->Radius(time);
	left_atrium->Elastance(time);
	right_atrium->Elastance(time);
	left_atrium->Pressure(time, 1.0/3.0);
	right_atrium->Pressure(time, 4.0/6.0);
	left_ventricle->Radius(time, _radius_addend_lv, _mitral_valve_flow_rate, _aortic_valve_flow_rate);
	right_ventricle->Radius(time, _radius_addend_rv, _tricuspid_valve_flow_rate, _pulmonary_valve_flow_rate);
	left_ventricle->InflowInertance();
	right_ventricle->InflowInertance();
	left_ventricle->Pressure(time, 1);
	right_ventricle->Pressure(time, 1);

	OxygenSaturation(human_characteristic);
	Hemoglobin(human_characteristic);
	this->oxygen = OxygenContent(oxygen_saturation, hemoglobin_level, _volume);
}

void Heart::FlowRate()
{
	flow_rate = _stroke_volume * _heart_rate;
}

void Heart::Volume()
{
	_volume = _volume_atrium_left + _volume_atrium_right + _volume_ventricle_left + _volume_ventricle_right;
}

void Heart::AorticValveFlowRate(double new_aortic_valve_flow_rate)
{
	_aortic_valve_flow_rate = new_aortic_valve_flow_rate;
}

void Heart::MitralValveFlowRate(double new_mitral_valve_flow_rate)
{
	_mitral_valve_flow_rate = new_mitral_valve_flow_rate;
}

void Heart::PulmonaryValveFlowRate(double new_pulmonary_valve_flow_rate)
{
	_pulmonary_valve_flow_rate = new_pulmonary_valve_flow_rate;
}

void Heart::TricuspidValveFlowRate(double new_tricuspid_valve_flow_rate)
{
	_tricuspid_valve_flow_rate = new_tricuspid_valve_flow_rate;
}

void Heart::HeartRate(double new_heart_rate)
{
	_heart_rate = new_heart_rate;
}

void Heart::StrokeVolume(double new_stroke_volume)
{
	_stroke_volume = new_stroke_volume;
}

void Heart::CycleDuration(double new_cycle_duration)
{
	_cycle_duration = new_cycle_duration;
}

void Heart::VolumeAtriumLeft(double new_volume_atrium_left)
{
	_volume_atrium_left = new_volume_atrium_left;
	Volume();
}

void Heart::VolumeAtriumRight(double new_volume_atrium_right)
{
	_volume_atrium_right = new_volume_atrium_right;
	Volume();
}

void Heart::VolumeVentricleLeft(double new_volume_ventricle_left)
{
	_volume_ventricle_left = new_volume_ventricle_left;
	Volume();
}

void Heart::VolumeVentricleRight(double new_volume_ventricle_right)
{
	_volume_ventricle_right = new_volume_ventricle_right;
	Volume();
}

void Heart::RadiusSummandLV(double new_radius_addend)
{
	_radius_addend_lv = new_radius_addend;
}

void Heart::RadiusSummandRV(double new_radius_addend)
{
	_radius_addend_rv = new_radius_addend;
}

void Heart::ResetAorticValveFlowRate()
{
	_aortic_valve_flow_rate = 182;
}

void Heart::ResetMitralValveFlowRate()
{
	_mitral_valve_flow_rate = 221;
}

void Heart::ResetPulmonaryValveFlowRate()
{
	_pulmonary_valve_flow_rate = 320;
}

void Heart::ResetTricuspidValveFlowRate()
{
	_tricuspid_valve_flow_rate = 126;
}

void Heart::ResetHeartRate()
{
	_heart_rate = 70;
}

void Heart::ResetStrokeVolume()
{
	_stroke_volume = 80;
}

void Heart::ResetCycleDuration()
{
	_cycle_duration = 0.8;
}

void Heart::ResetVolumeAtriumLeft()
{
	_volume_atrium_left = 5.0;
	Volume();
}

void Heart::ResetVolumeAtriumRight()
{
	_volume_atrium_right = 5.0;
	Volume();
}

void Heart::ResetVolumeVentricleLeft()
{
	_volume_ventricle_left = 15.0;
	Volume();
}

void Heart::ResetVolumeVentricleRight()
{
	_volume_ventricle_right = 40.0;
	Volume();
}

void Heart::ResetRadiusSummandLV()
{
	_radius_addend_lv = 1;
}

void Heart::ResetRadiusSummandRV()
{
	_radius_addend_rv = 1;
}

double Heart::AorticValveFlowRate()
{
	return _aortic_valve_flow_rate;
}

double Heart::MitralValveFlowRate()
{
	return _mitral_valve_flow_rate;
}

double Heart::PulmonaryValveFlowRate()
{
	return _pulmonary_valve_flow_rate;
}

double Heart::TricuspidValveFlowRate()
{
	return _tricuspid_valve_flow_rate;
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

double Heart::VolumeAtriumLeft()
{
	return _volume_atrium_left;
}

double Heart::VolumeAtriumRight()
{
	return _volume_atrium_right;
}

double Heart::VolumeVentricleLeft()
{
	return _volume_ventricle_left;
}

double Heart::VolumeVentricleRight()
{
	return _volume_ventricle_right;
}

double Heart::RadiusSummandLV()
{
	return _radius_addend_lv;
}

double Heart::RadiusSummandRV()
{
	return _radius_addend_rv;
}