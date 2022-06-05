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

	double elastance = 0.0; //mmHg/ml
	double pressure = 0.0; //mmHg
	double radius = 0.0; //cm

	void ComputeRadius(double time);
	void ComputePressure(double time, double factor);
	void ComputeElastance(double time);

	double MinimumElastance();
	double MaximumElastance();
	double ZeroPressureRadius();
	double CycleDuration();
	double AtrialDuration();
	double Volume();
	double KeytimeInCycle();

	void MinimumElastance(double new_minimum_elastance);
	void MaximumElastance(double new_maximum_elastance);
	void ZeroPressureRadius(double new_zero_pressure_radius);
	void CycleDuration(double new_cycle_duration);
	void AtrialDuration(double new_atrial_duration);
	void Volume(double new_volume);
	void KeytimeInCycle(double new_keytime);

	void ResetMinimumElastance();
	void ResetMaximumElastance();
	void ResetZeroPressureRadius();
	void ResetKeytimeInCycle();

private:
	double ActivationFunction(double time);
	void VolumeAtTime(double time);

	double _cycle_duration = 0.0; //s
	double _atrial_duration = 0.8; //%
	double _minimum_elastance = 0.2; //mmHg/ml
	double _maximum_elastance = 0.3; //mmHg/ml
	double _radius_at_zero_pressure = 1.316;//cm
	double _volume = 0.0; //cm3
	double _volume_over_time[9] = { 0 }; //ml
	
	double _keytime_1 = 0.05; //%
	double _scaling_coefficient = 5.5;
	double _coefficient = 1.2;
};

