#include "pch.h"
#include "human.h"

/*
* Simulation of the human cardiovascular system dependant on time
* @param time	time passed since the last frame/method call
* @param oxygen	provided amount of oxygen to the in percent 
*/
void Human::CardiovascularSystem(double time, double* oxygen)
{
	if (!alive)
		return;

	if ((_simulation_time + time) - _last_breath_cycle > lung->CycleDuration())
	{
		_last_breath_cycle = _simulation_time + time;
		lung->SwitchFlow();
		trachea->SwitchFlow();
	}
	
	if ((_simulation_time + time) - _last_heart_cycle > heart->CycleDuration())
		_last_heart_cycle = _simulation_time + time;

	double breath_difference = _simulation_time - _last_breath_cycle;
	double heart_difference = _simulation_time - _last_heart_cycle;


	trachea->OxygenTransport(breath_difference, *oxygen, _characteristics);
	lung->OxygenTransport(heart_difference, *oxygen, _characteristics);
	heart->OxygenTransport(heart_difference, *oxygen, _characteristics);
	blood_vessel->OxygenTransport(heart_difference, *oxygen, _characteristics);
	tissue->partial_pressure = blood_vessel->partial_pressure_tissue;
	tissue->oxygen = blood_vessel->oxygen_consumption_tissue;
	
	_simulation_time += time;
}

/*
* Stops the processes of the cardiovascular system 
*/
void Human::Die()
{
	alive = false;
}

/*
* Pauses the processes of the cardiovascular system
*/
void Human::ArtificialComa()
{
	alive = false;
}

/*
* Unpauses the processes of the cardiovascular system
*/
void Human::Resuscitate()
{
	alive = true;
}
