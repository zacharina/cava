#pragma once

#include "bodypart.h"

class __declspec(dllexport) Trachea : public BodyPart
{
public:
	Trachea() : BodyPart() {};
	~Trachea() = default;

	void ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic);
	double ComputeWomersley();
	
	double GetBlockPercentage() { return block_percentage; }
	void SetBlockPercentage(double val) { block_percentage = val; }
	double GetFlowRate() { return flow_rate; }

	void SwitchFlow();

	double GetTrachealDiameter();
	double GetViscosityOfAir();
	double GetMeanFlowSpeed();
	double GetRespiratoryRate();
	double GetOuterThickness();
	bool GetInflow();

	void SetTrachealDiameter(double new_tracheal_diameter);
	void SetViscosityOfAir(double new_viscosity_of_air);
	void SetMeanFlowSpeed(double new_mean_flow_speed);
	void SetRespiratoryRate(double new_respiratory_rate);
	void SetOuterThickness(double new_thickness);

	void ResetTrachealDiameter();
	void ResetViscosityOfAir();
	void ResetMeanFlowSpeed();
	void ResetBreathingTime();
	void ResetOuterThickness();

private:
	const bool INIT_INFLOW = true;
	const double INIT_TRACHEAL_DIAMETER = 18.0;
	const double INIT_CROSS_SECTIONAL_AREA = 0.0;
	const double INIT_VISCOSITY_OF_AIR = 1.46 * 0.00001;
	const double INIT_REYNOLDS_NUMER = 0.0;
	const double INIT_MEAN_FLOW_SPEED = 3.4;
	const double INIT_RESPIRATORY_RATE = 16.0;
	const double INIT_BREATHING_TIME = 60.0 / INIT_RESPIRATORY_RATE;
	const double INIT_INHALATION_TIME = 0.45 * INIT_BREATHING_TIME;
	const double INIT_WOMERSLEY = 0.0;
	const double INIT_OUTER_THICKNESS = 3.0;

	void ComputeReynoldsNumber();
	void ComputeFlowRate();
	void ComputeCrossSectionalArea();

	double block_percentage = 0.0;
	double flow_rate = 0.0; //l/min

	bool _inflow = INIT_INFLOW;
	double _tracheal_diameter = INIT_TRACHEAL_DIAMETER; //mm
	double _cross_sectional_area = INIT_CROSS_SECTIONAL_AREA; //mm2 
	double _viscosity_of_air = INIT_VISCOSITY_OF_AIR; //m2/s
	double _reynolds_number = INIT_REYNOLDS_NUMER;
	double _mean_flow_speed = INIT_MEAN_FLOW_SPEED; //m/s
	double _respiratory_rate = INIT_RESPIRATORY_RATE; //bpm
	double _breathing_time = INIT_BREATHING_TIME; //s
	double _inhalation_time = INIT_INHALATION_TIME; //s
	double _womersley = INIT_WOMERSLEY;
	double _outer_thickness = INIT_OUTER_THICKNESS; //mm
};

