#include "pch.h"
#include "LungForm.h"

using namespace System;

Decimal CavaSystem::LungForm::GetAreaOfThrottle()
{
	return numThrottle->Value;
}

Decimal CavaSystem::LungForm::GetUpstreamPressure()
{
	return numUpPress->Value;
}

Decimal CavaSystem::LungForm::GetDownstreamPressure()
{
	return numDownPress->Value;
}

Decimal CavaSystem::LungForm::GetCriticalPressureRatio()
{
	return numCritical->Value;
}

Decimal CavaSystem::LungForm::GetGasConstant()
{
	return numGas->Value;
}

Decimal CavaSystem::LungForm::GetLungVolume()
{
	return numLungVol->Value;
}

Decimal CavaSystem::LungForm::GetMassOfAir()
{
	return numMassAir->Value;
}

Decimal CavaSystem::LungForm::GetAirMassFlow()
{
	return numMassFlow->Value;
}

Decimal CavaSystem::LungForm::GetAtmosphericDensity()
{
	return numAtmosDen->Value;
}

Decimal CavaSystem::LungForm::GetRespiratoryComplianceInflow()
{
	return numInflow->Value;
}

Decimal CavaSystem::LungForm::GetRespiratoryComplianceOutflow()
{
	return numOutflow->Value;
}

Decimal CavaSystem::LungForm::GetCoefficient()
{
	return numCoefficient->Value;
}

System::Void CavaSystem::LungForm::UpdateOxygenFlow(double new_oxygen_flow)
{
	lblNumOxygenFlow->Text = new_oxygen_flow.ToString();
}

System::Void CavaSystem::LungForm::UpdatePressure(double new_pressure)
{
	lblNumPressure->Text = new_pressure.ToString();
}
