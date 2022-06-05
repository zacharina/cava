#pragma once

#include "bodypart.h"

class __declspec(dllexport) Lung : public BodyPart
{
public:
	Lung() : BodyPart() { };
	~Lung() = default;

	void ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic);
	
	double GetOxygenFlow() { return oxygen_flow; }
	double GetPressure() { return pressure; }

	void SwitchFlow();

	double GetMassOfAir();
	double GetVolume();
	double GetAreaOfThrottle();
	double GetUpstreamPressure();
	double GetDownstreamPressure();
	double GetCriticalPressureRatio();
	double GetGasConstant();
	double GetRespiratoryCompliance();
	double GetAtmosphericDensity();
	double GetPressureSummand();
	double GetAirMassFlow();
	double GetRespiratoryRate();
	double GetCycleDuration();
	bool GetInflow();

	void SetMassOfAir(double new_mass_of_air);
	void SetVolume(double new_volume);
	void SetAreaOfThrottle(double new_area_of_throttle);
	void SetUpstreamPressure(double new_upstream_pressure);
	void SetDownstreamPressure(double new_downstream_pressure);
	void SetCriticalPressureRatio(double new_critical_pressure_ratio);
	void SetGasConstant(double new_gas_constant);
	void SetAtmosphericDensity(double new_atmospheric_density);
	void SetRespiratoryComplianceInflow(double new_compliance);
	void SetRespiratoryComplianceOutflow(double new_compliance);
	void SetPressureSummand(double new_pressure_summand);
	void SetAirMassFlow(double new_air_mass_flow);
	void SetRespiratoryRateAndCycleTime(double new_respiratory_rate);

	void ResetMassOfAir();
	void ResetVolume();
	void ResetAreaOfThrottle();
	void ResetUpstreamPressure();
	void ResetDownstreamPressure();
	void ResetCriticalPressureRatio();
	void ResetGasConstant();
	void ResetAtmosphericDensity();
	void ResetRespiratoryComplianceInflow();
	void ResetRespiratoryComplianceOutflow();
	void ResetPressureSummand();
	void ResetAirMassFlow();
	void ResetRespiratoryRate();

private:
	// CONST INITIAL VALUES
	const double RESPIRATORY_RATE = 16.0;
	const double CYCLE_TIME_BREATH = 60 / RESPIRATORY_RATE;
	const double AIR_MASS_FLOW = 0.12;
	const double AREA_OF_THROTTLE= 32.0;
	const double UPSTREAM_PRESSURE = 55.74;
	const double DOWNSTREAM_PRESSURE = 14.0;
	const double CRITICAL_PRESSURE_RATIO = 0.528;
	const double ATMOSPHERIC_DENSITY = 1.2;
	const double GAS_CONSTANT = 287.0;
	const double VOLUME = 3.251;
	const double MASS_OF_AIR = 0.00003;
	const double RESPIRATORY_COMPLIANCE = 0.0;
	const double RESPIRATORY_COMPLIANCE_INFLOW = 58.0;
	const double RESPIRATORY_COMPLIANCE_OUTFLOW = 44.0;
	const double PRESSURE_SUMMAND = 10.0;

	double oxygen_flow = 0.0; //l/min
	double pressure = 0.0; //mmHg  

	void ComputeAirflow(double temperature);
	void ComputePressure(double time, double temperature, double summand);

	// Params with initial constant values
	bool _inflow = true;
	double _respiratory_rate = RESPIRATORY_RATE;
	double _cycle_time_breath = CYCLE_TIME_BREATH;
	double _air_mass_flow = AIR_MASS_FLOW; //l/min
	double _area_of_throttle = AREA_OF_THROTTLE; //mm2
	double _upstream_pressure = UPSTREAM_PRESSURE; //cmH20
	double _downstream_pressure = DOWNSTREAM_PRESSURE; //cmH20
	double _critical_pressure_ratio = CRITICAL_PRESSURE_RATIO;
	double _atmospheric_density = ATMOSPHERIC_DENSITY; //kg/m3
	double _gas_constant = GAS_CONSTANT; //J/(kg*K)
	double _volume = VOLUME; //l
	double _mass_of_air = MASS_OF_AIR; //kg
	double _respiratory_compliance = RESPIRATORY_COMPLIANCE; //ml/cmH2O
	double _respiratory_compliance_inflow = RESPIRATORY_COMPLIANCE_INFLOW;  //ml/cmH2O
	double _respiratory_compliance_outflow = RESPIRATORY_COMPLIANCE_OUTFLOW; //ml/cmH2O 
	double _pressure_summand = PRESSURE_SUMMAND;
};

