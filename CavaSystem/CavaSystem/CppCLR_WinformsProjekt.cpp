#include "pch.h"

using namespace System;

#include "CavaForm.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CavaSystem::CavaForm());
	return 0;
}
 