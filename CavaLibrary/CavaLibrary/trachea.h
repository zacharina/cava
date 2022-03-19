#pragma once

#include "bodypart.h"

class __declspec(dllexport) Trachea : public BodyPart
{
public:
	Trachea() : BodyPart() {};
	~Trachea() = default;

	void OxygenTransport(double time, int inflow, double& oxygen, HumanCharacteristic human_characteristic);
	double Womersley();
	
	double block_percentage = 0;
	double flow_rate = 0.0; //l/min

	double TrachealDiameter();
	double ViscosityOfAir();
	double MeanFlowSpeed();
	double RespiratoryRate();
	double Length();

	void TrachealDiameter(double new_tracheal_diameter);
	void ViscosityOfAir(double new_viscosity_of_air);
	void MeanFlowSpeed(double new_mean_flow_speed);
	void RespiratoryRate(double new_respiratory_rate);
	void LengthFemale(double new_length);
	void LengthMale(double new_length);

	void ResetTrachealDiameter();
	void ResetViscosityOfAir();
	void ResetMeanFlowSpeed();
	void ResetBreathingTime();
	void ResetLengthFemale();
	void ResetLengthMale();

private:

	void ReynoldsNumber();
	void FlowRate(int inflow, int female);
	void CrossSectionalArea(int female);

	double _tracheal_diameter = 0.018; //cm
	double _length = 0.0983; //cm
	double _length_female = 0.0983; //cm  
	double _length_male = 0.1051; //cm 
	double _cross_sectional_area = 0; //mm2 
	double _viscosity_of_air = 1.46 * 0.00001; //m2/s
	double _reynolds_number = 0.0;
	double _mean_flow_speed = 3.4256; //m/s
	double _respiratory_rate = 12.5; //bpm
	double _breathing_time = 60 / _respiratory_rate; //s
	double _inhalation_time = 0.5 * _breathing_time; //s
	double _womersley = 0.0;
};

