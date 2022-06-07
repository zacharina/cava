#pragma once
#include <vector>


class __declspec(dllexport) Atrium
{
public:
	Atrium(double cycle_duration, double volume_over_time[9]) {
		_cycle_duration = cycle_duration;
		_atrial_duration = 0.8 * cycle_duration;
		for (int i = 0; i < 9; i++) {
			_volume_over_time[i] = volume_over_time[i];
		}
	};
	~Atrium() = default;

	void ComputeRadius(double time);
	void ComputePressure(double time, double factor);
	void ComputeElastance(double time);

	// Exposed Getter Functions for Library usage
	double GetRadius() { return radius; }
	double GetPressure() { return pressure; }
	double GetElastance() { return elastance; }

	double GetMinimumElastance();
	double GetMaximumElastance();
	double GetZeroPressureRadius();
	double GetCycleDuration();
	double GetAtrialDuration();
	double GetVolume();
	double GetElastanceKeytimeInCycle();

	void SetMinimumElastance(double new_minimum_elastance);
	void SetMaximumElastance(double new_maximum_elastance);
	void SetZeroPressureRadius(double new_zero_pressure_radius);
	void SetCycleDuration(double new_cycle_duration);
	void SetAtrialDuration(double new_atrial_duration);
	void SetVolume(double new_volume);
	void SetElastanceKeytimeInCycle(double new_keytime);

	void ResetMinimumElastance();
	void ResetMaximumElastance();
	void ResetZeroPressureRadius();
	void ResetElastanceKeytimeInCycle();

private:
	// Constant Values
	const double INIT_ZERO = 0.0;
	const double INIT_ATRIAL_DURATION = 0.0;
	const double INIT_MINIMUM_ELASTANCE = 0.0; 
	const double INIT_MAXIMUM_ELASTANCE = 0.0;
	const double INIT_RADIUS_AT_ZERO_PRESSURE = 1.316; 
	const double INIT_KEYTIME_ELASTANCE = 0.05;
	const double INIT_COEFFICIENT = 1.2;
	const double INIT_SCALING_COEFFICIENT = 5.5;

	// Relevant private params of the library
	double elastance = 0.0; //mmHg/ml
	double pressure = 0.0; //mmHg
	double radius = 0.0; //cm

	double ComputeActivationValue(double time);
	double _cycle_duration = INIT_ZERO; //s
	double _atrial_duration = INIT_ATRIAL_DURATION; //%

	void GetVolumeAtTime(double time);
	double _volume = INIT_ZERO; //ml
	double _volume_over_time[9] = { 0 };

	// Elastance variables
	double _minimum_elastance = INIT_MINIMUM_ELASTANCE; //mmHg/ml
	double _maximum_elastance = INIT_MAXIMUM_ELASTANCE; //mmHg/ml
	double _keytime_elastance = INIT_KEYTIME_ELASTANCE; //%
	// Radius pressure
	double _radius_at_zero_pressure = INIT_RADIUS_AT_ZERO_PRESSURE; //cm
	double _scaling_coefficient = INIT_SCALING_COEFFICIENT;
	double _coefficient = INIT_COEFFICIENT;
};

