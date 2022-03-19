#pragma once

#include "bodypart.h"

class __declspec(dllexport) RightVentricle : BodyPart
{
public:
	RightVentricle() : BodyPart() {

	}
	~RightVentricle() = default;

	void OxygenTransport(float& oxygen, HumanCharacteristic human_characteristic) override;
	void CarbonDioxideTransport(float& oxygen, float& carbon_dioxide, HumanCharacteristic human_characteristic) override;

private:
	float _capacity = 0;
	float _partial_pressure = 0;

};