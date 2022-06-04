#pragma once
#include <vector>


class __declspec(dllexport) Atrium
{
public:
	Atrium(double cycle_duration, double volume_over_time[9]) {
		_cycle_duration = cycle_duration;
		_atrial_duration = 0.8 * cycle_duration;
		_volume_at_zero_pressure = volume_over_time[0];
		for (int i = 0; i < 9; i++) {
			_volume_over_time[i] = volume_over_time[i];
			if (_volume_over_time[i] < _volume_at_zero_pressure)
				_volume_at_zero_pressure = _volume_over_time[i];
		}
		_volume_at_zero_pressure -= 1.0;
	};
	~Atrium() = default;

	double elastance = 0.0; //mmHg/ml
	double pressure = 0.0; //mmHg
	double radius = 0.0; //cm

	void Radius(double time);
	double Elastance(double time);
	void Pressure(double time, double factor);

	double MinimumElastance();
	double MaximumElastance();
	double ZeroPressureVolume();
	double ZeroPressureRadius();
	double CycleDuration();
	double AtrialDuration();
	double VolumeAtZeroPressure();
	double Volume();
	double KeytimeInCycle();

	void MinimumElastance(double new_minimum_elastance);
	void MaximumElastance(double new_maximum_elastance);
	void ZeroPressureVolume(double new_zero_pressure_volume);
	void ZeroPressureRadius(double new_zero_pressure_radius);
	void CycleDuration(double new_cycle_duration);
	void AtrialDuration(double new_atrial_duration);
	void VolumeAtZeroPressure(double new_volume);
	void Volume(double new_volume);
	void KeytimeInCycle(double new_keytime);

	void ResetMinimumElastance();
	void ResetMaximumElastance();
	void ResetZeroPressureVolume();
	void ResetZeroPressureRadius();
	void ResetKeytimeInCycle();
	void ResetVolumeAtZeroPressure();

private:
	double ActivationFunction(double time);
	void VolumeAtTime(double time);

	double _cycle_duration = 0.0; //s
	double _atrial_duration = 0.8; //%
	double _minimum_elastance = 0.2; //mmHg/ml
	double _maximum_elastance = 0.3; //mmHg/ml
	double _volume_at_zero_pressure = 5.0; //cm3
	double _radius_at_zero_pressure = 0.0; //cm
	double _volume = 0.0; //cm3
	double _volume_over_time[9] = { 0 }; //ml
	
	double _keytime_1 = 0.05; //%
	double _scaling_coefficient = 5.5;
	double _coefficient = 1.2;
};

