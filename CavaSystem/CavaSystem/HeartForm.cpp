#include "pch.h"
#include "HeartForm.h"

using namespace System;

Decimal CavaSystem::HeartForm::GetHeartRate()
{
    return numHeartRate->Value;
}

Decimal CavaSystem::HeartForm::GetStrokeVolume()
{
    return numStrokeVolume->Value;
}

Decimal CavaSystem::HeartForm::GetDuration()
{
    return numDuration->Value;
}

Decimal CavaSystem::HeartForm::GetMinElastance()
{
    return numMinElas->Value;
}

Decimal CavaSystem::HeartForm::GetMaxElastance()
{
    return numMaxElas->Value;
}

Decimal CavaSystem::HeartForm::GetRadiusAtZeroPressure()
{
    return numRadius0->Value;
}

Decimal CavaSystem::HeartForm::GetAtrialKeytime()
{
    return numAtrialKey->Value;
}

Decimal CavaSystem::HeartForm::GetLVEndSystolicElastance()
{
    return numLVEnd->Value;
}

Decimal CavaSystem::HeartForm::GetRVEndSystolicElastance()
{
    return numRVEnd->Value;
}

Decimal CavaSystem::HeartForm::GetDensity()
{
    return numDensity->Value;
}

Decimal CavaSystem::HeartForm::GetCoefficient1()
{
    return numCoeff1->Value;
}

Decimal CavaSystem::HeartForm::GetCoefficient2()
{
    return numCoeff2->Value;
}

System::Void CavaSystem::HeartForm::UpdateOxygen(double oxygen)
{
    lblNumOxygen->Text = oxygen.ToString();
}

System::Void CavaSystem::HeartForm::UpdateFlowRate(double new_flow_rate)
{
    lblNumFlowRate->Text = new_flow_rate.ToString();
}

System::Void CavaSystem::HeartForm::UpdateLAElastance(double new_elastance)
{
    lblNumLAElastance->Text = new_elastance.ToString();
}

System::Void CavaSystem::HeartForm::UpdateLAPressure(double new_pressure)
{
    lblNumLAPressure->Text = new_pressure.ToString();
}

System::Void CavaSystem::HeartForm::UpdateLARadius(double new_radius)
{
    lblNumLARadius->Text = new_radius.ToString();
}

System::Void CavaSystem::HeartForm::UpdateRAElastance(double new_elastance)
{
    lblNumRAElastance->Text = new_elastance.ToString();
}

System::Void CavaSystem::HeartForm::UpdateRAPressure(double new_pressure)
{
    lblNumRAPressure->Text = new_pressure.ToString();
}

System::Void CavaSystem::HeartForm::UpdateRARadius(double new_radius)
{
    lblNumRARadius->Text = new_radius.ToString();
}

System::Void CavaSystem::HeartForm::UpdateLVInertance(double new_inertance)
{
    lblNumLVInertance->Text = new_inertance.ToString();
}

System::Void CavaSystem::HeartForm::UpdateLVPressureTotal(double new_pressure)
{
    lblNumLVPressureTotal->Text = new_pressure.ToString();
}

System::Void CavaSystem::HeartForm::UpdateLVRadius(double new_radius)
{
    lblNumLVRadius->Text = new_radius.ToString();
}

System::Void CavaSystem::HeartForm::UpdateRVInertance(double new_inertance)
{
    lblNumRVInertance->Text = new_inertance.ToString();
}

System::Void CavaSystem::HeartForm::UpdateRVPressureTotal(double new_pressure)
{
    lblNumRVPressureTotal->Text = new_pressure.ToString();
}

System::Void CavaSystem::HeartForm::UpdateRVRadius(double new_radius)
{
    lblNumRVRadius->Text = new_radius.ToString();
}
