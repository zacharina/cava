#pragma once

#include <iostream>
#include <vector>
#include <cmath>

#define PI 3.14159265359

enum class __declspec(dllexport) Gender
{
	female,
	male
};

struct __declspec(dllexport) HumanCharacteristic
{
	int age;
	Gender gender;
	double height;
	double weight;
	double temperature;
};



