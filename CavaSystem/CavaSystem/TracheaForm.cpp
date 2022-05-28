#include "pch.h"
#include "TracheaForm.h"

using namespace System;

Decimal CavaSystem::TracheaForm::GetTrachealDiameter() {
	return numDiameter->Value;
}

Decimal CavaSystem::TracheaForm::GetMeanFlowSpeed() {
	return numSpeed->Value;
}

Decimal CavaSystem::TracheaForm::GetViscosityOfAir() {
	return numVis->Value;
}

Decimal CavaSystem::TracheaForm::GetRespiratoryRate() {
	return numResRate->Value;
}

Decimal CavaSystem::TracheaForm::GetBlockPercentage() {
	return numBlock->Value;
}

Decimal CavaSystem::TracheaForm::GetOuterThickness(){
	return numThickness->Value;
}

System::Void CavaSystem::TracheaForm::UpdateFlowRate(double new_flow_rate) {
	lblNumOxygen->Text = "" + new_flow_rate;
	lblNumFlowRate->Text = new_flow_rate.ToString();
}

System::Void CavaSystem::TracheaForm::UpdateOxygen(double oxygen) {
	lblNumOxygen->Text = oxygen.ToString();
}
