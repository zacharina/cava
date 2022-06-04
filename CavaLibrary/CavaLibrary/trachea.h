#pragma once

#include "bodypart.h"

class __declspec(dllexport) Trachea : public BodyPart
{
public:
	Trachea() : BodyPart() {};
	~Trachea() = default;

	void OxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic);
	double Womersley();
	
	double block_percentage = 0.0;
	double flow_rate = 0.0; //l/min

	void SwitchFlow();

	double TrachealDiameter();
	double ViscosityOfAir();
	double MeanFlowSpeed();
	double RespiratoryRate();
	double OuterThickness();
	int Inflow();

	void TrachealDiameter(double new_tracheal_diameter);
	void ViscosityOfAir(double new_viscosity_of_air);
	void MeanFlowSpeed(double new_mean_flow_speed);
	void RespiratoryRate(double new_respiratory_rate);
	void OuterThickness(double new_thickness);

	void ResetTrachealDiameter();
	void ResetViscosityOfAir();
	void ResetMeanFlowSpeed();
	void ResetBreathingTime();
	void ResetOuterThickness();

private:

	void ReynoldsNumber();
	void FlowRate();
	void CrossSectionalArea();

	bool _inflow = true;
	double _tracheal_diameter = 18.0; //mm
	double _cross_sectional_area = 0.0; //mm2 
	double _viscosity_of_air = 1.46 * 0.00001; //m2/s
	double _reynolds_number = 0.0;
	double _mean_flow_speed = 3.4; //m/s
	double _respiratory_rate = 16.0; //bpm
	double _breathing_time = 60.0 / _respiratory_rate; //s
	double _inhalation_time = 0.45 * _breathing_time; //s
	double _womersley = 0.0;
	double _outer_thickness = 3.0; //mm
};

