#pragma once

#include "bodypart.h"

class __declspec(dllexport) Tissue : public BodyPart
{
public:
	Tissue() :BodyPart(){

	}
	~Tissue() = default;

	void OxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic);

	//Set by blood circulation
	double partial_pressure = 0.0;
};

