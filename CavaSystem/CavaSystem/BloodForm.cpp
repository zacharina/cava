#include "pch.h"
#include "BloodForm.h"

using namespace System;

Decimal CavaSystem::BloodForm::GetStartVelocity()
{
    return numStartVel->Value;
}

Decimal CavaSystem::BloodForm::GetNumberOfVessels()
{
    return numNumber->Value;
}

Decimal CavaSystem::BloodForm::GetVesselLength()
{
    return numLength->Value;
}

Decimal CavaSystem::BloodForm::GetVesselThickness()
{
    return numThick->Value;
}

Decimal CavaSystem::BloodForm::GetBloodDensity()
{
    return numDensity->Value;
}

Decimal CavaSystem::BloodForm::GetInitialSystolicPressure()
{
    return numInitSysPress->Value;
}

Decimal CavaSystem::BloodForm::GetInitialDiastolicPressure()
{
    return numInitDiaPress->Value;
}

Decimal CavaSystem::BloodForm::GetOxygenBindingCapacity()
{
    return numBinding->Value;
}

Decimal CavaSystem::BloodForm::GetHemoglobinConcentration()
{
    return numConcentration->Value;
}

Decimal CavaSystem::BloodForm::GetOxygenHemoglobinSaturation()
{
    return numSaturation->Value;
}

Decimal CavaSystem::BloodForm::GetRBCVelocity()
{
    return numRBC->Value;
}

Decimal CavaSystem::BloodForm::GetTissueRadius()
{
    return numTRadius->Value;
}

Decimal CavaSystem::BloodForm::GetVesselRadius()
{
    return numBRadius->Value;
}

Decimal CavaSystem::BloodForm::GetMetabolicRate()
{
    return numMetabolic->Value;
}

Decimal CavaSystem::BloodForm::GetMaxConsumption()
{
    return numRate->Value;
}

System::Void CavaSystem::BloodForm::UpdateOxygen(double oxygen)
{
    lblNumOxygen->Text = oxygen.ToString();
}

System::Void CavaSystem::BloodForm::UpdateDiastolicPressure(double new_pressure)
{
    lblNumDiaPressure->Text = new_pressure.ToString();
}

System::Void CavaSystem::BloodForm::UpdateSystolicPressure(double new_pressure)
{
    lblNumSysPressure->Text = new_pressure.ToString();
}

System::Void CavaSystem::BloodForm::UpdatePartialPressureVessel(double new_pressure)
{
    lblNumBPartial->Text = new_pressure.ToString();
}

System::Void CavaSystem::BloodForm::UpdateVelocity(double new_velocity)
{
    lblNumVelocity->Text = new_velocity.ToString();
}

System::Void CavaSystem::BloodForm::UpdateFlowRate(double new_flow_rate)
{
    lblNumFlowRate->Text = new_flow_rate.ToString();
}

System::Void CavaSystem::BloodForm::UpdateResistance(double new_resistance)
{
    lblNumResis->Text = new_resistance.ToString();
}

System::Void CavaSystem::BloodForm::UpdateInertance(double new_inertance)
{
    lblNumIner->Text = new_inertance.ToString();
}

System::Void CavaSystem::BloodForm::UpdateCompliance(double new_compliance)
{
    lblNumCompliance->Text = new_compliance.ToString();
}

System::Void CavaSystem::BloodForm::UpdatePartialPressureTissue(double new_pressure)
{
    lblNumTPartial->Text = new_pressure.ToString();
}

System::Void CavaSystem::BloodForm::UpdateConsumptionRate(double new_consumption)
{
    lblNumConsumption->Text = new_consumption.ToString();
}

System::Void CavaSystem::BloodForm::UpdateElastance(double new_elastance)
{
    lblElastance->Text = new_elastance.ToString();
}
