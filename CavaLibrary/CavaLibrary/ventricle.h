#pragma once
#include <vector>


class __declspec(dllexport) Ventricle 
{
public:
	Ventricle(double end_systolic_elastance, double coefficient, double cycle_duration, double keytime_1, double keytime_2, double volume_over_time[9]) {
		_cycle_duration = cycle_duration;
		_keytime_1 = keytime_1;
		_keytime_2 = keytime_2;
		_end_systolic_elastance = end_systolic_elastance;
		_coefficient = coefficient;
		for (int i = 0; i < 9; i++)
			_volume_over_time[i] = volume_over_time[i];
	};
	~Ventricle() = default;

	void ComputeRadius(double time, double addend);
	void ComputePressure(double time, double factor);
	void ComputeInflowInertance();

	double GetVolume();
	double GetRadiusAtZeroPressure();
	double GetEndSystolicElastance();
	double GetBloodDensity();
	double GetInflowLength();
	double GetScalingCoefficient();
	double GetCycleDuration();

	void SetRadiusAtZeroPressure(double new_volume_at_zero_pressure);
	void SetEndSystolicElastance(double new_end_systolic_elastance);
	void SetBloodDensity(double new_blood_density);
	void SetInflowLength(double new_inflow_length);
	void SetScalingCoefficient(double new_scaling_coefficient);
	void SetCycleDuration(double new_cycle_duration);

	void ResetBloodDensity();
	void ResetInflowLength();
	void ResetScalingCoefficient();
	
private:
	// Constant Values
	const double INIT_ZERO = 0.0;
	const double INIT_BLOOD_DENSITY = 1.6;
	const double INIT_SCALING_COEFFICIENT = 0.0;
	const double INIT_RADIUS = 2.5;
	const double INIT_INFLOW_LENGTH = 2.0 * INIT_RADIUS;

	// Relevant private params of the library
	double inflow_inertance = INIT_ZERO; //mmHg*s2/ml
	double pressure_active = INIT_ZERO; //mmHg
	double pressure_passive = INIT_ZERO; //mmHg
	double pressure = INIT_ZERO; //mmHg
	double radius = INIT_RADIUS; //cm

	void ComputePressureActive(double time, double factor);
	void ComputePressurePassive(double time, double factor);
	double _end_systolic_elastance = INIT_ZERO; //mmHg/ml
	double _coefficient = INIT_ZERO;
	double _scaling_coefficient = INIT_SCALING_COEFFICIENT;
	double _radius_at_zero_pressure = INIT_ZERO; //cm3

	double ComputeActivationValue(double time);
	double _cycle_duration = INIT_ZERO; //s
	double _keytime_1 = INIT_ZERO; //s
	double _keytime_2 = INIT_ZERO; //s

	void GetVolumeAtTime(double time);
	double _volume = INIT_ZERO; //cm3
	double _volume_over_time[9] = { 0 }; //ml

	//InflowInertance
	double _blood_density = INIT_BLOOD_DENSITY; //g/cm3
	double _inflow_length = INIT_ZERO;
	
};

