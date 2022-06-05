#pragma once

#include "bodypart.h"

class __declspec(dllexport) Tissue : public BodyPart
{
public:
	Tissue() :BodyPart(){

	}
	~Tissue() = default;

	void ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic);

	double GetPartialPressure() { return partial_pressure; }
	void SetPartialPressure(double pr) { partial_pressure = pr; }

private:
	//Set by blood circulation
	double partial_pressure = 0.0;
};

