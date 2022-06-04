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

	double inflow_inertance = 0.0; //mmHg*s2/ml
	double pressure_active = 0.0; //mmHg
	double pressure_passive = 0.0; //mmHg
	double pressure = 0.0; //mmHg
	double radius = 2.5; //cm

	void Radius(double time, double addend, double valve_flow_rate_1, double valve_flow_rate_2);
	void Pressure(double time, double factor);
	void InflowInertance();

	double Volume();
	double RadiusAtZeroPressure();
	double EndSystolicElastance();
	double BloodDensity();
	double InflowLength();
	double ScalingCoefficient();
	double CycleDuration();

	void RadiusAtZeroPressure(double new_volume_at_zero_pressure);
	void EndSystolicElastance(double new_end_systolic_elastance);
	void BloodDensity(double new_blood_density);
	void InflowLength(double new_inflow_length);
	void ScalingCoefficient(double new_scaling_coefficient);
	void CycleDuration(double new_cycle_duration);

	void ResetBloodDensity();
	void ResetInflowLength();
	void ResetScalingCoefficient();
	
private:
	void PressureActive(double time, double factor);
	void PressurePassive(double time, double factor);
	double ActivationFunction(double time);
	void VolumeAtTime(double time);

	double _volume = 0.0; //cm3
	double _radius_at_zero_pressure = 0.0; //cm3
	double _end_systolic_elastance = 0.0; //mmHg/ml
	double _coefficient = 0.0;
	double _volume_over_time[9] = { 0 }; //ml

	double _blood_density = 1.06; //g/cm3
	double _inflow_length = 0;
	
	double _scaling_coefficient = 8.0; 
	double _cycle_duration = 0.0; //s
	double _keytime_1 = 0.0; //s
	double _keytime_2 = 0.0; //s
};

