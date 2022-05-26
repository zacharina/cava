#pragma once
#include "Human.h"

namespace CavaSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class BloodForm : public System::Windows::Forms::Form
	{
	public:
		BloodForm(Form^ form, Human* human_ptr)
		{
			parent_form = form;
			human_parent_ptr = human_ptr;
			InitializeComponent();
		}

	protected:
		~BloodForm()
		{
			parent_form = nullptr;
			human_parent_ptr = nullptr;
			if (components)
			{
				delete components;
			}
		}

	private: Human* human_parent_ptr = nullptr;

	private: Form^ parent_form = nullptr;

	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ pnPreset;
	private: System::Windows::Forms::Panel^ pnCVS;
	private: System::Windows::Forms::Panel^ pnOxygen;
	private: System::Windows::Forms::Panel^ pnBloodVessel;
	private: System::Windows::Forms::Panel^ pnTissue;
	private: System::Windows::Forms::Panel^ pnParameters;
	private: System::Windows::Forms::Panel^ pnBloodTop;
	private: System::Windows::Forms::Panel^ pnTissueTop;
	private: System::Windows::Forms::Label^ lblBloodVessel;
	private: System::Windows::Forms::Label^ lblTissue;
	private: System::Windows::Forms::Label^ lblSysPressure;
	private: System::Windows::Forms::Label^ lblInitSysPress;
	private: System::Windows::Forms::Label^ lblCVS;
	private: System::Windows::Forms::Label^ lblParameters;
	private: System::Windows::Forms::Label^ lblOxygen;
	private: System::Windows::Forms::Label^ lblCompliance;
	private: System::Windows::Forms::Label^ lblElastance;
	private: System::Windows::Forms::Label^ lblIner;
	private: System::Windows::Forms::Label^ lblResis;
	private: System::Windows::Forms::Label^ lblRBC;
	private: System::Windows::Forms::Label^ lblSaturation;
	private: System::Windows::Forms::Label^ lblTRadius;
	private: System::Windows::Forms::Label^ lblBRadius;
	private: System::Windows::Forms::Label^ lblBinding;
	private: System::Windows::Forms::Label^ lblMetabolic;
	private: System::Windows::Forms::Label^ lblConcentration;
	private: System::Windows::Forms::Label^ lblInitDiaPress;
	private: System::Windows::Forms::Label^ lblRate;
	private: System::Windows::Forms::Label^ lblFlowRate;
	private: System::Windows::Forms::Label^ lblDensity;
	private: System::Windows::Forms::Label^ lblThick;
	private: System::Windows::Forms::Label^ lblLength;
	private: System::Windows::Forms::Label^ lblNumber;
	private: System::Windows::Forms::Label^ lblStartVel;
	private: System::Windows::Forms::Label^ lblVelocity;
	private: System::Windows::Forms::Label^ lblBPartial;
	private: System::Windows::Forms::Label^ lblDiaPressure;
	private: System::Windows::Forms::Label^ lblConsumption;
	private: System::Windows::Forms::Label^ lblTPartial;
	private: System::Windows::Forms::Label^ lblNumLength;
	private: System::Windows::Forms::Label^ lblNumBPartial;
	private: System::Windows::Forms::Label^ lblNumDiaPressure;
	private: System::Windows::Forms::Label^ lblNumOxygen;
	private: System::Windows::Forms::Label^ lblNumCompliance;
	private: System::Windows::Forms::Label^ lblNumFlowRate;
	private: System::Windows::Forms::Label^ lblNumElastance;
	private: System::Windows::Forms::Label^ lblNumIner;
	private: System::Windows::Forms::Label^ lblNumSysPressure;
	private: System::Windows::Forms::Label^ lblNumResis;
	private: System::Windows::Forms::Label^ lblNumConsumption;
	private: System::Windows::Forms::Label^ lblNumTPartial;
	private: System::Windows::Forms::Label^ lblNumVelocity;
	private: System::Windows::Forms::Label^ lblNumStartVel;
	private: System::Windows::Forms::Label^ lblNumTRadius;
	private: System::Windows::Forms::Label^ lblUnitThick;
	private: System::Windows::Forms::Label^ lblUnitOxygen;
	private: System::Windows::Forms::Label^ lblUnitRate1;
	private: System::Windows::Forms::Label^ lblUnitRate2;
	private: System::Windows::Forms::Label^ lblUnitRate3;
	private: System::Windows::Forms::Label^ lblUnitRate4;
	private: System::Windows::Forms::Label^ lblUnitRate5;
	private: System::Windows::Forms::Label^ lblUnitDiaPressure;
	private: System::Windows::Forms::Label^ lblUnitTPartial;
	private: System::Windows::Forms::Label^ lblUnitRBC;
	private: System::Windows::Forms::Label^ lblUnitCompliance;
	private: System::Windows::Forms::Label^ lblUnitFlowRate;
	private: System::Windows::Forms::Label^ lblUnitElastance;
	private: System::Windows::Forms::Label^ lblUnitVelocity;
	private: System::Windows::Forms::Label^ lblUnitBPartial;
	private: System::Windows::Forms::Label^ lblUnitIner1;
	private: System::Windows::Forms::Label^ lblUnitIner2;
	private: System::Windows::Forms::Label^ lblUnitIner3;
	private: System::Windows::Forms::Label^ lblUnitResis1;
	private: System::Windows::Forms::Label^ lblUnitResis2;
	private: System::Windows::Forms::Label^ lblUnitResis3;
	private: System::Windows::Forms::Label^ lblUnitInitSysPress;
	private: System::Windows::Forms::Label^ lblUnitSysPressure;
	private: System::Windows::Forms::Label^ lblUnitDensity1;
	private: System::Windows::Forms::Label^ lblUnitDensity2;
	private: System::Windows::Forms::Label^ lblUnitMetabolic;
	private: System::Windows::Forms::Label^ lblUnitBRadius;
	private: System::Windows::Forms::Label^ lblUnitSaturation;
	private: System::Windows::Forms::Label^ lblUnitConcentration;
	private: System::Windows::Forms::Label^ lblUnitBinding;
	private: System::Windows::Forms::Label^ lblUnitInitDiaPress;
	private: System::Windows::Forms::Label^ lblUnitConsumption;
	private: System::Windows::Forms::NumericUpDown^ numDensity;
	private: System::Windows::Forms::NumericUpDown^ numLength;
	private: System::Windows::Forms::NumericUpDown^ numThick;
	private: System::Windows::Forms::NumericUpDown^ numNumber;
	private: System::Windows::Forms::NumericUpDown^ numStartVel;
	private: System::Windows::Forms::NumericUpDown^ numMetabolic;
	private: System::Windows::Forms::NumericUpDown^ numBRadius;
	private: System::Windows::Forms::NumericUpDown^ numTRadius;
	private: System::Windows::Forms::NumericUpDown^ numSaturation;
	private: System::Windows::Forms::NumericUpDown^ numRBC;
	private: System::Windows::Forms::NumericUpDown^ numBinding;
	private: System::Windows::Forms::NumericUpDown^ numConcentration;
	private: System::Windows::Forms::NumericUpDown^ numInitDiaPress;
	private: System::Windows::Forms::NumericUpDown^ numRate;
	private: System::Windows::Forms::NumericUpDown^ numInitSysPress;
	private: System::Windows::Forms::Button^ cmdBack;
	private: System::Windows::Forms::Button^ cmdDensity;
	private: System::Windows::Forms::Button^ cmdThick;
	private: System::Windows::Forms::Button^ cmdNumber;
	private: System::Windows::Forms::Button^ cmdLength;
	private: System::Windows::Forms::Button^ cmdStartVel;
	private: System::Windows::Forms::Button^ cmdBinding;
	private: System::Windows::Forms::Button^ cmdConcentration;
	private: System::Windows::Forms::Button^ cmdInitDiaPress;
	private: System::Windows::Forms::Button^ cmdBRadius;
	private: System::Windows::Forms::Button^ cmdMetabolic;
	private: System::Windows::Forms::Button^ cmdInitSysPress;
	private: System::Windows::Forms::Button^ cmdRate;
	private: System::Windows::Forms::Button^ cmdTRadius;
	private: System::Windows::Forms::Button^ cmdRBC;
	private: System::Windows::Forms::Button^ cmdSaturation;
	private: System::Windows::Forms::PictureBox^ picVis;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Erforderliche Methode für die Designerunterstützung.
		   /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BloodForm::typeid));
			   this->pnPreset = (gcnew System::Windows::Forms::Panel());
			   this->lblParameters = (gcnew System::Windows::Forms::Label());
			   this->cmdBack = (gcnew System::Windows::Forms::Button());
			   this->pnCVS = (gcnew System::Windows::Forms::Panel());
			   this->lblCVS = (gcnew System::Windows::Forms::Label());
			   this->pnOxygen = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitOxygen = (gcnew System::Windows::Forms::Label());
			   this->lblNumOxygen = (gcnew System::Windows::Forms::Label());
			   this->lblOxygen = (gcnew System::Windows::Forms::Label());
			   this->pnBloodVessel = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitSysPressure = (gcnew System::Windows::Forms::Label());
			   this->lblNumSysPressure = (gcnew System::Windows::Forms::Label());
			   this->lblSysPressure = (gcnew System::Windows::Forms::Label());
			   this->lblUnitIner2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitIner1 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitIner3 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitResis2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitResis1 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitResis3 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitCompliance = (gcnew System::Windows::Forms::Label());
			   this->lblUnitFlowRate = (gcnew System::Windows::Forms::Label());
			   this->lblUnitElastance = (gcnew System::Windows::Forms::Label());
			   this->lblUnitVelocity = (gcnew System::Windows::Forms::Label());
			   this->lblUnitBPartial = (gcnew System::Windows::Forms::Label());
			   this->lblUnitDiaPressure = (gcnew System::Windows::Forms::Label());
			   this->lblNumCompliance = (gcnew System::Windows::Forms::Label());
			   this->lblCompliance = (gcnew System::Windows::Forms::Label());
			   this->lblNumFlowRate = (gcnew System::Windows::Forms::Label());
			   this->lblFlowRate = (gcnew System::Windows::Forms::Label());
			   this->lblNumElastance = (gcnew System::Windows::Forms::Label());
			   this->lblElastance = (gcnew System::Windows::Forms::Label());
			   this->lblNumIner = (gcnew System::Windows::Forms::Label());
			   this->lblNumResis = (gcnew System::Windows::Forms::Label());
			   this->lblIner = (gcnew System::Windows::Forms::Label());
			   this->lblResis = (gcnew System::Windows::Forms::Label());
			   this->lblNumVelocity = (gcnew System::Windows::Forms::Label());
			   this->lblVelocity = (gcnew System::Windows::Forms::Label());
			   this->lblNumBPartial = (gcnew System::Windows::Forms::Label());
			   this->lblNumDiaPressure = (gcnew System::Windows::Forms::Label());
			   this->lblBPartial = (gcnew System::Windows::Forms::Label());
			   this->lblDiaPressure = (gcnew System::Windows::Forms::Label());
			   this->lblRBC = (gcnew System::Windows::Forms::Label());
			   this->lblSaturation = (gcnew System::Windows::Forms::Label());
			   this->lblTRadius = (gcnew System::Windows::Forms::Label());
			   this->lblBRadius = (gcnew System::Windows::Forms::Label());
			   this->lblBinding = (gcnew System::Windows::Forms::Label());
			   this->lblMetabolic = (gcnew System::Windows::Forms::Label());
			   this->lblRate = (gcnew System::Windows::Forms::Label());
			   this->lblConcentration = (gcnew System::Windows::Forms::Label());
			   this->lblInitDiaPress = (gcnew System::Windows::Forms::Label());
			   this->lblDensity = (gcnew System::Windows::Forms::Label());
			   this->lblThick = (gcnew System::Windows::Forms::Label());
			   this->lblLength = (gcnew System::Windows::Forms::Label());
			   this->lblNumber = (gcnew System::Windows::Forms::Label());
			   this->lblStartVel = (gcnew System::Windows::Forms::Label());
			   this->pnParameters = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitRate2 = (gcnew System::Windows::Forms::Label());
			   this->numInitSysPress = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdInitSysPress = (gcnew System::Windows::Forms::Button());
			   this->lblUnitInitSysPress = (gcnew System::Windows::Forms::Label());
			   this->lblInitSysPress = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate4 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate3 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate5 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate1 = (gcnew System::Windows::Forms::Label());
			   this->numRate = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdRate = (gcnew System::Windows::Forms::Button());
			   this->numMetabolic = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdMetabolic = (gcnew System::Windows::Forms::Button());
			   this->lblUnitMetabolic = (gcnew System::Windows::Forms::Label());
			   this->numBRadius = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdBRadius = (gcnew System::Windows::Forms::Button());
			   this->lblUnitBRadius = (gcnew System::Windows::Forms::Label());
			   this->numTRadius = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdTRadius = (gcnew System::Windows::Forms::Button());
			   this->lblNumTRadius = (gcnew System::Windows::Forms::Label());
			   this->numRBC = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdRBC = (gcnew System::Windows::Forms::Button());
			   this->lblUnitRBC = (gcnew System::Windows::Forms::Label());
			   this->numSaturation = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdSaturation = (gcnew System::Windows::Forms::Button());
			   this->lblUnitSaturation = (gcnew System::Windows::Forms::Label());
			   this->numConcentration = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdConcentration = (gcnew System::Windows::Forms::Button());
			   this->lblUnitConcentration = (gcnew System::Windows::Forms::Label());
			   this->numBinding = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdBinding = (gcnew System::Windows::Forms::Button());
			   this->lblUnitBinding = (gcnew System::Windows::Forms::Label());
			   this->numInitDiaPress = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdInitDiaPress = (gcnew System::Windows::Forms::Button());
			   this->lblUnitInitDiaPress = (gcnew System::Windows::Forms::Label());
			   this->lblUnitDensity2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitDensity1 = (gcnew System::Windows::Forms::Label());
			   this->numDensity = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdDensity = (gcnew System::Windows::Forms::Button());
			   this->numThick = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdThick = (gcnew System::Windows::Forms::Button());
			   this->lblUnitThick = (gcnew System::Windows::Forms::Label());
			   this->numLength = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdLength = (gcnew System::Windows::Forms::Button());
			   this->lblNumLength = (gcnew System::Windows::Forms::Label());
			   this->numNumber = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdNumber = (gcnew System::Windows::Forms::Button());
			   this->numStartVel = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdStartVel = (gcnew System::Windows::Forms::Button());
			   this->lblNumStartVel = (gcnew System::Windows::Forms::Label());
			   this->picVis = (gcnew System::Windows::Forms::PictureBox());
			   this->pnTissue = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitConsumption = (gcnew System::Windows::Forms::Label());
			   this->lblNumConsumption = (gcnew System::Windows::Forms::Label());
			   this->lblConsumption = (gcnew System::Windows::Forms::Label());
			   this->lblUnitTPartial = (gcnew System::Windows::Forms::Label());
			   this->lblNumTPartial = (gcnew System::Windows::Forms::Label());
			   this->lblTPartial = (gcnew System::Windows::Forms::Label());
			   this->pnBloodTop = (gcnew System::Windows::Forms::Panel());
			   this->lblBloodVessel = (gcnew System::Windows::Forms::Label());
			   this->pnTissueTop = (gcnew System::Windows::Forms::Panel());
			   this->lblTissue = (gcnew System::Windows::Forms::Label());
			   this->pnPreset->SuspendLayout();
			   this->pnCVS->SuspendLayout();
			   this->pnOxygen->SuspendLayout();
			   this->pnBloodVessel->SuspendLayout();
			   this->pnParameters->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numInitSysPress))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRate))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMetabolic))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBRadius))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTRadius))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRBC))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSaturation))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numConcentration))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBinding))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numInitDiaPress))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDensity))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numThick))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLength))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNumber))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStartVel))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picVis))->BeginInit();
			   this->pnTissue->SuspendLayout();
			   this->pnBloodTop->SuspendLayout();
			   this->pnTissueTop->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // pnPreset
			   // 
			   this->pnPreset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->pnPreset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnPreset->Controls->Add(this->lblParameters);
			   this->pnPreset->Location = System::Drawing::Point(161, 354);
			   this->pnPreset->Name = L"pnPreset";
			   this->pnPreset->Size = System::Drawing::Size(964, 28);
			   this->pnPreset->TabIndex = 96;
			   // 
			   // lblParameters
			   // 
			   this->lblParameters->AutoSize = true;
			   this->lblParameters->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lblParameters->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblParameters->ForeColor = System::Drawing::Color::White;
			   this->lblParameters->Location = System::Drawing::Point(3, 4);
			   this->lblParameters->Name = L"lblParameters";
			   this->lblParameters->Size = System::Drawing::Size(137, 19);
			   this->lblParameters->TabIndex = 18;
			   this->lblParameters->Text = L"Preset Parameters";
			   // 
			   // cmdBack
			   // 
			   this->cmdBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdBack->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdBack->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdBack->ForeColor = System::Drawing::Color::White;
			   this->cmdBack->Location = System::Drawing::Point(12, 56);
			   this->cmdBack->Name = L"cmdBack";
			   this->cmdBack->Size = System::Drawing::Size(113, 38);
			   this->cmdBack->TabIndex = 89;
			   this->cmdBack->Text = L"CLOSE";
			   this->cmdBack->UseVisualStyleBackColor = false;
			   this->cmdBack->Click += gcnew System::EventHandler(this, &BloodForm::cmdBack_Click);
			   // 
			   // pnCVS
			   // 
			   this->pnCVS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(44)));
			   this->pnCVS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnCVS->Controls->Add(this->lblCVS);
			   this->pnCVS->Location = System::Drawing::Point(0, 0);
			   this->pnCVS->Name = L"pnCVS";
			   this->pnCVS->Size = System::Drawing::Size(1125, 47);
			   this->pnCVS->TabIndex = 88;
			   // 
			   // lblCVS
			   // 
			   this->lblCVS->AutoSize = true;
			   this->lblCVS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(44)));
			   this->lblCVS->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCVS->ForeColor = System::Drawing::SystemColors::Window;
			   this->lblCVS->Location = System::Drawing::Point(309, 11);
			   this->lblCVS->Name = L"lblCVS";
			   this->lblCVS->Size = System::Drawing::Size(330, 23);
			   this->lblCVS->TabIndex = 1;
			   this->lblCVS->Text = L"THE HUMAN CARDIOVASCULAR SYSTEM";
			   // 
			   // pnOxygen
			   // 
			   this->pnOxygen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->pnOxygen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnOxygen->Controls->Add(this->lblUnitOxygen);
			   this->pnOxygen->Controls->Add(this->lblNumOxygen);
			   this->pnOxygen->Controls->Add(this->lblOxygen);
			   this->pnOxygen->Location = System::Drawing::Point(153, 100);
			   this->pnOxygen->Name = L"pnOxygen";
			   this->pnOxygen->Size = System::Drawing::Size(971, 28);
			   this->pnOxygen->TabIndex = 93;
			   // 
			   // lblUnitOxygen
			   // 
			   this->lblUnitOxygen->AutoSize = true;
			   this->lblUnitOxygen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lblUnitOxygen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitOxygen->ForeColor = System::Drawing::Color::White;
			   this->lblUnitOxygen->Location = System::Drawing::Point(135, 4);
			   this->lblUnitOxygen->Name = L"lblUnitOxygen";
			   this->lblUnitOxygen->Size = System::Drawing::Size(19, 19);
			   this->lblUnitOxygen->TabIndex = 103;
			   this->lblUnitOxygen->Text = L"%";
			   // 
			   // lblNumOxygen
			   // 
			   this->lblNumOxygen->AutoSize = true;
			   this->lblNumOxygen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lblNumOxygen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumOxygen->ForeColor = System::Drawing::Color::White;
			   this->lblNumOxygen->Location = System::Drawing::Point(105, 4);
			   this->lblNumOxygen->Name = L"lblNumOxygen";
			   this->lblNumOxygen->Size = System::Drawing::Size(34, 19);
			   this->lblNumOxygen->TabIndex = 102;
			   this->lblNumOxygen->Text = L"100";
			   // 
			   // lblOxygen
			   // 
			   this->lblOxygen->AutoSize = true;
			   this->lblOxygen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lblOxygen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblOxygen->ForeColor = System::Drawing::Color::White;
			   this->lblOxygen->Location = System::Drawing::Point(3, 4);
			   this->lblOxygen->Name = L"lblOxygen";
			   this->lblOxygen->Size = System::Drawing::Size(96, 19);
			   this->lblOxygen->TabIndex = 18;
			   this->lblOxygen->Text = L"Oxygen Level";
			   // 
			   // pnBloodVessel
			   // 
			   this->pnBloodVessel->AutoScroll = true;
			   this->pnBloodVessel->AutoSize = true;
			   this->pnBloodVessel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnBloodVessel->Controls->Add(this->lblUnitSysPressure);
			   this->pnBloodVessel->Controls->Add(this->lblNumSysPressure);
			   this->pnBloodVessel->Controls->Add(this->lblSysPressure);
			   this->pnBloodVessel->Controls->Add(this->lblUnitIner2);
			   this->pnBloodVessel->Controls->Add(this->lblUnitIner1);
			   this->pnBloodVessel->Controls->Add(this->lblUnitIner3);
			   this->pnBloodVessel->Controls->Add(this->lblUnitResis2);
			   this->pnBloodVessel->Controls->Add(this->lblUnitResis1);
			   this->pnBloodVessel->Controls->Add(this->lblUnitResis3);
			   this->pnBloodVessel->Controls->Add(this->lblUnitCompliance);
			   this->pnBloodVessel->Controls->Add(this->lblUnitFlowRate);
			   this->pnBloodVessel->Controls->Add(this->lblUnitElastance);
			   this->pnBloodVessel->Controls->Add(this->lblUnitVelocity);
			   this->pnBloodVessel->Controls->Add(this->lblUnitBPartial);
			   this->pnBloodVessel->Controls->Add(this->lblUnitDiaPressure);
			   this->pnBloodVessel->Controls->Add(this->lblNumCompliance);
			   this->pnBloodVessel->Controls->Add(this->lblCompliance);
			   this->pnBloodVessel->Controls->Add(this->lblNumFlowRate);
			   this->pnBloodVessel->Controls->Add(this->lblFlowRate);
			   this->pnBloodVessel->Controls->Add(this->lblNumElastance);
			   this->pnBloodVessel->Controls->Add(this->lblElastance);
			   this->pnBloodVessel->Controls->Add(this->lblNumIner);
			   this->pnBloodVessel->Controls->Add(this->lblNumResis);
			   this->pnBloodVessel->Controls->Add(this->lblIner);
			   this->pnBloodVessel->Controls->Add(this->lblResis);
			   this->pnBloodVessel->Controls->Add(this->lblNumVelocity);
			   this->pnBloodVessel->Controls->Add(this->lblVelocity);
			   this->pnBloodVessel->Controls->Add(this->lblNumBPartial);
			   this->pnBloodVessel->Controls->Add(this->lblNumDiaPressure);
			   this->pnBloodVessel->Controls->Add(this->lblBPartial);
			   this->pnBloodVessel->Controls->Add(this->lblDiaPressure);
			   this->pnBloodVessel->Location = System::Drawing::Point(157, 170);
			   this->pnBloodVessel->Name = L"pnBloodVessel";
			   this->pnBloodVessel->Size = System::Drawing::Size(607, 161);
			   this->pnBloodVessel->TabIndex = 100;
			   // 
			   // lblUnitSysPressure
			   // 
			   this->lblUnitSysPressure->AutoSize = true;
			   this->lblUnitSysPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitSysPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitSysPressure->ForeColor = System::Drawing::Color::White;
			   this->lblUnitSysPressure->Location = System::Drawing::Point(247, 37);
			   this->lblUnitSysPressure->Name = L"lblUnitSysPressure";
			   this->lblUnitSysPressure->Size = System::Drawing::Size(55, 19);
			   this->lblUnitSysPressure->TabIndex = 166;
			   this->lblUnitSysPressure->Text = L"mmHg";
			   // 
			   // lblNumSysPressure
			   // 
			   this->lblNumSysPressure->AutoSize = true;
			   this->lblNumSysPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumSysPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumSysPressure->ForeColor = System::Drawing::Color::White;
			   this->lblNumSysPressure->Location = System::Drawing::Point(170, 37);
			   this->lblNumSysPressure->Name = L"lblNumSysPressure";
			   this->lblNumSysPressure->Size = System::Drawing::Size(62, 19);
			   this->lblNumSysPressure->TabIndex = 165;
			   this->lblNumSysPressure->Text = L"000.00";
			   // 
			   // lblSysPressure
			   // 
			   this->lblSysPressure->AutoSize = true;
			   this->lblSysPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblSysPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblSysPressure->ForeColor = System::Drawing::Color::White;
			   this->lblSysPressure->Location = System::Drawing::Point(8, 37);
			   this->lblSysPressure->Name = L"lblSysPressure";
			   this->lblSysPressure->Size = System::Drawing::Size(120, 19);
			   this->lblSysPressure->TabIndex = 164;
			   this->lblSysPressure->Text = L"Systolic Pressure";
			   // 
			   // lblUnitIner2
			   // 
			   this->lblUnitIner2->AutoSize = true;
			   this->lblUnitIner2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitIner2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 4, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitIner2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitIner2->Location = System::Drawing::Point(567, 42);
			   this->lblUnitIner2->Name = L"lblUnitIner2";
			   this->lblUnitIner2->Size = System::Drawing::Size(7, 7);
			   this->lblUnitIner2->TabIndex = 162;
			   this->lblUnitIner2->Text = L"2";
			   // 
			   // lblUnitIner1
			   // 
			   this->lblUnitIner1->AutoSize = true;
			   this->lblUnitIner1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitIner1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitIner1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitIner1->Location = System::Drawing::Point(540, 42);
			   this->lblUnitIner1->Name = L"lblUnitIner1";
			   this->lblUnitIner1->Size = System::Drawing::Size(32, 13);
			   this->lblUnitIner1->TabIndex = 161;
			   this->lblUnitIner1->Text = L"Pa · s";
			   // 
			   // lblUnitIner3
			   // 
			   this->lblUnitIner3->AutoSize = true;
			   this->lblUnitIner3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitIner3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitIner3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitIner3->Location = System::Drawing::Point(574, 42);
			   this->lblUnitIner3->Name = L"lblUnitIner3";
			   this->lblUnitIner3->Size = System::Drawing::Size(21, 13);
			   this->lblUnitIner3->TabIndex = 163;
			   this->lblUnitIner3->Text = L"/ml";
			   // 
			   // lblUnitResis2
			   // 
			   this->lblUnitResis2->AutoSize = true;
			   this->lblUnitResis2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitResis2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 4, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitResis2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitResis2->Location = System::Drawing::Point(569, 12);
			   this->lblUnitResis2->Name = L"lblUnitResis2";
			   this->lblUnitResis2->Size = System::Drawing::Size(7, 7);
			   this->lblUnitResis2->TabIndex = 159;
			   this->lblUnitResis2->Text = L"2";
			   // 
			   // lblUnitResis1
			   // 
			   this->lblUnitResis1->AutoSize = true;
			   this->lblUnitResis1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitResis1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitResis1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitResis1->Location = System::Drawing::Point(540, 14);
			   this->lblUnitResis1->Name = L"lblUnitResis1";
			   this->lblUnitResis1->Size = System::Drawing::Size(32, 13);
			   this->lblUnitResis1->TabIndex = 158;
			   this->lblUnitResis1->Text = L"Pa · s";
			   // 
			   // lblUnitResis3
			   // 
			   this->lblUnitResis3->AutoSize = true;
			   this->lblUnitResis3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitResis3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitResis3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitResis3->Location = System::Drawing::Point(574, 14);
			   this->lblUnitResis3->Name = L"lblUnitResis3";
			   this->lblUnitResis3->Size = System::Drawing::Size(21, 13);
			   this->lblUnitResis3->TabIndex = 160;
			   this->lblUnitResis3->Text = L"/ml";
			   // 
			   // lblUnitCompliance
			   // 
			   this->lblUnitCompliance->AutoSize = true;
			   this->lblUnitCompliance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitCompliance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitCompliance->ForeColor = System::Drawing::Color::White;
			   this->lblUnitCompliance->Location = System::Drawing::Point(532, 103);
			   this->lblUnitCompliance->Name = L"lblUnitCompliance";
			   this->lblUnitCompliance->Size = System::Drawing::Size(64, 13);
			   this->lblUnitCompliance->TabIndex = 125;
			   this->lblUnitCompliance->Text = L"ml/mmHg/kg";
			   // 
			   // lblUnitFlowRate
			   // 
			   this->lblUnitFlowRate->AutoSize = true;
			   this->lblUnitFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblUnitFlowRate->Location = System::Drawing::Point(249, 128);
			   this->lblUnitFlowRate->Name = L"lblUnitFlowRate";
			   this->lblUnitFlowRate->Size = System::Drawing::Size(42, 19);
			   this->lblUnitFlowRate->TabIndex = 123;
			   this->lblUnitFlowRate->Text = L"l/min";
			   // 
			   // lblUnitElastance
			   // 
			   this->lblUnitElastance->AutoSize = true;
			   this->lblUnitElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitElastance->ForeColor = System::Drawing::Color::White;
			   this->lblUnitElastance->Location = System::Drawing::Point(545, 71);
			   this->lblUnitElastance->Name = L"lblUnitElastance";
			   this->lblUnitElastance->Size = System::Drawing::Size(51, 13);
			   this->lblUnitElastance->TabIndex = 122;
			   this->lblUnitElastance->Text = L"mmHg/ml";
			   // 
			   // lblUnitVelocity
			   // 
			   this->lblUnitVelocity->AutoSize = true;
			   this->lblUnitVelocity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitVelocity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitVelocity->ForeColor = System::Drawing::Color::White;
			   this->lblUnitVelocity->Location = System::Drawing::Point(247, 96);
			   this->lblUnitVelocity->Name = L"lblUnitVelocity";
			   this->lblUnitVelocity->Size = System::Drawing::Size(43, 19);
			   this->lblUnitVelocity->TabIndex = 119;
			   this->lblUnitVelocity->Text = L"μm/s";
			   // 
			   // lblUnitBPartial
			   // 
			   this->lblUnitBPartial->AutoSize = true;
			   this->lblUnitBPartial->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitBPartial->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitBPartial->ForeColor = System::Drawing::Color::White;
			   this->lblUnitBPartial->Location = System::Drawing::Point(247, 66);
			   this->lblUnitBPartial->Name = L"lblUnitBPartial";
			   this->lblUnitBPartial->Size = System::Drawing::Size(55, 19);
			   this->lblUnitBPartial->TabIndex = 118;
			   this->lblUnitBPartial->Text = L"mmHg";
			   // 
			   // lblUnitDiaPressure
			   // 
			   this->lblUnitDiaPressure->AutoSize = true;
			   this->lblUnitDiaPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitDiaPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitDiaPressure->ForeColor = System::Drawing::Color::White;
			   this->lblUnitDiaPressure->Location = System::Drawing::Point(247, 9);
			   this->lblUnitDiaPressure->Name = L"lblUnitDiaPressure";
			   this->lblUnitDiaPressure->Size = System::Drawing::Size(55, 19);
			   this->lblUnitDiaPressure->TabIndex = 117;
			   this->lblUnitDiaPressure->Text = L"mmHg";
			   // 
			   // lblNumCompliance
			   // 
			   this->lblNumCompliance->AutoSize = true;
			   this->lblNumCompliance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumCompliance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumCompliance->ForeColor = System::Drawing::Color::White;
			   this->lblNumCompliance->Location = System::Drawing::Point(449, 98);
			   this->lblNumCompliance->Name = L"lblNumCompliance";
			   this->lblNumCompliance->Size = System::Drawing::Size(62, 19);
			   this->lblNumCompliance->TabIndex = 116;
			   this->lblNumCompliance->Text = L"000.00";
			   // 
			   // lblCompliance
			   // 
			   this->lblCompliance->AutoSize = true;
			   this->lblCompliance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblCompliance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCompliance->ForeColor = System::Drawing::Color::White;
			   this->lblCompliance->Location = System::Drawing::Point(321, 98);
			   this->lblCompliance->Name = L"lblCompliance";
			   this->lblCompliance->Size = System::Drawing::Size(89, 19);
			   this->lblCompliance->TabIndex = 115;
			   this->lblCompliance->Text = L"Compliance";
			   // 
			   // lblNumFlowRate
			   // 
			   this->lblNumFlowRate->AutoSize = true;
			   this->lblNumFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblNumFlowRate->Location = System::Drawing::Point(170, 128);
			   this->lblNumFlowRate->Name = L"lblNumFlowRate";
			   this->lblNumFlowRate->Size = System::Drawing::Size(62, 19);
			   this->lblNumFlowRate->TabIndex = 113;
			   this->lblNumFlowRate->Text = L"000.00";
			   // 
			   // lblFlowRate
			   // 
			   this->lblFlowRate->AutoSize = true;
			   this->lblFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblFlowRate->Location = System::Drawing::Point(8, 128);
			   this->lblFlowRate->Name = L"lblFlowRate";
			   this->lblFlowRate->Size = System::Drawing::Size(73, 19);
			   this->lblFlowRate->TabIndex = 111;
			   this->lblFlowRate->Text = L"Flow Rate";
			   // 
			   // lblNumElastance
			   // 
			   this->lblNumElastance->AutoSize = true;
			   this->lblNumElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumElastance->ForeColor = System::Drawing::Color::White;
			   this->lblNumElastance->Location = System::Drawing::Point(449, 67);
			   this->lblNumElastance->Name = L"lblNumElastance";
			   this->lblNumElastance->Size = System::Drawing::Size(62, 19);
			   this->lblNumElastance->TabIndex = 110;
			   this->lblNumElastance->Text = L"000.00";
			   // 
			   // lblElastance
			   // 
			   this->lblElastance->AutoSize = true;
			   this->lblElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblElastance->ForeColor = System::Drawing::Color::White;
			   this->lblElastance->Location = System::Drawing::Point(321, 66);
			   this->lblElastance->Name = L"lblElastance";
			   this->lblElastance->Size = System::Drawing::Size(73, 19);
			   this->lblElastance->TabIndex = 109;
			   this->lblElastance->Text = L"Elastance";
			   // 
			   // lblNumIner
			   // 
			   this->lblNumIner->AutoSize = true;
			   this->lblNumIner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumIner->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumIner->ForeColor = System::Drawing::Color::White;
			   this->lblNumIner->Location = System::Drawing::Point(449, 37);
			   this->lblNumIner->Name = L"lblNumIner";
			   this->lblNumIner->Size = System::Drawing::Size(62, 19);
			   this->lblNumIner->TabIndex = 108;
			   this->lblNumIner->Text = L"000.00";
			   // 
			   // lblNumResis
			   // 
			   this->lblNumResis->AutoSize = true;
			   this->lblNumResis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumResis->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumResis->ForeColor = System::Drawing::Color::White;
			   this->lblNumResis->Location = System::Drawing::Point(449, 11);
			   this->lblNumResis->Name = L"lblNumResis";
			   this->lblNumResis->Size = System::Drawing::Size(62, 19);
			   this->lblNumResis->TabIndex = 107;
			   this->lblNumResis->Text = L"000.00";
			   // 
			   // lblIner
			   // 
			   this->lblIner->AutoSize = true;
			   this->lblIner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblIner->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblIner->ForeColor = System::Drawing::Color::White;
			   this->lblIner->Location = System::Drawing::Point(321, 37);
			   this->lblIner->Name = L"lblIner";
			   this->lblIner->Size = System::Drawing::Size(71, 19);
			   this->lblIner->TabIndex = 106;
			   this->lblIner->Text = L"Inertance";
			   // 
			   // lblResis
			   // 
			   this->lblResis->AutoSize = true;
			   this->lblResis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblResis->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblResis->ForeColor = System::Drawing::Color::White;
			   this->lblResis->Location = System::Drawing::Point(319, 9);
			   this->lblResis->Name = L"lblResis";
			   this->lblResis->Size = System::Drawing::Size(80, 19);
			   this->lblResis->TabIndex = 105;
			   this->lblResis->Text = L"Resistance";
			   // 
			   // lblNumVelocity
			   // 
			   this->lblNumVelocity->AutoSize = true;
			   this->lblNumVelocity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumVelocity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumVelocity->ForeColor = System::Drawing::Color::White;
			   this->lblNumVelocity->Location = System::Drawing::Point(170, 96);
			   this->lblNumVelocity->Name = L"lblNumVelocity";
			   this->lblNumVelocity->Size = System::Drawing::Size(62, 19);
			   this->lblNumVelocity->TabIndex = 104;
			   this->lblNumVelocity->Text = L"000.00";
			   // 
			   // lblVelocity
			   // 
			   this->lblVelocity->AutoSize = true;
			   this->lblVelocity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblVelocity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblVelocity->ForeColor = System::Drawing::Color::White;
			   this->lblVelocity->Location = System::Drawing::Point(8, 96);
			   this->lblVelocity->Name = L"lblVelocity";
			   this->lblVelocity->Size = System::Drawing::Size(60, 19);
			   this->lblVelocity->TabIndex = 103;
			   this->lblVelocity->Text = L"Velocity";
			   // 
			   // lblNumBPartial
			   // 
			   this->lblNumBPartial->AutoSize = true;
			   this->lblNumBPartial->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumBPartial->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumBPartial->ForeColor = System::Drawing::Color::White;
			   this->lblNumBPartial->Location = System::Drawing::Point(170, 66);
			   this->lblNumBPartial->Name = L"lblNumBPartial";
			   this->lblNumBPartial->Size = System::Drawing::Size(62, 19);
			   this->lblNumBPartial->TabIndex = 102;
			   this->lblNumBPartial->Text = L"000.00";
			   // 
			   // lblNumDiaPressure
			   // 
			   this->lblNumDiaPressure->AutoSize = true;
			   this->lblNumDiaPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumDiaPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumDiaPressure->ForeColor = System::Drawing::Color::White;
			   this->lblNumDiaPressure->Location = System::Drawing::Point(170, 9);
			   this->lblNumDiaPressure->Name = L"lblNumDiaPressure";
			   this->lblNumDiaPressure->Size = System::Drawing::Size(62, 19);
			   this->lblNumDiaPressure->TabIndex = 101;
			   this->lblNumDiaPressure->Text = L"000.00";
			   // 
			   // lblBPartial
			   // 
			   this->lblBPartial->AutoSize = true;
			   this->lblBPartial->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblBPartial->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblBPartial->ForeColor = System::Drawing::Color::White;
			   this->lblBPartial->Location = System::Drawing::Point(8, 66);
			   this->lblBPartial->Name = L"lblBPartial";
			   this->lblBPartial->Size = System::Drawing::Size(116, 19);
			   this->lblBPartial->TabIndex = 100;
			   this->lblBPartial->Text = L"Partial Pressure";
			   // 
			   // lblDiaPressure
			   // 
			   this->lblDiaPressure->AutoSize = true;
			   this->lblDiaPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblDiaPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblDiaPressure->ForeColor = System::Drawing::Color::White;
			   this->lblDiaPressure->Location = System::Drawing::Point(8, 9);
			   this->lblDiaPressure->Name = L"lblDiaPressure";
			   this->lblDiaPressure->Size = System::Drawing::Size(127, 19);
			   this->lblDiaPressure->TabIndex = 99;
			   this->lblDiaPressure->Text = L"Diastolic Pressure";
			   // 
			   // lblRBC
			   // 
			   this->lblRBC->AutoSize = true;
			   this->lblRBC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRBC->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRBC->ForeColor = System::Drawing::Color::White;
			   this->lblRBC->Location = System::Drawing::Point(14, 54);
			   this->lblRBC->Name = L"lblRBC";
			   this->lblRBC->Size = System::Drawing::Size(93, 19);
			   this->lblRBC->TabIndex = 160;
			   this->lblRBC->Text = L"RBC Velocity";
			   // 
			   // lblSaturation
			   // 
			   this->lblSaturation->AutoSize = true;
			   this->lblSaturation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblSaturation->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblSaturation->ForeColor = System::Drawing::Color::White;
			   this->lblSaturation->Location = System::Drawing::Point(12, 22);
			   this->lblSaturation->Name = L"lblSaturation";
			   this->lblSaturation->Size = System::Drawing::Size(130, 19);
			   this->lblSaturation->TabIndex = 168;
			   this->lblSaturation->Text = L"Hb-O2-Saturation";
			   // 
			   // lblTRadius
			   // 
			   this->lblTRadius->AutoSize = true;
			   this->lblTRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblTRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblTRadius->ForeColor = System::Drawing::Color::White;
			   this->lblTRadius->Location = System::Drawing::Point(14, 86);
			   this->lblTRadius->Name = L"lblTRadius";
			   this->lblTRadius->Size = System::Drawing::Size(98, 19);
			   this->lblTRadius->TabIndex = 162;
			   this->lblTRadius->Text = L"Tissue Radius";
			   // 
			   // lblBRadius
			   // 
			   this->lblBRadius->AutoSize = true;
			   this->lblBRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblBRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblBRadius->ForeColor = System::Drawing::Color::White;
			   this->lblBRadius->Location = System::Drawing::Point(14, 118);
			   this->lblBRadius->Name = L"lblBRadius";
			   this->lblBRadius->Size = System::Drawing::Size(101, 19);
			   this->lblBRadius->TabIndex = 164;
			   this->lblBRadius->Text = L"Vessel Radius";
			   // 
			   // lblBinding
			   // 
			   this->lblBinding->AutoSize = true;
			   this->lblBinding->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblBinding->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblBinding->ForeColor = System::Drawing::Color::White;
			   this->lblBinding->Location = System::Drawing::Point(11, -71);
			   this->lblBinding->Name = L"lblBinding";
			   this->lblBinding->Size = System::Drawing::Size(144, 19);
			   this->lblBinding->TabIndex = 165;
			   this->lblBinding->Text = L"O2 Binding Capacity";
			   // 
			   // lblMetabolic
			   // 
			   this->lblMetabolic->AutoSize = true;
			   this->lblMetabolic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblMetabolic->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMetabolic->ForeColor = System::Drawing::Color::White;
			   this->lblMetabolic->Location = System::Drawing::Point(14, 152);
			   this->lblMetabolic->Name = L"lblMetabolic";
			   this->lblMetabolic->Size = System::Drawing::Size(109, 19);
			   this->lblMetabolic->TabIndex = 166;
			   this->lblMetabolic->Text = L"Metabolic Rate";
			   // 
			   // lblRate
			   // 
			   this->lblRate->AutoSize = true;
			   this->lblRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRate->ForeColor = System::Drawing::Color::White;
			   this->lblRate->Location = System::Drawing::Point(11, 216);
			   this->lblRate->Name = L"lblRate";
			   this->lblRate->Size = System::Drawing::Size(176, 19);
			   this->lblRate->TabIndex = 167;
			   this->lblRate->Text = L"Max. O2 consumtion rate";
			   // 
			   // lblConcentration
			   // 
			   this->lblConcentration->AutoSize = true;
			   this->lblConcentration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblConcentration->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblConcentration->ForeColor = System::Drawing::Color::White;
			   this->lblConcentration->Location = System::Drawing::Point(12, -39);
			   this->lblConcentration->Name = L"lblConcentration";
			   this->lblConcentration->Size = System::Drawing::Size(126, 19);
			   this->lblConcentration->TabIndex = 163;
			   this->lblConcentration->Text = L"Hb Concentration";
			   // 
			   // lblInitDiaPress
			   // 
			   this->lblInitDiaPress->AutoSize = true;
			   this->lblInitDiaPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblInitDiaPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblInitDiaPress->ForeColor = System::Drawing::Color::White;
			   this->lblInitDiaPress->Location = System::Drawing::Point(12, -133);
			   this->lblInitDiaPress->Name = L"lblInitDiaPress";
			   this->lblInitDiaPress->Size = System::Drawing::Size(165, 19);
			   this->lblInitDiaPress->TabIndex = 159;
			   this->lblInitDiaPress->Text = L"Initial Diastolic Pressure";
			   // 
			   // lblDensity
			   // 
			   this->lblDensity->AutoSize = true;
			   this->lblDensity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblDensity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblDensity->ForeColor = System::Drawing::Color::White;
			   this->lblDensity->Location = System::Drawing::Point(13, -167);
			   this->lblDensity->Name = L"lblDensity";
			   this->lblDensity->Size = System::Drawing::Size(98, 19);
			   this->lblDensity->TabIndex = 209;
			   this->lblDensity->Text = L"Blood Density";
			   // 
			   // lblThick
			   // 
			   this->lblThick->AutoSize = true;
			   this->lblThick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblThick->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblThick->ForeColor = System::Drawing::Color::White;
			   this->lblThick->Location = System::Drawing::Point(11, -199);
			   this->lblThick->Name = L"lblThick";
			   this->lblThick->Size = System::Drawing::Size(118, 19);
			   this->lblThick->TabIndex = 214;
			   this->lblThick->Text = L"Vessel Thickness";
			   // 
			   // lblLength
			   // 
			   this->lblLength->AutoSize = true;
			   this->lblLength->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLength->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLength->ForeColor = System::Drawing::Color::White;
			   this->lblLength->Location = System::Drawing::Point(11, -229);
			   this->lblLength->Name = L"lblLength";
			   this->lblLength->Size = System::Drawing::Size(100, 19);
			   this->lblLength->TabIndex = 219;
			   this->lblLength->Text = L"Vessel Length";
			   // 
			   // lblNumber
			   // 
			   this->lblNumber->AutoSize = true;
			   this->lblNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumber->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumber->ForeColor = System::Drawing::Color::White;
			   this->lblNumber->Location = System::Drawing::Point(12, -263);
			   this->lblNumber->Name = L"lblNumber";
			   this->lblNumber->Size = System::Drawing::Size(139, 19);
			   this->lblNumber->TabIndex = 224;
			   this->lblNumber->Text = L"Number Of Vessels";
			   // 
			   // lblStartVel
			   // 
			   this->lblStartVel->AutoSize = true;
			   this->lblStartVel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblStartVel->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblStartVel->ForeColor = System::Drawing::Color::White;
			   this->lblStartVel->Location = System::Drawing::Point(12, -293);
			   this->lblStartVel->Name = L"lblStartVel";
			   this->lblStartVel->Size = System::Drawing::Size(97, 19);
			   this->lblStartVel->TabIndex = 229;
			   this->lblStartVel->Text = L"Start Velocity";
			   // 
			   // pnParameters
			   // 
			   this->pnParameters->AutoScroll = true;
			   this->pnParameters->AutoSize = true;
			   this->pnParameters->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnParameters->Controls->Add(this->lblUnitRate2);
			   this->pnParameters->Controls->Add(this->numInitSysPress);
			   this->pnParameters->Controls->Add(this->cmdInitSysPress);
			   this->pnParameters->Controls->Add(this->lblUnitInitSysPress);
			   this->pnParameters->Controls->Add(this->lblInitSysPress);
			   this->pnParameters->Controls->Add(this->lblUnitRate4);
			   this->pnParameters->Controls->Add(this->lblUnitRate3);
			   this->pnParameters->Controls->Add(this->lblUnitRate5);
			   this->pnParameters->Controls->Add(this->lblUnitRate1);
			   this->pnParameters->Controls->Add(this->numRate);
			   this->pnParameters->Controls->Add(this->cmdRate);
			   this->pnParameters->Controls->Add(this->numMetabolic);
			   this->pnParameters->Controls->Add(this->cmdMetabolic);
			   this->pnParameters->Controls->Add(this->lblUnitMetabolic);
			   this->pnParameters->Controls->Add(this->numBRadius);
			   this->pnParameters->Controls->Add(this->cmdBRadius);
			   this->pnParameters->Controls->Add(this->lblUnitBRadius);
			   this->pnParameters->Controls->Add(this->numTRadius);
			   this->pnParameters->Controls->Add(this->cmdTRadius);
			   this->pnParameters->Controls->Add(this->lblNumTRadius);
			   this->pnParameters->Controls->Add(this->numRBC);
			   this->pnParameters->Controls->Add(this->cmdRBC);
			   this->pnParameters->Controls->Add(this->lblUnitRBC);
			   this->pnParameters->Controls->Add(this->numSaturation);
			   this->pnParameters->Controls->Add(this->cmdSaturation);
			   this->pnParameters->Controls->Add(this->lblUnitSaturation);
			   this->pnParameters->Controls->Add(this->numConcentration);
			   this->pnParameters->Controls->Add(this->cmdConcentration);
			   this->pnParameters->Controls->Add(this->lblUnitConcentration);
			   this->pnParameters->Controls->Add(this->numBinding);
			   this->pnParameters->Controls->Add(this->cmdBinding);
			   this->pnParameters->Controls->Add(this->lblUnitBinding);
			   this->pnParameters->Controls->Add(this->numInitDiaPress);
			   this->pnParameters->Controls->Add(this->cmdInitDiaPress);
			   this->pnParameters->Controls->Add(this->lblUnitInitDiaPress);
			   this->pnParameters->Controls->Add(this->lblUnitDensity2);
			   this->pnParameters->Controls->Add(this->lblUnitDensity1);
			   this->pnParameters->Controls->Add(this->numDensity);
			   this->pnParameters->Controls->Add(this->cmdDensity);
			   this->pnParameters->Controls->Add(this->numThick);
			   this->pnParameters->Controls->Add(this->cmdThick);
			   this->pnParameters->Controls->Add(this->lblUnitThick);
			   this->pnParameters->Controls->Add(this->numLength);
			   this->pnParameters->Controls->Add(this->cmdLength);
			   this->pnParameters->Controls->Add(this->lblNumLength);
			   this->pnParameters->Controls->Add(this->numNumber);
			   this->pnParameters->Controls->Add(this->cmdNumber);
			   this->pnParameters->Controls->Add(this->numStartVel);
			   this->pnParameters->Controls->Add(this->cmdStartVel);
			   this->pnParameters->Controls->Add(this->lblNumStartVel);
			   this->pnParameters->Controls->Add(this->lblStartVel);
			   this->pnParameters->Controls->Add(this->lblNumber);
			   this->pnParameters->Controls->Add(this->lblLength);
			   this->pnParameters->Controls->Add(this->lblThick);
			   this->pnParameters->Controls->Add(this->lblDensity);
			   this->pnParameters->Controls->Add(this->lblInitDiaPress);
			   this->pnParameters->Controls->Add(this->lblConcentration);
			   this->pnParameters->Controls->Add(this->lblRate);
			   this->pnParameters->Controls->Add(this->lblMetabolic);
			   this->pnParameters->Controls->Add(this->lblBinding);
			   this->pnParameters->Controls->Add(this->lblBRadius);
			   this->pnParameters->Controls->Add(this->lblTRadius);
			   this->pnParameters->Controls->Add(this->lblSaturation);
			   this->pnParameters->Controls->Add(this->lblRBC);
			   this->pnParameters->Location = System::Drawing::Point(161, 399);
			   this->pnParameters->Name = L"pnParameters";
			   this->pnParameters->Size = System::Drawing::Size(964, 250);
			   this->pnParameters->TabIndex = 99;
			   // 
			   // lblUnitRate2
			   // 
			   this->lblUnitRate2->AutoSize = true;
			   this->lblUnitRate2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRate2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRate2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRate2->Location = System::Drawing::Point(407, 226);
			   this->lblUnitRate2->Name = L"lblUnitRate2";
			   this->lblUnitRate2->Size = System::Drawing::Size(20, 13);
			   this->lblUnitRate2->TabIndex = 286;
			   this->lblUnitRate2->Text = L"O2";
			   // 
			   // numInitSysPress
			   // 
			   this->numInitSysPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numInitSysPress->DecimalPlaces = 2;
			   this->numInitSysPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numInitSysPress->ForeColor = System::Drawing::Color::White;
			   this->numInitSysPress->Location = System::Drawing::Point(201, 181);
			   this->numInitSysPress->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			   this->numInitSysPress->Name = L"numInitSysPress";
			   this->numInitSysPress->Size = System::Drawing::Size(155, 26);
			   this->numInitSysPress->TabIndex = 285;
			   this->numInitSysPress->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numInitSysPress->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 160, 0, 0, 0 });
			   this->numInitSysPress->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numInitSysPress_ValueChanged);
			   // 
			   // cmdInitSysPress
			   // 
			   this->cmdInitSysPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdInitSysPress->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdInitSysPress->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdInitSysPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdInitSysPress->ForeColor = System::Drawing::Color::White;
			   this->cmdInitSysPress->Location = System::Drawing::Point(531, 183);
			   this->cmdInitSysPress->Name = L"cmdInitSysPress";
			   this->cmdInitSysPress->Size = System::Drawing::Size(59, 23);
			   this->cmdInitSysPress->TabIndex = 284;
			   this->cmdInitSysPress->Text = L"Reset";
			   this->cmdInitSysPress->UseVisualStyleBackColor = false;
			   this->cmdInitSysPress->Click += gcnew System::EventHandler(this, &BloodForm::cmdInitSysPress_Click);
			   // 
			   // lblUnitInitSysPress
			   // 
			   this->lblUnitInitSysPress->AutoSize = true;
			   this->lblUnitInitSysPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitInitSysPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitInitSysPress->ForeColor = System::Drawing::Color::White;
			   this->lblUnitInitSysPress->Location = System::Drawing::Point(384, 183);
			   this->lblUnitInitSysPress->Name = L"lblUnitInitSysPress";
			   this->lblUnitInitSysPress->Size = System::Drawing::Size(55, 19);
			   this->lblUnitInitSysPress->TabIndex = 283;
			   this->lblUnitInitSysPress->Text = L"mmHg";
			   // 
			   // lblInitSysPress
			   // 
			   this->lblInitSysPress->AutoSize = true;
			   this->lblInitSysPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblInitSysPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblInitSysPress->ForeColor = System::Drawing::Color::White;
			   this->lblInitSysPress->Location = System::Drawing::Point(11, 184);
			   this->lblInitSysPress->Name = L"lblInitSysPress";
			   this->lblInitSysPress->Size = System::Drawing::Size(158, 19);
			   this->lblInitSysPress->TabIndex = 282;
			   this->lblInitSysPress->Text = L"Initial Systolic Pressure";
			   // 
			   // lblUnitRate4
			   // 
			   this->lblUnitRate4->AutoSize = true;
			   this->lblUnitRate4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRate4->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRate4->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRate4->Location = System::Drawing::Point(463, 214);
			   this->lblUnitRate4->Name = L"lblUnitRate4";
			   this->lblUnitRate4->Size = System::Drawing::Size(12, 13);
			   this->lblUnitRate4->TabIndex = 278;
			   this->lblUnitRate4->Text = L"3";
			   // 
			   // lblUnitRate3
			   // 
			   this->lblUnitRate3->AutoSize = true;
			   this->lblUnitRate3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRate3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRate3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRate3->Location = System::Drawing::Point(425, 216);
			   this->lblUnitRate3->Name = L"lblUnitRate3";
			   this->lblUnitRate3->Size = System::Drawing::Size(45, 19);
			   this->lblUnitRate3->TabIndex = 277;
			   this->lblUnitRate3->Text = L"/ (cm";
			   // 
			   // lblUnitRate5
			   // 
			   this->lblUnitRate5->AutoSize = true;
			   this->lblUnitRate5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRate5->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRate5->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRate5->Location = System::Drawing::Point(476, 216);
			   this->lblUnitRate5->Name = L"lblUnitRate5";
			   this->lblUnitRate5->Size = System::Drawing::Size(31, 19);
			   this->lblUnitRate5->TabIndex = 276;
			   this->lblUnitRate5->Text = L"· s)";
			   // 
			   // lblUnitRate1
			   // 
			   this->lblUnitRate1->AutoSize = true;
			   this->lblUnitRate1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRate1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRate1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRate1->Location = System::Drawing::Point(384, 216);
			   this->lblUnitRate1->Name = L"lblUnitRate1";
			   this->lblUnitRate1->Size = System::Drawing::Size(30, 19);
			   this->lblUnitRate1->TabIndex = 274;
			   this->lblUnitRate1->Text = L"ml ";
			   // 
			   // numRate
			   // 
			   this->numRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numRate->DecimalPlaces = 8;
			   this->numRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numRate->ForeColor = System::Drawing::Color::White;
			   this->numRate->Location = System::Drawing::Point(201, 213);
			   this->numRate->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			   this->numRate->Name = L"numRate";
			   this->numRate->Size = System::Drawing::Size(155, 26);
			   this->numRate->TabIndex = 273;
			   this->numRate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numRate->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 617, 0, 0, 458752 });
			   this->numRate->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numRate_ValueChanged);
			   // 
			   // cmdRate
			   // 
			   this->cmdRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdRate->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdRate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdRate->ForeColor = System::Drawing::Color::White;
			   this->cmdRate->Location = System::Drawing::Point(531, 216);
			   this->cmdRate->Name = L"cmdRate";
			   this->cmdRate->Size = System::Drawing::Size(59, 23);
			   this->cmdRate->TabIndex = 272;
			   this->cmdRate->Text = L"Reset";
			   this->cmdRate->UseVisualStyleBackColor = false;
			   this->cmdRate->Click += gcnew System::EventHandler(this, &BloodForm::cmdRate_Click);
			   // 
			   // numMetabolic
			   // 
			   this->numMetabolic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numMetabolic->DecimalPlaces = 6;
			   this->numMetabolic->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numMetabolic->ForeColor = System::Drawing::Color::White;
			   this->numMetabolic->Location = System::Drawing::Point(201, 149);
			   this->numMetabolic->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numMetabolic->Name = L"numMetabolic";
			   this->numMetabolic->Size = System::Drawing::Size(155, 26);
			   this->numMetabolic->TabIndex = 270;
			   this->numMetabolic->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numMetabolic->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 327680 });
			   this->numMetabolic->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numMetabolic_ValueChanged);
			   // 
			   // cmdMetabolic
			   // 
			   this->cmdMetabolic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdMetabolic->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdMetabolic->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdMetabolic->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdMetabolic->ForeColor = System::Drawing::Color::White;
			   this->cmdMetabolic->Location = System::Drawing::Point(531, 151);
			   this->cmdMetabolic->Name = L"cmdMetabolic";
			   this->cmdMetabolic->Size = System::Drawing::Size(59, 23);
			   this->cmdMetabolic->TabIndex = 269;
			   this->cmdMetabolic->Text = L"Reset";
			   this->cmdMetabolic->UseVisualStyleBackColor = false;
			   this->cmdMetabolic->Click += gcnew System::EventHandler(this, &BloodForm::cmdMetabolic_Click);
			   // 
			   // lblUnitMetabolic
			   // 
			   this->lblUnitMetabolic->AutoSize = true;
			   this->lblUnitMetabolic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitMetabolic->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitMetabolic->ForeColor = System::Drawing::Color::White;
			   this->lblUnitMetabolic->Location = System::Drawing::Point(384, 151);
			   this->lblUnitMetabolic->Name = L"lblUnitMetabolic";
			   this->lblUnitMetabolic->Size = System::Drawing::Size(89, 19);
			   this->lblUnitMetabolic->TabIndex = 268;
			   this->lblUnitMetabolic->Text = L"kcal/(kg · d)";
			   // 
			   // numBRadius
			   // 
			   this->numBRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numBRadius->DecimalPlaces = 2;
			   this->numBRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numBRadius->ForeColor = System::Drawing::Color::White;
			   this->numBRadius->Location = System::Drawing::Point(201, 116);
			   this->numBRadius->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numBRadius->Name = L"numBRadius";
			   this->numBRadius->Size = System::Drawing::Size(155, 26);
			   this->numBRadius->TabIndex = 267;
			   this->numBRadius->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numBRadius->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 65536 });
			   this->numBRadius->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numBRadius_ValueChanged);
			   // 
			   // cmdBRadius
			   // 
			   this->cmdBRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdBRadius->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdBRadius->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdBRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdBRadius->ForeColor = System::Drawing::Color::White;
			   this->cmdBRadius->Location = System::Drawing::Point(531, 120);
			   this->cmdBRadius->Name = L"cmdBRadius";
			   this->cmdBRadius->Size = System::Drawing::Size(59, 23);
			   this->cmdBRadius->TabIndex = 266;
			   this->cmdBRadius->Text = L"Reset";
			   this->cmdBRadius->UseVisualStyleBackColor = false;
			   this->cmdBRadius->Click += gcnew System::EventHandler(this, &BloodForm::cmdBRadius_Click);
			   // 
			   // lblUnitBRadius
			   // 
			   this->lblUnitBRadius->AutoSize = true;
			   this->lblUnitBRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitBRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitBRadius->ForeColor = System::Drawing::Color::White;
			   this->lblUnitBRadius->Location = System::Drawing::Point(384, 120);
			   this->lblUnitBRadius->Name = L"lblUnitBRadius";
			   this->lblUnitBRadius->Size = System::Drawing::Size(31, 19);
			   this->lblUnitBRadius->TabIndex = 265;
			   this->lblUnitBRadius->Text = L"μm";
			   // 
			   // numTRadius
			   // 
			   this->numTRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numTRadius->DecimalPlaces = 2;
			   this->numTRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numTRadius->ForeColor = System::Drawing::Color::White;
			   this->numTRadius->Location = System::Drawing::Point(201, 84);
			   this->numTRadius->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numTRadius->Name = L"numTRadius";
			   this->numTRadius->Size = System::Drawing::Size(155, 26);
			   this->numTRadius->TabIndex = 264;
			   this->numTRadius->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numTRadius->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			   // 
			   // cmdTRadius
			   // 
			   this->cmdTRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdTRadius->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdTRadius->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdTRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdTRadius->ForeColor = System::Drawing::Color::White;
			   this->cmdTRadius->Location = System::Drawing::Point(531, 88);
			   this->cmdTRadius->Name = L"cmdTRadius";
			   this->cmdTRadius->Size = System::Drawing::Size(59, 23);
			   this->cmdTRadius->TabIndex = 263;
			   this->cmdTRadius->Text = L"Reset";
			   this->cmdTRadius->UseVisualStyleBackColor = false;
			   this->cmdTRadius->Click += gcnew System::EventHandler(this, &BloodForm::cmdTRadius_Click);
			   // 
			   // lblNumTRadius
			   // 
			   this->lblNumTRadius->AutoSize = true;
			   this->lblNumTRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumTRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumTRadius->ForeColor = System::Drawing::Color::White;
			   this->lblNumTRadius->Location = System::Drawing::Point(384, 88);
			   this->lblNumTRadius->Name = L"lblNumTRadius";
			   this->lblNumTRadius->Size = System::Drawing::Size(31, 19);
			   this->lblNumTRadius->TabIndex = 262;
			   this->lblNumTRadius->Text = L"μm";
			   // 
			   // numRBC
			   // 
			   this->numRBC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numRBC->DecimalPlaces = 2;
			   this->numRBC->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numRBC->ForeColor = System::Drawing::Color::White;
			   this->numRBC->Location = System::Drawing::Point(201, 53);
			   this->numRBC->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numRBC->Name = L"numRBC";
			   this->numRBC->Size = System::Drawing::Size(155, 26);
			   this->numRBC->TabIndex = 261;
			   this->numRBC->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numRBC->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 65536 });
			   this->numRBC->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numRBC_ValueChanged);
			   // 
			   // cmdRBC
			   // 
			   this->cmdRBC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdRBC->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdRBC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdRBC->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdRBC->ForeColor = System::Drawing::Color::White;
			   this->cmdRBC->Location = System::Drawing::Point(531, 56);
			   this->cmdRBC->Name = L"cmdRBC";
			   this->cmdRBC->Size = System::Drawing::Size(59, 23);
			   this->cmdRBC->TabIndex = 260;
			   this->cmdRBC->Text = L"Reset";
			   this->cmdRBC->UseVisualStyleBackColor = false;
			   this->cmdRBC->Click += gcnew System::EventHandler(this, &BloodForm::cmdRBC_Click);
			   // 
			   // lblUnitRBC
			   // 
			   this->lblUnitRBC->AutoSize = true;
			   this->lblUnitRBC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRBC->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRBC->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRBC->Location = System::Drawing::Point(384, 56);
			   this->lblUnitRBC->Name = L"lblUnitRBC";
			   this->lblUnitRBC->Size = System::Drawing::Size(49, 19);
			   this->lblUnitRBC->TabIndex = 259;
			   this->lblUnitRBC->Text = L"mm/s";
			   // 
			   // numSaturation
			   // 
			   this->numSaturation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numSaturation->DecimalPlaces = 2;
			   this->numSaturation->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numSaturation->ForeColor = System::Drawing::Color::White;
			   this->numSaturation->Location = System::Drawing::Point(201, 21);
			   this->numSaturation->Name = L"numSaturation";
			   this->numSaturation->Size = System::Drawing::Size(155, 26);
			   this->numSaturation->TabIndex = 258;
			   this->numSaturation->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numSaturation->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 88, 0, 0, 0 });
			   this->numSaturation->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numSaturation_ValueChanged);
			   // 
			   // cmdSaturation
			   // 
			   this->cmdSaturation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdSaturation->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdSaturation->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdSaturation->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdSaturation->ForeColor = System::Drawing::Color::White;
			   this->cmdSaturation->Location = System::Drawing::Point(531, 23);
			   this->cmdSaturation->Name = L"cmdSaturation";
			   this->cmdSaturation->Size = System::Drawing::Size(59, 23);
			   this->cmdSaturation->TabIndex = 257;
			   this->cmdSaturation->Text = L"Reset";
			   this->cmdSaturation->UseVisualStyleBackColor = false;
			   this->cmdSaturation->Click += gcnew System::EventHandler(this, &BloodForm::cmdSaturation_Click);
			   // 
			   // lblUnitSaturation
			   // 
			   this->lblUnitSaturation->AutoSize = true;
			   this->lblUnitSaturation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitSaturation->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitSaturation->ForeColor = System::Drawing::Color::White;
			   this->lblUnitSaturation->Location = System::Drawing::Point(384, 23);
			   this->lblUnitSaturation->Name = L"lblUnitSaturation";
			   this->lblUnitSaturation->Size = System::Drawing::Size(19, 19);
			   this->lblUnitSaturation->TabIndex = 256;
			   this->lblUnitSaturation->Text = L"%";
			   // 
			   // numConcentration
			   // 
			   this->numConcentration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numConcentration->DecimalPlaces = 2;
			   this->numConcentration->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numConcentration->ForeColor = System::Drawing::Color::White;
			   this->numConcentration->Location = System::Drawing::Point(207, -40);
			   this->numConcentration->Name = L"numConcentration";
			   this->numConcentration->Size = System::Drawing::Size(134, 26);
			   this->numConcentration->TabIndex = 255;
			   this->numConcentration->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numConcentration->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 138, 0, 0, 65536 });
			   // 
			   // cmdConcentration
			   // 
			   this->cmdConcentration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdConcentration->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdConcentration->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdConcentration->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdConcentration->ForeColor = System::Drawing::Color::White;
			   this->cmdConcentration->Location = System::Drawing::Point(524, -37);
			   this->cmdConcentration->Name = L"cmdConcentration";
			   this->cmdConcentration->Size = System::Drawing::Size(59, 23);
			   this->cmdConcentration->TabIndex = 254;
			   this->cmdConcentration->Text = L"Reset";
			   this->cmdConcentration->UseVisualStyleBackColor = false;
			   this->cmdConcentration->Click += gcnew System::EventHandler(this, &BloodForm::cmdConcentration_Click);
			   // 
			   // lblUnitConcentration
			   // 
			   this->lblUnitConcentration->AutoSize = true;
			   this->lblUnitConcentration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitConcentration->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitConcentration->ForeColor = System::Drawing::Color::White;
			   this->lblUnitConcentration->Location = System::Drawing::Point(351, -37);
			   this->lblUnitConcentration->Name = L"lblUnitConcentration";
			   this->lblUnitConcentration->Size = System::Drawing::Size(64, 19);
			   this->lblUnitConcentration->TabIndex = 253;
			   this->lblUnitConcentration->Text = L"g/100ml";
			   // 
			   // numBinding
			   // 
			   this->numBinding->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numBinding->DecimalPlaces = 2;
			   this->numBinding->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numBinding->ForeColor = System::Drawing::Color::White;
			   this->numBinding->Location = System::Drawing::Point(207, -72);
			   this->numBinding->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			   this->numBinding->Name = L"numBinding";
			   this->numBinding->Size = System::Drawing::Size(134, 26);
			   this->numBinding->TabIndex = 252;
			   this->numBinding->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numBinding->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 134, 0, 0, 131072 });
			   // 
			   // cmdBinding
			   // 
			   this->cmdBinding->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdBinding->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdBinding->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdBinding->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdBinding->ForeColor = System::Drawing::Color::White;
			   this->cmdBinding->Location = System::Drawing::Point(524, -69);
			   this->cmdBinding->Name = L"cmdBinding";
			   this->cmdBinding->Size = System::Drawing::Size(59, 23);
			   this->cmdBinding->TabIndex = 251;
			   this->cmdBinding->Text = L"Reset";
			   this->cmdBinding->UseVisualStyleBackColor = false;
			   this->cmdBinding->Click += gcnew System::EventHandler(this, &BloodForm::cmdBinding_Click);
			   // 
			   // lblUnitBinding
			   // 
			   this->lblUnitBinding->AutoSize = true;
			   this->lblUnitBinding->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitBinding->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitBinding->ForeColor = System::Drawing::Color::White;
			   this->lblUnitBinding->Location = System::Drawing::Point(351, -69);
			   this->lblUnitBinding->Name = L"lblUnitBinding";
			   this->lblUnitBinding->Size = System::Drawing::Size(26, 19);
			   this->lblUnitBinding->TabIndex = 250;
			   this->lblUnitBinding->Text = L"ml";
			   // 
			   // numInitDiaPress
			   // 
			   this->numInitDiaPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numInitDiaPress->DecimalPlaces = 2;
			   this->numInitDiaPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numInitDiaPress->ForeColor = System::Drawing::Color::White;
			   this->numInitDiaPress->Location = System::Drawing::Point(208, -136);
			   this->numInitDiaPress->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			   this->numInitDiaPress->Name = L"numInitDiaPress";
			   this->numInitDiaPress->Size = System::Drawing::Size(134, 26);
			   this->numInitDiaPress->TabIndex = 249;
			   this->numInitDiaPress->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numInitDiaPress->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			   // 
			   // cmdInitDiaPress
			   // 
			   this->cmdInitDiaPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdInitDiaPress->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdInitDiaPress->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdInitDiaPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdInitDiaPress->ForeColor = System::Drawing::Color::White;
			   this->cmdInitDiaPress->Location = System::Drawing::Point(525, -133);
			   this->cmdInitDiaPress->Name = L"cmdInitDiaPress";
			   this->cmdInitDiaPress->Size = System::Drawing::Size(59, 23);
			   this->cmdInitDiaPress->TabIndex = 248;
			   this->cmdInitDiaPress->Text = L"Reset";
			   this->cmdInitDiaPress->UseVisualStyleBackColor = false;
			   this->cmdInitDiaPress->Click += gcnew System::EventHandler(this, &BloodForm::cmdInitDiaPress_Click);
			   // 
			   // lblUnitInitDiaPress
			   // 
			   this->lblUnitInitDiaPress->AutoSize = true;
			   this->lblUnitInitDiaPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitInitDiaPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitInitDiaPress->ForeColor = System::Drawing::Color::White;
			   this->lblUnitInitDiaPress->Location = System::Drawing::Point(352, -133);
			   this->lblUnitInitDiaPress->Name = L"lblUnitInitDiaPress";
			   this->lblUnitInitDiaPress->Size = System::Drawing::Size(55, 19);
			   this->lblUnitInitDiaPress->TabIndex = 247;
			   this->lblUnitInitDiaPress->Text = L"mmHg";
			   // 
			   // lblUnitDensity2
			   // 
			   this->lblUnitDensity2->AutoSize = true;
			   this->lblUnitDensity2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitDensity2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitDensity2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitDensity2->Location = System::Drawing::Point(391, -168);
			   this->lblUnitDensity2->Name = L"lblUnitDensity2";
			   this->lblUnitDensity2->Size = System::Drawing::Size(12, 13);
			   this->lblUnitDensity2->TabIndex = 246;
			   this->lblUnitDensity2->Text = L"3";
			   // 
			   // lblUnitDensity1
			   // 
			   this->lblUnitDensity1->AutoSize = true;
			   this->lblUnitDensity1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitDensity1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitDensity1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitDensity1->Location = System::Drawing::Point(353, -167);
			   this->lblUnitDensity1->Name = L"lblUnitDensity1";
			   this->lblUnitDensity1->Size = System::Drawing::Size(43, 19);
			   this->lblUnitDensity1->TabIndex = 245;
			   this->lblUnitDensity1->Text = L"g/cm";
			   // 
			   // numDensity
			   // 
			   this->numDensity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numDensity->DecimalPlaces = 2;
			   this->numDensity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numDensity->ForeColor = System::Drawing::Color::White;
			   this->numDensity->Location = System::Drawing::Point(208, -168);
			   this->numDensity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			   this->numDensity->Name = L"numDensity";
			   this->numDensity->Size = System::Drawing::Size(134, 26);
			   this->numDensity->TabIndex = 244;
			   this->numDensity->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numDensity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 106, 0, 0, 131072 });
			   // 
			   // cmdDensity
			   // 
			   this->cmdDensity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdDensity->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdDensity->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdDensity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdDensity->ForeColor = System::Drawing::Color::White;
			   this->cmdDensity->Location = System::Drawing::Point(525, -165);
			   this->cmdDensity->Name = L"cmdDensity";
			   this->cmdDensity->Size = System::Drawing::Size(59, 23);
			   this->cmdDensity->TabIndex = 243;
			   this->cmdDensity->Text = L"Reset";
			   this->cmdDensity->UseVisualStyleBackColor = false;
			   this->cmdDensity->Click += gcnew System::EventHandler(this, &BloodForm::cmdDensity_Click);
			   // 
			   // numThick
			   // 
			   this->numThick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numThick->DecimalPlaces = 4;
			   this->numThick->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numThick->ForeColor = System::Drawing::Color::White;
			   this->numThick->Location = System::Drawing::Point(208, -200);
			   this->numThick->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numThick->Name = L"numThick";
			   this->numThick->Size = System::Drawing::Size(134, 26);
			   this->numThick->TabIndex = 241;
			   this->numThick->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numThick->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 201, 0, 0, 196608 });
			   // 
			   // cmdThick
			   // 
			   this->cmdThick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdThick->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdThick->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdThick->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdThick->ForeColor = System::Drawing::Color::White;
			   this->cmdThick->Location = System::Drawing::Point(525, -197);
			   this->cmdThick->Name = L"cmdThick";
			   this->cmdThick->Size = System::Drawing::Size(59, 23);
			   this->cmdThick->TabIndex = 240;
			   this->cmdThick->Text = L"Reset";
			   this->cmdThick->UseVisualStyleBackColor = false;
			   this->cmdThick->Click += gcnew System::EventHandler(this, &BloodForm::cmdThick_Click);
			   // 
			   // lblUnitThick
			   // 
			   this->lblUnitThick->AutoSize = true;
			   this->lblUnitThick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitThick->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitThick->ForeColor = System::Drawing::Color::White;
			   this->lblUnitThick->Location = System::Drawing::Point(352, -199);
			   this->lblUnitThick->Name = L"lblUnitThick";
			   this->lblUnitThick->Size = System::Drawing::Size(30, 19);
			   this->lblUnitThick->TabIndex = 239;
			   this->lblUnitThick->Text = L"cm";
			   // 
			   // numLength
			   // 
			   this->numLength->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numLength->DecimalPlaces = 2;
			   this->numLength->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numLength->ForeColor = System::Drawing::Color::White;
			   this->numLength->Location = System::Drawing::Point(208, -232);
			   this->numLength->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numLength->Name = L"numLength";
			   this->numLength->Size = System::Drawing::Size(134, 26);
			   this->numLength->TabIndex = 238;
			   this->numLength->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			   // 
			   // cmdLength
			   // 
			   this->cmdLength->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdLength->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdLength->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdLength->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdLength->ForeColor = System::Drawing::Color::White;
			   this->cmdLength->Location = System::Drawing::Point(525, -229);
			   this->cmdLength->Name = L"cmdLength";
			   this->cmdLength->Size = System::Drawing::Size(59, 23);
			   this->cmdLength->TabIndex = 237;
			   this->cmdLength->Text = L"Reset";
			   this->cmdLength->UseVisualStyleBackColor = false;
			   this->cmdLength->Click += gcnew System::EventHandler(this, &BloodForm::cmdLength_Click);
			   // 
			   // lblNumLength
			   // 
			   this->lblNumLength->AutoSize = true;
			   this->lblNumLength->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumLength->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumLength->ForeColor = System::Drawing::Color::White;
			   this->lblNumLength->Location = System::Drawing::Point(352, -229);
			   this->lblNumLength->Name = L"lblNumLength";
			   this->lblNumLength->Size = System::Drawing::Size(30, 19);
			   this->lblNumLength->TabIndex = 236;
			   this->lblNumLength->Text = L"cm";
			   // 
			   // numNumber
			   // 
			   this->numNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numNumber->DecimalPlaces = 2;
			   this->numNumber->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numNumber->ForeColor = System::Drawing::Color::White;
			   this->numNumber->Location = System::Drawing::Point(208, -264);
			   this->numNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 600, 0, 0, 0 });
			   this->numNumber->Name = L"numNumber";
			   this->numNumber->Size = System::Drawing::Size(134, 26);
			   this->numNumber->TabIndex = 235;
			   this->numNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numNumber->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   // 
			   // cmdNumber
			   // 
			   this->cmdNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdNumber->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdNumber->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdNumber->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdNumber->ForeColor = System::Drawing::Color::White;
			   this->cmdNumber->Location = System::Drawing::Point(525, -261);
			   this->cmdNumber->Name = L"cmdNumber";
			   this->cmdNumber->Size = System::Drawing::Size(59, 23);
			   this->cmdNumber->TabIndex = 234;
			   this->cmdNumber->Text = L"Reset";
			   this->cmdNumber->UseVisualStyleBackColor = false;
			   this->cmdNumber->Click += gcnew System::EventHandler(this, &BloodForm::cmdNumber_Click);
			   // 
			   // numStartVel
			   // 
			   this->numStartVel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numStartVel->DecimalPlaces = 2;
			   this->numStartVel->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numStartVel->ForeColor = System::Drawing::Color::White;
			   this->numStartVel->Location = System::Drawing::Point(208, -296);
			   this->numStartVel->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			   this->numStartVel->Name = L"numStartVel";
			   this->numStartVel->Size = System::Drawing::Size(134, 26);
			   this->numStartVel->TabIndex = 232;
			   this->numStartVel->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numStartVel->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4244, 0, 0, 65536 });
			   // 
			   // cmdStartVel
			   // 
			   this->cmdStartVel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdStartVel->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdStartVel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdStartVel->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdStartVel->ForeColor = System::Drawing::Color::White;
			   this->cmdStartVel->Location = System::Drawing::Point(525, -293);
			   this->cmdStartVel->Name = L"cmdStartVel";
			   this->cmdStartVel->Size = System::Drawing::Size(59, 23);
			   this->cmdStartVel->TabIndex = 231;
			   this->cmdStartVel->Text = L"Reset";
			   this->cmdStartVel->UseVisualStyleBackColor = false;
			   this->cmdStartVel->Click += gcnew System::EventHandler(this, &BloodForm::cmdStartVel_Click);
			   // 
			   // lblNumStartVel
			   // 
			   this->lblNumStartVel->AutoSize = true;
			   this->lblNumStartVel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumStartVel->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumStartVel->ForeColor = System::Drawing::Color::White;
			   this->lblNumStartVel->Location = System::Drawing::Point(352, -293);
			   this->lblNumStartVel->Name = L"lblNumStartVel";
			   this->lblNumStartVel->Size = System::Drawing::Size(49, 19);
			   this->lblNumStartVel->TabIndex = 230;
			   this->lblNumStartVel->Text = L"mm/s";
			   // 
			   // picVis
			   // 
			   this->picVis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picVis.Image")));
			   this->picVis->Location = System::Drawing::Point(12, 100);
			   this->picVis->Name = L"picVis";
			   this->picVis->Size = System::Drawing::Size(113, 352);
			   this->picVis->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->picVis->TabIndex = 90;
			   this->picVis->TabStop = false;
			   // 
			   // pnTissue
			   // 
			   this->pnTissue->AutoScroll = true;
			   this->pnTissue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnTissue->Controls->Add(this->lblUnitConsumption);
			   this->pnTissue->Controls->Add(this->lblNumConsumption);
			   this->pnTissue->Controls->Add(this->lblConsumption);
			   this->pnTissue->Controls->Add(this->lblUnitTPartial);
			   this->pnTissue->Controls->Add(this->lblNumTPartial);
			   this->pnTissue->Controls->Add(this->lblTPartial);
			   this->pnTissue->Location = System::Drawing::Point(777, 170);
			   this->pnTissue->Name = L"pnTissue";
			   this->pnTissue->Size = System::Drawing::Size(347, 161);
			   this->pnTissue->TabIndex = 101;
			   // 
			   // lblUnitConsumption
			   // 
			   this->lblUnitConsumption->AutoSize = true;
			   this->lblUnitConsumption->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitConsumption->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitConsumption->ForeColor = System::Drawing::Color::White;
			   this->lblUnitConsumption->Location = System::Drawing::Point(239, 37);
			   this->lblUnitConsumption->Name = L"lblUnitConsumption";
			   this->lblUnitConsumption->Size = System::Drawing::Size(55, 19);
			   this->lblUnitConsumption->TabIndex = 171;
			   this->lblUnitConsumption->Text = L"mmHg";
			   // 
			   // lblNumConsumption
			   // 
			   this->lblNumConsumption->AutoSize = true;
			   this->lblNumConsumption->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumConsumption->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumConsumption->ForeColor = System::Drawing::Color::White;
			   this->lblNumConsumption->Location = System::Drawing::Point(162, 37);
			   this->lblNumConsumption->Name = L"lblNumConsumption";
			   this->lblNumConsumption->Size = System::Drawing::Size(62, 19);
			   this->lblNumConsumption->TabIndex = 170;
			   this->lblNumConsumption->Text = L"000.00";
			   // 
			   // lblConsumption
			   // 
			   this->lblConsumption->AutoSize = true;
			   this->lblConsumption->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblConsumption->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblConsumption->ForeColor = System::Drawing::Color::White;
			   this->lblConsumption->Location = System::Drawing::Point(15, 37);
			   this->lblConsumption->Name = L"lblConsumption";
			   this->lblConsumption->Size = System::Drawing::Size(117, 19);
			   this->lblConsumption->TabIndex = 169;
			   this->lblConsumption->Text = L"O2 consumption";
			   // 
			   // lblUnitTPartial
			   // 
			   this->lblUnitTPartial->AutoSize = true;
			   this->lblUnitTPartial->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitTPartial->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitTPartial->ForeColor = System::Drawing::Color::White;
			   this->lblUnitTPartial->Location = System::Drawing::Point(239, 11);
			   this->lblUnitTPartial->Name = L"lblUnitTPartial";
			   this->lblUnitTPartial->Size = System::Drawing::Size(55, 19);
			   this->lblUnitTPartial->TabIndex = 168;
			   this->lblUnitTPartial->Text = L"mmHg";
			   // 
			   // lblNumTPartial
			   // 
			   this->lblNumTPartial->AutoSize = true;
			   this->lblNumTPartial->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumTPartial->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumTPartial->ForeColor = System::Drawing::Color::White;
			   this->lblNumTPartial->Location = System::Drawing::Point(161, 11);
			   this->lblNumTPartial->Name = L"lblNumTPartial";
			   this->lblNumTPartial->Size = System::Drawing::Size(62, 19);
			   this->lblNumTPartial->TabIndex = 167;
			   this->lblNumTPartial->Text = L"000.00";
			   // 
			   // lblTPartial
			   // 
			   this->lblTPartial->AutoSize = true;
			   this->lblTPartial->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblTPartial->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblTPartial->ForeColor = System::Drawing::Color::White;
			   this->lblTPartial->Location = System::Drawing::Point(15, 11);
			   this->lblTPartial->Name = L"lblTPartial";
			   this->lblTPartial->Size = System::Drawing::Size(116, 19);
			   this->lblTPartial->TabIndex = 166;
			   this->lblTPartial->Text = L"Partial Pressure";
			   // 
			   // pnBloodTop
			   // 
			   this->pnBloodTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnBloodTop->Controls->Add(this->lblBloodVessel);
			   this->pnBloodTop->Location = System::Drawing::Point(157, 139);
			   this->pnBloodTop->Name = L"pnBloodTop";
			   this->pnBloodTop->Size = System::Drawing::Size(607, 35);
			   this->pnBloodTop->TabIndex = 166;
			   // 
			   // lblBloodVessel
			   // 
			   this->lblBloodVessel->AutoSize = true;
			   this->lblBloodVessel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblBloodVessel->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblBloodVessel->ForeColor = System::Drawing::Color::White;
			   this->lblBloodVessel->Location = System::Drawing::Point(11, 7);
			   this->lblBloodVessel->Name = L"lblBloodVessel";
			   this->lblBloodVessel->Size = System::Drawing::Size(112, 19);
			   this->lblBloodVessel->TabIndex = 166;
			   this->lblBloodVessel->Text = L"BLOOD VESSEL";
			   // 
			   // pnTissueTop
			   // 
			   this->pnTissueTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnTissueTop->Controls->Add(this->lblTissue);
			   this->pnTissueTop->Location = System::Drawing::Point(777, 139);
			   this->pnTissueTop->Name = L"pnTissueTop";
			   this->pnTissueTop->Size = System::Drawing::Size(347, 35);
			   this->pnTissueTop->TabIndex = 167;
			   // 
			   // lblTissue
			   // 
			   this->lblTissue->AutoSize = true;
			   this->lblTissue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblTissue->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblTissue->ForeColor = System::Drawing::Color::White;
			   this->lblTissue->Location = System::Drawing::Point(16, 7);
			   this->lblTissue->Name = L"lblTissue";
			   this->lblTissue->Size = System::Drawing::Size(53, 19);
			   this->lblTissue->TabIndex = 166;
			   this->lblTissue->Text = L"TISSUE";
			   // 
			   // BloodForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->ClientSize = System::Drawing::Size(1161, 671);
			   this->Controls->Add(this->pnTissue);
			   this->Controls->Add(this->pnParameters);
			   this->Controls->Add(this->pnPreset);
			   this->Controls->Add(this->picVis);
			   this->Controls->Add(this->cmdBack);
			   this->Controls->Add(this->pnCVS);
			   this->Controls->Add(this->pnOxygen);
			   this->Controls->Add(this->pnBloodVessel);
			   this->Controls->Add(this->pnBloodTop);
			   this->Controls->Add(this->pnTissueTop);
			   this->Name = L"BloodForm";
			   this->Text = L"BloodForm";
			   this->pnPreset->ResumeLayout(false);
			   this->pnPreset->PerformLayout();
			   this->pnCVS->ResumeLayout(false);
			   this->pnCVS->PerformLayout();
			   this->pnOxygen->ResumeLayout(false);
			   this->pnOxygen->PerformLayout();
			   this->pnBloodVessel->ResumeLayout(false);
			   this->pnBloodVessel->PerformLayout();
			   this->pnParameters->ResumeLayout(false);
			   this->pnParameters->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numInitSysPress))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRate))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMetabolic))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBRadius))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTRadius))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRBC))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSaturation))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numConcentration))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBinding))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numInitDiaPress))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDensity))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numThick))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLength))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNumber))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStartVel))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picVis))->EndInit();
			   this->pnTissue->ResumeLayout(false);
			   this->pnTissue->PerformLayout();
			   this->pnBloodTop->ResumeLayout(false);
			   this->pnBloodTop->PerformLayout();
			   this->pnTissueTop->ResumeLayout(false);
			   this->pnTissueTop->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	public:
		Decimal GetStartVelocity();
		Decimal GetNumberOfVessels();
		Decimal GetVesselLength();
		Decimal GetVesselThickness();
		Decimal GetBloodDensity();
		Decimal GetInitialSystolicPressure();
		Decimal GetInitialDiastolicPressure();
		Decimal GetOxygenBindingCapacity();
		Decimal GetHemoglobinConcentration();
		Decimal GetOxygenHemoglobinSaturation();
		Decimal GetRBCVelocity();
		Decimal GetTissueRadius();
		Decimal GetVesselRadius();
		Decimal GetMetabolicRate();
		Decimal GetMaxConsumption();
		System::Void UpdateOxygen(double oxygen);
		System::Void UpdateDiastolicPressure(double new_pressure);
		System::Void UpdateSystolicPressure(double new_pressure);
		System::Void UpdatePartialPressureVessel(double new_pressure);
		System::Void UpdateVelocity(double new_velocity);
		System::Void UpdateFlowRate(double new_flow_rate);
		System::Void UpdateResistance(double new_resistance);
		System::Void UpdateInertance(double new_inertance);
		System::Void UpdateCompliance(double new_compliance);
		System::Void UpdatePartialPressureTissue(double new_pressure);
		System::Void UpdateConsumptionRate(double new_consumption);

	private: System::Void cmdBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		//parent_form->Show();
		parent_form->BringToFront();
	}

	private: System::Void cmdStartVel_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 424.4;
		numStartVel->Value = (Decimal)tmp_value;
	}
	private: System::Void cmdNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		numNumber->Value = 1;
	}
	private: System::Void cmdLength_Click(System::Object^ sender, System::EventArgs^ e) {
		numLength->Value = 4;
	}
	private: System::Void cmdThick_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 0.201;
		numThick->Value = (Decimal)tmp_value;
	}
	private: System::Void cmdDensity_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 1.06;
		numDensity->Value = (Decimal)tmp_value;
	}
	private: System::Void cmdBinding_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 1.34;
		numBinding->Value = (Decimal)tmp_value;
	}
	private: System::Void cmdConcentration_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 13.8;
		numConcentration->Value = (Decimal)tmp_value;
	}
	private: System::Void cmdSaturation_Click(System::Object^ sender, System::EventArgs^ e) {
		numSaturation->Value = 88;
	}
	private: System::Void cmdRBC_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 2.5;
		numRBC->Value = (Decimal)tmp_value;
	}
	private: System::Void cmdTRadius_Click(System::Object^ sender, System::EventArgs^ e) {
		numTRadius->Value = 25;
	}
	private: System::Void cmdBRadius_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 2.5;
		numBRadius->Value = (Decimal)tmp_value;
	}
	private: System::Void cmdMetabolic_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 0.00004;
		numMetabolic->Value = (Decimal)tmp_value;
	}
	private: System::Void cmdInitSysPress_Click(System::Object^ sender, System::EventArgs^ e) {
		numInitSysPress->Value = 160;
	}
	private: System::Void cmdInitDiaPress_Click(System::Object^ sender, System::EventArgs^ e) {
		numInitDiaPress->Value = 100;
	}
	private: System::Void cmdRate_Click(System::Object^ sender, System::EventArgs^ e) {
		double tmp_value = 0.0000617;
		numRate->Value = (Decimal)tmp_value;
	}
private: System::Void numSaturation_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_parent_ptr->blood_vessel->HemoglobinOxygenSaturation((double)numSaturation->Value);
}
private: System::Void numRBC_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_parent_ptr->blood_vessel->RBCVelocity((double)numRBC->Value);
}
private: System::Void numTRadius_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_parent_ptr->blood_vessel->TissueRadius((double)numTRadius->Value);
}
private: System::Void numBRadius_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_parent_ptr->blood_vessel->VesselRadius((double)numBRadius->Value);
}
private: System::Void numMetabolic_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_parent_ptr->blood_vessel->MetabolicRate((double)numMetabolic->Value);
}
private: System::Void numInitSysPress_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_parent_ptr->blood_vessel->InitialSystolicPressure((double)numInitSysPress->Value);
}
private: System::Void numRate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_parent_ptr->blood_vessel->MaxConsumption((double)numRate->Value);
}
};
}
