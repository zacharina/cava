#include "pch.h"
#include "rightventricle.h"

using namespace std;

void RightVentricle::OxygenTransport(float& oxygen, HumanCharacteristic human_characteristic)
{
	cout << "Lung does oxygen transport" << endl;
}

void RightVentricle::CarbonDioxideTransport(float& oxygen, float& carbon_dioxide, HumanCharacteristic human_characteristic)
{
	cout << "Lung does carbon dioxide back transport" << endl;
}
