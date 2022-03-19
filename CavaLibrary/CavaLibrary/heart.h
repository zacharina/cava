#pragma once

#include "atrium.h"
#include "bodypart.h"
#include "ventricle.h"

class __declspec(dllexport) Heart : public BodyPart
{
public:
	Heart() : BodyPart() {
		left_atrium = new Atrium(_cycle_duration, _volume_atrium_left);
		right_atrium = new Atrium(_cycle_duration, _volume_atrium_right);
		left_ventricle = new Ventricle(_volume_ventricle_left, 2.5, 1.15, _cycle_duration, _keytime_1, _keytime_2, 15);
		right_ventricle = new Ventricle(_volume_ventricle_right, 1, 1.75, _cycle_duration, _keytime_1, _keytime_2, 40);
	};
	~Heart() {
		delete left_atrium;
		delete right_atrium;
		delete left_ventricle;
		delete right_ventricle;
	}

	void OxygenTransport(double time, int inflow, double& oxygen, HumanCharacteristic human_characteristic);
	
	Atrium* left_atrium;
	Atrium* right_atrium;
	Ventricle* left_ventricle;
	Ventricle* right_ventricle;

	double flow_rate = 0.0; //l/min

	double AorticValveFlowRate();
	double MitralValveFlowRate();
	double PulmonaryValveFlowRate();
	double TricuspidValveFlowRate();
	double HeartRate();
	double StrokeVolume();
	double CycleDuration();
	double VolumeAtriumLeft();
	double VolumeAtriumRight();
	double VolumeVentricleLeft();
	double VolumeVentricleRight();
	double RadiusSummandLV();
	double RadiusSummandRV();

	void AorticValveFlowRate(double new_aortic_valve_flow_rate);
	void MitralValveFlowRate(double new_mitral_valve_flow_rate);
	void PulmonaryValveFlowRate(double new_pulmonary_valve_flow_rate);
	void TricuspidValveFlowRate(double new_tricuspid_valve_flow_rate);
	void HeartRate(double new_heart_rate);
	void StrokeVolume(double new_stroke_volume);
	void CycleDuration(double new_cycle_duration);
	void VolumeAtriumLeft(double new_volume_atrium_left);
	void VolumeAtriumRight(double new_volume_atrium_right);
	void VolumeVentricleLeft(double new_volume_ventricle_left);
	void VolumeVentricleRight(double new_volume_ventricle_right);
	void RadiusSummandLV(double new_radius_summand);
	void RadiusSummandRV(double new_radius_summand);

	void ResetAorticValveFlowRate();
	void ResetMitralValveFlowRate();
	void ResetPulmonaryValveFlowRate();
	void ResetTricuspidValveFlowRate();
	void ResetHeartRate();
	void ResetStrokeVolume();
	void ResetCycleDuration();
	void ResetVolumeAtriumLeft();
	void ResetVolumeAtriumRight();
	void ResetVolumeVentricleLeft();
	void ResetVolumeVentricleRight();
	void ResetRadiusSummandLV();
	void ResetRadiusSummandRV();
	
private:
	void FlowRate();
	void Volume();
	
	double _aortic_valve_flow_rate = 182; //kg/s
	double _mitral_valve_flow_rate = 221; //kg/s
	double _pulmonary_valve_flow_rate = 320; //kg/s
	double _tricuspid_valve_flow_rate = 126; //kg/s
	
	double _heart_rate = 70; //bpm
	double _stroke_volume = 0.08; //ml
	
	double _cycle_duration = 0.8; //s
	double _keytime_1 = 0.33 * _cycle_duration; //s
	double _keytime_2 = 0.45 * _cycle_duration;//s
	
	double _volume_atrium_left = 30.0; //cm3
	double _volume_atrium_right = 30.0; //cm3
	double _volume_ventricle_left = 60.0; //cm3
	double _volume_ventricle_right = 75.0; //cm3
	double _volume = _volume_atrium_left + _volume_atrium_right + _volume_ventricle_left + _volume_ventricle_right; //cm3

	//Addends of by Mathematica solved equations
	double _radius_addend_lv = 1; //left ventricle
	double _radius_addend_rv = 1; //right ventricle
};

