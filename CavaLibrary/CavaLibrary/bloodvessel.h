#pragma once

#include "bodypart.h"

class __declspec(dllexport) BloodVessel : public BodyPart
{
public:
	BloodVessel() : BodyPart() {

	};
	~BloodVessel() = default;

	void OxygenTransport(double time, int inflow, double& oxygen, HumanCharacteristic human_characteristic);
	
	double partial_pressure = 0.0; //mmHg
	double diastolic_pressure = 80.0; //mmHg
	double systolic_pressure = 120.0; //mmHg
	double velocity = 0.0; //microm/s
	double resistance = 0.0; //mmHg
	double inertance = 0.0; //mmHg*s2/ml
	double elastance = 0.0; //mmHg/ml
	double oxygen_flow = 0.0; //l/min
	double compliance = 0.0; //ml/(mmHg*kg)
	double oxygen_concentration = 0.0; //g/100ml 
	
	double partial_pressure_tissue = 0.0; //mmHg
	
	double oxygen_consumption_tissue = 0.0; // ml(O2)/cm3)/s

	double StartVelocity();
	double VelocityCoefficient();
	double NumberOfVessels();
	double VesselLength();
	double VesselThickness();
	double BloodDensity();
	double InitialDiastolicPressure();
	double SystolicTime();
	double InitialSystolicPressure();
	double DiastolicTime();
	double OxygenBindingCapacity();
	double HemoglobinConcentration();
	double HemoglobinOxygenSaturation();
	double RBCVelocity();
	double TissueRadius();
	double MetabolicRate();
	double VesselRadius();
	double MaxConsumption();
	double InitialInertance();
	double Viscosity();
	double Flow();

	void StartVelocity(double new_start_velocity);
	void VelocityCoefficient(double new_velocity_coefficient);
	void NumberOfVessels(double new_number_of_vessels);
	void VesselLength(double new_vessel_length);
	void VesselThickness(double new_vessel_thickness);
	void BloodDensity(double new_blood_density);
	void InitialSystolicPressure(double new_systolic_pressure);
	void SystolicTime(double new_systolic_time);
	void InitialDiastolicPressure(double new_diastolic_pressure);
	void DiastolicTime(double new_diastolic_time);
	void OxygenBindingCapacity(double new_oxygen_binding_capacity);
	void HemoglobinConcentration(double new_hemoglobin_concentration);
	void HemoglobinOxygenSaturation(double new_hemoglobin_oxygen_saturation);
	void RBCVelocity(double new_rbc_velocity);
	void TissueRadius(double new_tissue_radius);
	void MetabolicRate(double new_metabolic_rate);
	void VesselRadius(double new_vessel_radius);
	void MaxConsumption(double new_max_consumption);
	void InitialInertance(double new_initial_inertance);
	void Viscosity(double new_viscosity);
	void Flow(double new_flow);
	void FlowAddend(double new_addend);

	void ResetStartVelocity();
	void ResetVelocityCoefficient();
	void ResetNumberOfVessels();
	void ResetVesselLength();
	void ResetVesselThickness();
	void ResetBloodDensity();
	void ResetInitialSystolicPressure();
	void ResetSystolicTime();
	void ResetInitialDiastolicPressure();
	void ResetDiastolicTime();
	void ResetOxygenBindingCapacity();
	void ResetHemoglobinConcentration();
	void ResetHemoglobinOxygenSaturation();
	void ResetRBCVelocity();
	void ResetTissueRadius();
	void ResetMetabolicRate();
	void ResetVesselRadius();
	void ResetMaxConsumption();
	void ResetInitialInertance();
	void ResetViscosity();
	void ResetFlow();
	void ResetFlowAddend();
	
private:
	void Velocity();
	double _start_velocity = 424.4; //microm/s
	double _velocity_coefficient = 1;
	void Windkessel(double time); 
	double _viscosity = 6.72; //mPa*s
	double _number_of_vessels = 1; 
	double _vessel_length = 13.34545455; //cm
	double _young_modulus = 3000; //mmHg
	double _vessel_thickness = 0.058535714; //cm
	double _blood_density = 1.060; //g/cm3
	double _initial_systolic_pressure = 120; //mmHg
	double _initial_diastolic_pressure = 80; //mmHg
	double _initial_inertance = 0.013; //mmHg*s2/ml
	double _cycle_duration = 0.8; //s
	double _systolic_time = 0.25 * _cycle_duration; //s
	double _diastolic_time =0.75* _cycle_duration; //s
	double _flow = 5; //L/min
	double _flow_addend = 0.0855;
	double _diastolic_multiplier = 1000.0;
	
	void OxygenFlow();
	double _oxygen_binding_capacity = 1.34; //ml
	double _hemoglobin_concentration = 13.8; //g/100ml
	double _hemoglobin_oxygen_saturation = 0.886;
	double _rbc_velocity = 2.5; //mm/s

	void HillCoefficient(double temperature);
	void HalfPressure(double temperature);
	void PartialPressure();
	void HemoglobinSaturation();
	double _hill_coefficient = 2.7;
	double _half_pressure = 26.0; //mmHg

	void OxygenConcentration();
	double _bunsen_solubility_coefficient = 3 * 0.00001; //ml
	
	void PartialPressureTissue();
	double _vessel_radius = 0.481214286; //cm
	double _tissue_radius = _vessel_radius + _vessel_thickness; //cm
	double _metabolic_rate = 0.4 * 0.0001; //ml/ml/s
	double _krogh_diffusion_coefficient = 3.5 * 0.0000000001; //cm2/s/atm 

	void OxygenConsumptionTissue();
	double _max_consumption_rate = 6.17 * 0.00001; //O2/(cm3*s)
};

