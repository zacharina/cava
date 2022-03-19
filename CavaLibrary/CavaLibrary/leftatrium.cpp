#include "pch.h"
#include "LeftAtrium.h"

using namespace std;

void LeftAtrium::OxygenTransport(float& oxygen, HumanCharacteristic human_characteristic)
{
	cout << "Lung does oxygen transport" << endl;
}

void LeftAtrium::CarbonDioxideTransport(float& oxygen, float& carbon_dioxide, HumanCharacteristic human_characteristic)
{
	cout << "Lung does carbon dioxide back transport" << endl;
}
