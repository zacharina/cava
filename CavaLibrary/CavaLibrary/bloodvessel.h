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
	double diastolic_pressure = 0.0; //mmHg
	double systolic_pressure = 0.0; //mmHg
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
	
private:
	void Velocity();
	double _start_velocity = 424.4; //microm/s
	double _velocity_coefficient = 1;
	void Windkessel(double time); 
	double _viscosity = 6.65; //mPa*s
	double _number_of_vessels = 1; 
	double _vessel_length = 66.8; //microm
	double _young_modulus = 3000; //mmHg
	double _vessel_thickness = 200; //microm
	double _blood_density = 1.060; //g/cm3
	double _initial_systolic_pressure = 80; //mmHg
	double _initial_diastolic_pressure = 80; //mmHg
	double _initial_inertance = 0.013; //mmHg*s2/ml
	double _systolic_time = 0.33; //s
	double _diastolic_time = 0.67;//s
	double _cycle_duration = 0.8; //s
	
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
	double _tissue_radius = 28.21; //microm
	double _metabolic_rate = 0.4 * 0.0001; //kcal/(kg*d)
	double _krogh_diffusion_coefficient = 2.41 * 0.000000001;
	double _vessel_radius = 5.25; //microm

	void OxygenConsumptionTissue();
	double _max_consumption_rate = 6.17 * 0.00001; //O2/(cm3*s)
};

