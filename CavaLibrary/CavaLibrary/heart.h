#pragma once

#include "atrium.h"
#include "bodypart.h"
#include "ventricle.h"
#include <vector>

class __declspec(dllexport) Heart : public BodyPart
{
public:
	Heart() : BodyPart() {
		for (int i = 0; i < 9; i++) {
			_volume_la_over_time[i] = INIT_VOLUME_LA_OVER_TIME[i];
			_volume_ra_over_time[i] = INIT_VOLUME_RA_OVER_TIME[i];
			_volume_lv_over_time[i] = INIT_VOLUME_LV_OVER_TIME[i];
			_volume_rv_over_time[i] = INIT_VOLUME_RV_OVER_TIME[i];
		}

		left_atrium = new Atrium(_cycle_duration, _volume_la_over_time);
		right_atrium = new Atrium(_cycle_duration, _volume_ra_over_time);
		left_ventricle = new Ventricle(INIT_END_SYSTOLIC_ELASTANCE_LV, INIT_COEFFICIENT_RADIUS_LV, _cycle_duration, _keytime_1, _keytime_2, _volume_lv_over_time);
		right_ventricle = new Ventricle(INIT_END_SYSTOLIC_ELASTANCE_RV, INIT_COEFFICIENT_RADIUS_RV, _cycle_duration, _keytime_1, _keytime_2, _volume_rv_over_time);
	
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

	// Exposed Getter Functions for Library usage
	double GetFlowRate(){ return flow_rate; }

	double GetHeartRate();
	double GetStrokeVolume();
	double GetCycleDuration();
	double GetRadiusSummandLV();
	double GetRadiusSummandRV();

	void SetHeartRate(double new_heart_rate);
	void SetStrokeVolume(double new_stroke_volume);
	void SetCycleDuration(double new_cycle_duration);
	void SetRadiusSummandLV(double new_radius_summand);
	void SetRadiusSummandRV(double new_radius_summand);

	void ResetHeartRate();
	void ResetStrokeVolume();
	void ResetCycleDuration();
	void ResetRadiusSummandLV();
	void ResetRadiusSummandRV();
	
private:
	// Constant Values
	const double INIT_ZERO = 0.0;
	const double INIT_HEART_RATE = 60.0; 
	const double INIT_STROKE_VOLUME = 0.08; 
	const double INIT_CYCLE_DURATION = 0.8;
	const double INIT_KEYTIME_1 = 0.33;
	const double INIT_KEYTIME_2 = 0.45;
	const double INIT_VOLUME = 300.0;
	const double INIT_RADIUS_ADDEND_LV = 2.0;
	const double INIT_RADIUS_ADDEND_RV = 1.2; 
	const double INIT_VOLUME_LV_OVER_TIME[9] = { 126.0, 120.0, 69.0, 59.0, 97.0, 105.0, 110.0, 115.0, 126.0 }; 
	const double INIT_VOLUME_RV_OVER_TIME[9] = { 135.0, 108.0, 73.0, 68.0, 109.0, 115.0, 119.0, 125.0, 135.0 }; 
	const double INIT_VOLUME_LA_OVER_TIME[9] = { 45.0, 51.0, 58.0, 62.0, 36.0, 40.0, 45.0, 49.0, 45.0 }; 
	const double INIT_VOLUME_RA_OVER_TIME[9] = { 50.0, 56.0, 63.0, 67.0, 41.0, 45.0, 50.0, 54.0, 50.0 }; 
	const double INIT_COEFFICIENT_RADIUS_LA = 1.0 / 3.0;
	const double INIT_COEFFICIENT_RADIUS_RA = 2.0 / 3.0;
	const double INIT_COEFFICIENT_RADIUS_LV = 1.15;
	const double INIT_COEFFICIENT_RADIUS_RV = 1.75;
	const double INIT_COEFFICIENT_PRESSURE_LV = 1.0;
	const double INIT_COEFFICIENT_PRESSURE_RV = 1.0;
	const double INIT_END_SYSTOLIC_ELASTANCE_LV = 2.5;
	const double INIT_END_SYSTOLIC_ELASTANCE_RV = 1.0;

	// Relevant private params of the library
	double flow_rate = INIT_ZERO; //l/min
	double _volume = INIT_VOLUME; //ml

	void ComputeFlowRate();
	double _heart_rate = INIT_HEART_RATE; //bpm
	double _stroke_volume = INIT_STROKE_VOLUME; //ml

	void ComputeVolume();

	//Params shared over chambers
	//Time 
	double _cycle_duration = INIT_CYCLE_DURATION; //s
	double _keytime_1 = INIT_KEYTIME_1; //%
	double _keytime_2 = INIT_KEYTIME_2; //%
	//Radii and pressure 
	double _radius_addend_lv = INIT_RADIUS_ADDEND_LV;
	double _radius_addend_rv = INIT_RADIUS_ADDEND_RV;
	double _coefficient_radius_la = INIT_COEFFICIENT_RADIUS_LA;
	double _coefficient_radius_ra = INIT_COEFFICIENT_RADIUS_RA;
	double _coefficient_pressure_lv = INIT_COEFFICIENT_PRESSURE_LV;
	double _coefficient_pressure_rv = INIT_COEFFICIENT_PRESSURE_RV;
	//Volumes
	double _volume_lv_over_time[9] = { 0 }; //ml
	double _volume_rv_over_time[9] = { 0 }; //ml
	double _volume_la_over_time[9] = { 0 }; //ml
	double _volume_ra_over_time[9] = { 0 }; //ml
};

