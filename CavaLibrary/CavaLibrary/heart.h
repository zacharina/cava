#pragma once

#include "atrium.h"
#include "bodypart.h"
#include "ventricle.h"
#include <vector>

class __declspec(dllexport) Heart : public BodyPart
{
public:
	Heart() : BodyPart() {
		left_atrium = new Atrium(_cycle_duration, _left_atrial_volume_over_time);
		right_atrium = new Atrium(_cycle_duration, _right_atrial_volume_over_time);
		left_ventricle = new Ventricle(2.5, 1.15, _cycle_duration, _keytime_1, _keytime_2, _left_ventricular_volume_over_time);
		right_ventricle = new Ventricle(1, 1.75, _cycle_duration, _keytime_1, _keytime_2, _right_ventricular_volume_over_time);
	};
	~Heart() {
		delete left_atrium;
		delete right_atrium;
		delete left_ventricle;
		delete right_ventricle;
	}

	void ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic);
	
	Atrium* left_atrium;
	Atrium* right_atrium;
	Ventricle* left_ventricle;
	Ventricle* right_ventricle;

	double flow_rate = 0.0; //l/min

	double HeartRate();
	double StrokeVolume();
	double CycleDuration();
	double RadiusSummandLV();
	double RadiusSummandRV();

	void HeartRate(double new_heart_rate);
	void StrokeVolume(double new_stroke_volume);
	void CycleDuration(double new_cycle_duration);
	void RadiusSummandLV(double new_radius_summand);
	void RadiusSummandRV(double new_radius_summand);

	void ResetHeartRate();
	void ResetStrokeVolume();
	void ResetCycleDuration();
	void ResetRadiusSummandLV();
	void ResetRadiusSummandRV();
	
private:
	void FlowRate();
	void Volume();
	
	double _heart_rate = 60.0; //bpm
	double _stroke_volume = 0.08; //L
	
	double _cycle_duration = 0.8; //s
	double _keytime_1 = 0.33; //%
	double _keytime_2 = 0.45; //%
	
	double _volume = 0.0; //cm3

	double _radius_addend_lv = 2.0; //left ventricle
	double _radius_addend_rv = 1.2; //right ventricle

	double _left_ventricular_volume_over_time[9] = {126.0, 120.0, 69.0, 59.0, 97.0, 105.0, 110.0, 115.0, 126.0};
	double _right_ventricular_volume_over_time[9] = {135.0, 108.0, 73.0, 68.0, 109.0, 115.0, 119.0, 125.0, 135.0};
	double _left_atrial_volume_over_time[9] = {45.0, 51.0, 58.0, 62.0, 36.0, 40.0, 45.0, 49.0, 45.0};
	double _right_atrial_volume_over_time[9] = {50.0, 56.0, 63.0, 67.0, 41.0, 45.0, 50.0, 54.0, 50.0};
};

