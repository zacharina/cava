#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "bloodvessel.h"
#include "heart.h"
#include "lung.h"
#include "trachea.h"
#include "tissue.h"
#include "definitions.h"

class __declspec(dllexport) Human
{
public:
	Human(int age, Gender gender, double height, double weight, double temperature) {
		//Init human
		_characteristics.age = age;
		_characteristics.gender = gender;
		_characteristics.height = height;
		_characteristics.weight = weight;
		_characteristics.temperature = temperature;
		
		//Init body parts
		trachea =  new Trachea();
		lung =  new Lung();
		heart = new Heart();
		blood_vessel = new BloodVessel();
		tissue = new Tissue();
	}

	~Human() {
		delete trachea;
		delete lung;
		delete heart;
		delete blood_vessel;
		delete tissue;
	}

	void CardiovascularSystem(double time, double* oxygen);
	void Die();
	void ArtificialComa();
	void Resuscitate();

	Trachea* trachea;
	Lung* lung;
	Heart* heart;
	BloodVessel* blood_vessel;
	Tissue* tissue;

	bool alive = true;
	
	HumanCharacteristic _characteristics;
private:

	double _respiratory_rate = 12.5;

	double _cycle_time_breath = 60.0 / _respiratory_rate;
	double _cycle_time_heart = 0.8;
	double _simulation_time = 0.0;
	
	double _last_heart_cycle = 0.0;
	double _last_breath_cycle = 0.0;
	
	int inflow = -1;
};

