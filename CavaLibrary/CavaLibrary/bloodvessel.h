#pragma once

#include "bodypart.h"

class __declspec(dllexport) BloodVessel : public BodyPart
{
public:
	BloodVessel() : BodyPart() { };
	~BloodVessel() = default;

	void ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic);

	// Exposed Getter Functions for Library usage
	double GetPartialPressure() { return partial_pressure; }
	double GetDiastolicPressure() { return diastolic_pressure; }
	double GetSystolicPressure() { return systolic_pressure; }
	double GetVelocity() { return velocity; }
	double GetResistance() { return resistance; }
	double GetInertance() { return inertance; }
	double GetElastance() { return elastance; }
	double GetOxygenFlow() { return oxygen_flow; }
	double GetCompliance() { return compliance; }
	double GetOxygenConcentration() { return oxygen_concentration; }
	double GetPartialPressureTissue() { return partial_pressure_tissue; }
	double GetOxygenConsumptionTissue() { return oxygen_consumption_tissue; }

	double GetStartVelocity();
	double GetVelocityCoefficient();
	double GetNumberOfVessels();
	double GetVesselLength();
	double GetVesselThickness();
	double GetBloodDensity();
	double GetInitialDiastolicPressure();
	double GetSystolicTime();
	double GetInitialSystolicPressure();
	double GetDiastolicTime();
	double GetOxygenBindingCapacity();
	double GetHemoglobinConcentration();
	double GetHemoglobinOxygenSaturation();
	double GetRBCVelocity();
	double GetTissueRadius();
	double GetMetabolicRate();
	double GetVesselRadius();
	double GetMaxConsumption();
	double GetInitialInertance();
	double GetViscosity();
	double GetFlow();
	double GetCycleDuration();
	double GetYoungModulus();
	double GetBunsenSolubilityCoefficient();

	void SetStartVelocity(double new_start_velocity);
	void SetVelocityCoefficient(double new_velocity_coefficient);
	void SetNumberOfVessels(double new_number_of_vessels);
	void SetVesselLength(double new_vessel_length);
	void SetVesselThickness(double new_vessel_thickness);
	void SetBloodDensity(double new_blood_density);
	void SetInitialSystolicPressure(double new_systolic_pressure);
	void SetSystolicTime(double new_systolic_time);
	void SetInitialDiastolicPressure(double new_diastolic_pressure);
	void SetDiastolicTime(double new_diastolic_time);
	void SetOxygenBindingCapacity(double new_oxygen_binding_capacity);
	void SetHemoglobinConcentration(double new_hemoglobin_concentration);
	void SetHemoglobinOxygenSaturation(double new_hemoglobin_oxygen_saturation);
	void SetRBCVelocity(double new_rbc_velocity);
	void SetTissueRadius(double new_tissue_radius);
	void SetMetabolicRate(double new_metabolic_rate);
	void SetVesselRadius(double new_vessel_radius);
	void SetMaxConsumption(double new_max_consumption);
	void SetInitialInertance(double new_initial_inertance);
	void SetViscosity(double new_viscosity);
	void SetFlow(double new_flow);
	void SetFlowAddend(double new_addend);
	void SetCycleDuration(double new_cycle_duration);
	void SetYoungModulus(double new_young_modulus);
	void SetBunsenSolubilityCoefficient(double new_coefficient);

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
	void ResetYoungModulus();
	void ResetBunsenSolubilityCoefficient();

private:
	// Constant Values
	const double INIT_ZERO = 0.0;
	const double INIT_DIASTOLIC_PRESSURE = 80.0;
	const double INIT_SYSTOLIC_PRESSURE = 120.0;
	const double INIT_START_VELOCITY = 424.4;
	const double INIT_VELOCITY_COEFFICIENT = 1.0;
	const double INIT_VISCOSITY = 6.72;
	const double INIT_NUMBER_OF_VESSELS = 1.0;
	const double INIT_VESSEL_LENGTH = 13.34545455;
	const double INIT_YOUNG_MODULUS = 3000.0;
	const double INIT_VESSEL_THICKNESS = 0.058535714;
	const double INIT_BLOOD_DENSITY = 1.060;
	const double INIT_INITIAL_INERTANCE = 0.013;
	const double INIT_CYCLE_DURATION = 0.8;
	const double INIT_SYSTOLIC_TIME = 0.25;
	const double INIT_DIASTOLIC_TIME = 0.75;
	const double INIT_FLOW = 5.6;
	const double INIT_FLOW_ADDEND = 0.225;
	const double INIT_DIASTOLIC_MULTIPLIER = 1000.0;
	const double INIT_OXYGEN_BINDING_CAPACITY = 1.34;
	const double INIT_HEMOGLOBIN_CONCENTRATION = 13.8;
	const double INIT_HEMOGLOBIN_OXYGEN_SATURATION = 0.886;
	const double INIT_RBC_VELOCITY = 2.5;
	const double INIT_HILL_COEFFIIENT = 2.7;
	const double INIT_HALF_PRESSURE = 26.0;
	const double INIT_BUNSEN_SOLUBILITY_COEFFICIENT = 3.0 * 0.00001;
	const double INIT_VESSEL_RADIUS = 0.481214286;
	const double INIT_TISSUE_RADIUS = INIT_VESSEL_RADIUS + INIT_VESSEL_THICKNESS;
	const double INIT_METABOLIC_RATE = 0.4 * 0.0001;
	const double INIT_KROGH_DIFFUSION_COEFFICIENT = 3.5 * 0.0000000001;
	const double INIT_MAX_CONSUMPTION_RATE = 6.17 * 0.00001;

	// Relevant private params of the library
	double partial_pressure = INIT_ZERO; //mmHg
	double diastolic_pressure = INIT_DIASTOLIC_PRESSURE; //mmHg
	double systolic_pressure = INIT_SYSTOLIC_PRESSURE; //mmHg
	double velocity = INIT_ZERO; //microm/s
	double resistance = INIT_ZERO; //mmHg
	double inertance = INIT_ZERO; //mmHg*s2/ml
	double elastance = INIT_ZERO; //mmHg/ml
	double oxygen_flow = INIT_ZERO; //l/min
	double compliance = INIT_ZERO; //ml/(mmHg*kg)
	double oxygen_concentration = INIT_ZERO; //g/100ml 
	double partial_pressure_tissue = INIT_ZERO; //mmHg
	double oxygen_consumption_tissue = INIT_ZERO; // ml(O2)/cm3)/s

	void ComputeVelocity();
	double _start_velocity = INIT_START_VELOCITY; //microm/s
	double _velocity_coefficient = INIT_VELOCITY_COEFFICIENT;

	void ComputeWindkessel(double time); 
	double _viscosity = INIT_VISCOSITY; //mPa*s
	double _number_of_vessels = INIT_NUMBER_OF_VESSELS; 
	double _vessel_length = INIT_VESSEL_LENGTH; //cm
	double _young_modulus = INIT_YOUNG_MODULUS; //mmHg
	double _vessel_thickness = INIT_VESSEL_THICKNESS; //cm
	double _blood_density = INIT_BLOOD_DENSITY; //g/cm3
	double _initial_systolic_pressure = INIT_SYSTOLIC_PRESSURE; //mmHg
	double _initial_diastolic_pressure = INIT_DIASTOLIC_PRESSURE; //mmHg
	double _initial_inertance = INIT_INITIAL_INERTANCE; //mmHg*s2/ml
	double _cycle_duration = INIT_CYCLE_DURATION; //%
	double _systolic_time = INIT_SYSTOLIC_TIME; //%
	double _diastolic_time = INIT_DIASTOLIC_TIME; //s
	double _flow = INIT_FLOW; //L/min
	double _flow_addend = INIT_FLOW_ADDEND;
	double _diastolic_multiplier = INIT_DIASTOLIC_MULTIPLIER;

	void ComputeOxygenFlow();
	double _oxygen_binding_capacity = INIT_OXYGEN_BINDING_CAPACITY; //ml
	double _hemoglobin_concentration = INIT_HEMOGLOBIN_CONCENTRATION; //g/100ml
	double _hemoglobin_oxygen_saturation = INIT_HEMOGLOBIN_OXYGEN_SATURATION;
	double _rbc_velocity = INIT_RBC_VELOCITY; //mm/s

	void SetHillCoefficientFrom(double temperature);
	void SetHalfPressureFrom(double temperature);
	void ComputePartialPressure();

	void ComputeHemoglobinSaturation();
	double _hill_coefficient = INIT_HILL_COEFFIIENT;
	double _half_pressure = INIT_HALF_PRESSURE; //mmHg

	void ComputeOxygenConcentration();
	double _bunsen_solubility_coefficient = INIT_BUNSEN_SOLUBILITY_COEFFICIENT; //ml
	
	void ComputePartialPressureTissue();
	double _vessel_radius = INIT_VESSEL_RADIUS; //cm
	double _tissue_radius = INIT_TISSUE_RADIUS; //cm
	double _metabolic_rate = INIT_METABOLIC_RATE; //ml/ml/s
	double _krogh_diffusion_coefficient = INIT_KROGH_DIFFUSION_COEFFICIENT; //cm2/s/atm 

	void ComputeOxygenConsumptionTissue();
	double _max_consumption_rate = INIT_MAX_CONSUMPTION_RATE; //O2/(cm3*s)
};

