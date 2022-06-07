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

	if ((_simulation_time + time) - _last_breath_cycle > lung->GetCycleDuration())
	{
		_last_breath_cycle = _simulation_time + time;
		lung->SwitchFlow();
		trachea->SwitchFlow();
	}
	
	if(abs(heart->GetCycleDuration() - blood_vessel->GetCycleDuration()) > 0.0)
		blood_vessel->SetCycleDuration(heart->GetCycleDuration());

	if ((_simulation_time + time) - _last_heart_cycle > heart->GetCycleDuration())
		_last_heart_cycle = _simulation_time + time;

	double breath_difference = _simulation_time - _last_breath_cycle;
	double heart_difference = _simulation_time - _last_heart_cycle;
	_current_cycle_time = heart_difference;


	trachea->ComputeOxygenTransport(breath_difference, *oxygen, _characteristics);
	lung->ComputeOxygenTransport(heart_difference, *oxygen, _characteristics);
	heart->ComputeOxygenTransport(heart_difference, *oxygen, _characteristics);
	blood_vessel->ComputeOxygenTransport(heart_difference, *oxygen, _characteristics);
	tissue->SetPartialPressure(blood_vessel->GetPartialPressureTissue());
	tissue->SetOxygen(blood_vessel->GetOxygenConsumptionTissue());
	
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
