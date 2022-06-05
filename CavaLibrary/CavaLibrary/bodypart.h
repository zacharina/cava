#pragma once

#include "definitions.h"

class __declspec(dllexport) BodyPart
{
public:
	BodyPart() = default;
	~BodyPart() = default;

	void ComputeOxygenTransport(double time, double& oxygen, HumanCharacteristic human_characteristic) {};
	double GetOxygen() { return oxygen; }
	void SetOxygen(double ox) { oxygen = ox; }

protected:

	double oxygen = 0;

	/*
	* Basic calculation of the oxygen content in a compartment
	* @param oxygen_saturation	
	* @param volume	
	* @param hemoglobin_level
	*/
	static double GetOxygenContent(double oxygen_saturation, double volume, double hemoglobin_level)
	{
		return 0.0000316 * oxygen_saturation * volume * hemoglobin_level;
	}

	double hemoglobin_level = 0; // g/dL
	double oxygen_saturation = 0; // g/dL

	/*
	* Basic calculation of the hemoglobin level in a compartment dependant on the gender
	* @param human_characteristic
	*/
	void SetHemoglobinFor(const HumanCharacteristic& human_characteristic) {

		if(human_characteristic.age < 15)
		{
			hemoglobin_level = 12;
		}
		else
		{
			if (human_characteristic.gender == Gender::female)
			{
				if(human_characteristic.age > 50)
					hemoglobin_level = 12.75;
				else
					hemoglobin_level = 14;
			}
			else
			{
				if (human_characteristic.age > 50)
					hemoglobin_level = 13.65;
				else
					hemoglobin_level = 16;
			}
		}
	}

	/*
	* Basic calculation of the oxygen saturation in a compartment dependant on the gender
	* @param human_characteristic
	*/
	void SetOxygenSaturationFor(const HumanCharacteristic& human_characteristic) {

		if (human_characteristic.gender == Gender::female)
		{
			if (human_characteristic.age > 80)
				oxygen_saturation = 94.84;
			else if (human_characteristic.age > 65)
				oxygen_saturation = 97.06;
			else
				oxygen_saturation = 96.54;
		}
		else
		{
			if (human_characteristic.age > 80)
				oxygen_saturation = 92.00;
			else if (human_characteristic.age > 65)
				oxygen_saturation = 95.24;
			else
				oxygen_saturation = 94.75;
		}
	}
};

