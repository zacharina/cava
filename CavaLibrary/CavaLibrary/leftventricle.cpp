#include "pch.h"
#include "leftventricle.h"

using namespace std;

void LeftVentricle::OxygenTransport(float& oxygen, HumanCharacteristic human_characteristic)
{
	cout << "Lung does oxygen transport" << endl;
}

void LeftVentricle::CarbonDioxideTransport(float& oxygen, float& carbon_dioxide, HumanCharacteristic human_characteristic)
{
	cout << "Lung does carbon dioxide back transport" << endl;
}