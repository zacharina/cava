#include "pch.h"
#include "rightatrium.h"

using namespace std;

void RightAtrium::OxygenTransport(float& oxygen, HumanCharacteristic human_characteristic)
{
	cout << "Lung does oxygen transport" << endl;
}

void RightAtrium::CarbonDioxideTransport(float& oxygen, float& carbon_dioxide, HumanCharacteristic human_characteristic)
{
	cout << "Lung does carbon dioxide back transport" << endl;
}