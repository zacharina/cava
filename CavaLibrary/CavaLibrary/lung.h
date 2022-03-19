#pragma once

#include "bodypart.h"

class __declspec(dllexport) Lung : public BodyPart
{
public:
	Lung() : BodyPart() {

	};
	~Lung() = default;

	void OxygenTransport(double time, int inflow, double& oxygen, HumanCharacteristic human_characteristic);
	
	bool inflow = true;
	double oxygen_flow = 0.0; //l/min
	double pressure = 0.0; //mmHg  

	double MassOfAir();
	double Volume();
	double AreaOfThrottle();
	double UpstreamPressure();
	double DownstreamPressure();
	double CriticalPressureRatio();
	double GasConstant();
	double RespiratoryCompliance();
	double AtmosphericDensity();
	double PressureSummand();
	double AirMassFlow();

	void MassOfAir(double new_mass_of_air);
	void Volume(double new_volume);
	void AreaOfThrottle(double new_area_of_throttle);
	void UpstreamPressure(double new_upstream_pressure);
	void DownstreamPressure(double new_downstream_pressure);
	void CriticalPressureRatio(double new_critical_pressure_ratio);
	void GasConstant(double new_gas_constant);
	void AtmosphericDensity(double new_atmospheric_density);
	void RespiratoryComplianceInflow(double new_compliance);
	void RespiratoryComplianceOutflow(double new_compliance);
	void PressureSummand(double new_pressure_summand);
	void AirMassFlow(double new_air_mass_flow);

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

private:

	void Airflow(double temperature, int inflow);
	void Pressure(double time, double temperature, int inflow, double summand);

	double _air_mass_flow = 0.12; //kg/s
	double _area_of_throttle = 32; //mm2
	double _upstream_pressure = 41.0; //mmHg
	double _downstream_pressure = 10.3; //mmHg
	double _critical_pressure_ratio = 0.528;  
	double _atmospheric_density = 1.2; //kg/m3
	double _gas_constant = 287; //J/(kg*K)
	double _volume = 0.003251; //m3
	double _mass_of_air = 0.000002634; //kg
	double _respiratory_compliance = 0.0; //m3/Pa
	double _respiratory_compliance_inflow = 58;  //m3/Pa
	double _respiratory_compliance_outflow = 44; //m3/Pa 
	double _pressure_summand = 1;
};

