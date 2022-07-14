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
	private: System::Windows::Forms::Label^ lblCVS;
	private: System::Windows::Forms::Label^ lblParameters;
	private: System::Windows::Forms::Label^ lblOxygen;
	private: System::Windows::Forms::Label^ lblCompliance;
	private: System::Windows::Forms::Label^ lblElastance;
	private: System::Windows::Forms::Label^ lblIner;
	private: System::Windows::Forms::Label^ lblResis;
	private: System::Windows::Forms::Label^ lblRBC;
	private: System::Windows::Forms::Label^ lblSaturation;
	private: System::Windows::Forms::Label^ lblRadius;
	private: System::Windows::Forms::Label^ lblBunsen;
	private: System::Windows::Forms::Label^ lblMetabolic;
	private: System::Windows::Forms::Label^ lblLength;
	private: System::Windows::Forms::Label^ lblThickness;
	private: System::Windows::Forms::Label^ lblYoung;
	private: System::Windows::Forms::Label^ lblViscosity;
	private: System::Windows::Forms::Label^ lblHemoglobin;
	private: System::Windows::Forms::Label^ lblRate;
	private: System::Windows::Forms::Label^ lblFlowRate;
	private: System::Windows::Forms::Label^ lblNumber;
	private: System::Windows::Forms::Label^ lblStartVel;
	private: System::Windows::Forms::Label^ lblVelocity;
	private: System::Windows::Forms::Label^ lblBPartial;
	private: System::Windows::Forms::Label^ lblBinding;
	private: System::Windows::Forms::Label^ lblDiaPressure;
	private: System::Windows::Forms::Label^ lblConsumption;
	private: System::Windows::Forms::Label^ lblTPartial;
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
	private: System::Windows::Forms::Label^ lblNumRadius;
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
	private: System::Windows::Forms::Label^ lblUnitResis;
	private: System::Windows::Forms::Label^ lblUnitSysPressure;
	private: System::Windows::Forms::Label^ lblUnitMetabolic;
	private: System::Windows::Forms::Label^ lblUnitConsumption2;
	private: System::Windows::Forms::Label^ lblUnitConsumption3;
	private: System::Windows::Forms::Label^ lblUnitConsumption4;
	private: System::Windows::Forms::Label^ lblUnitConsumption1;
	private: System::Windows::Forms::Label^ lblUnitThickness;
	private: System::Windows::Forms::Label^ lblUnitLength;
	private: System::Windows::Forms::Label^ lblUnitBunsen;
	private: System::Windows::Forms::Label^ lblUnitSaturation;
	private: System::Windows::Forms::Label^ lblUnitConsumption5;
	private: System::Windows::Forms::Label^ lblUnitViscosity;
	private: System::Windows::Forms::Label^ lblUnitYoung;
	private: System::Windows::Forms::Label^ lblUnitHemoglobin;
	private: System::Windows::Forms::Label^ lblUnitBind;
	private: System::Windows::Forms::NumericUpDown^ numNumber;
	private: System::Windows::Forms::NumericUpDown^ numMetabolic;
	private: System::Windows::Forms::NumericUpDown^ numBunsen;
	private: System::Windows::Forms::NumericUpDown^ numRadius;
	private: System::Windows::Forms::NumericUpDown^ numSaturation;
	private: System::Windows::Forms::NumericUpDown^ numRBC;
	private: System::Windows::Forms::NumericUpDown^ numRate;
	private: System::Windows::Forms::NumericUpDown^ numLength;
	private: System::Windows::Forms::NumericUpDown^ numThickness;
	private: System::Windows::Forms::NumericUpDown^ numHemoglobin;
	private: System::Windows::Forms::NumericUpDown^ numViscosity;
	private: System::Windows::Forms::NumericUpDown^ numYoung;
	private: System::Windows::Forms::NumericUpDown^ numBind;
	private: System::Windows::Forms::Button^ cmdBack;
	private: System::Windows::Forms::Button^ cmdBunsen;
	private: System::Windows::Forms::Button^ cmdMetabolic;
	private: System::Windows::Forms::Button^ cmdRate;
	private: System::Windows::Forms::Button^ cmdRadius;
	private: System::Windows::Forms::Button^ cmdRBC;
	private: System::Windows::Forms::Button^ cmdSaturation;
	private: System::Windows::Forms::Button^ cmdThickness;
	private: System::Windows::Forms::Button^ cmdLength;
	private: System::Windows::Forms::Button^ cmdHemoglobin;
	private: System::Windows::Forms::Button^ cmdYoung;
	private: System::Windows::Forms::Button^ cmdViscosity;
	private: System::Windows::Forms::Button^ cmdBind;
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
			   this->lblUnitResis = (gcnew System::Windows::Forms::Label());
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
			   this->lblRadius = (gcnew System::Windows::Forms::Label());
			   this->lblBunsen = (gcnew System::Windows::Forms::Label());
			   this->lblMetabolic = (gcnew System::Windows::Forms::Label());
			   this->lblRate = (gcnew System::Windows::Forms::Label());
			   this->lblNumber = (gcnew System::Windows::Forms::Label());
			   this->lblStartVel = (gcnew System::Windows::Forms::Label());
			   this->pnParameters = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitBind = (gcnew System::Windows::Forms::Label());
			   this->numBind = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdBind = (gcnew System::Windows::Forms::Button());
			   this->lblBinding = (gcnew System::Windows::Forms::Label());
			   this->lblUnitHemoglobin = (gcnew System::Windows::Forms::Label());
			   this->numHemoglobin = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdHemoglobin = (gcnew System::Windows::Forms::Button());
			   this->lblHemoglobin = (gcnew System::Windows::Forms::Label());
			   this->lblUnitYoung = (gcnew System::Windows::Forms::Label());
			   this->numYoung = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdYoung = (gcnew System::Windows::Forms::Button());
			   this->lblYoung = (gcnew System::Windows::Forms::Label());
			   this->lblUnitViscosity = (gcnew System::Windows::Forms::Label());
			   this->numViscosity = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdViscosity = (gcnew System::Windows::Forms::Button());
			   this->lblViscosity = (gcnew System::Windows::Forms::Label());
			   this->lblUnitLength = (gcnew System::Windows::Forms::Label());
			   this->numLength = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdLength = (gcnew System::Windows::Forms::Button());
			   this->lblLength = (gcnew System::Windows::Forms::Label());
			   this->lblUnitThickness = (gcnew System::Windows::Forms::Label());
			   this->numThickness = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdThickness = (gcnew System::Windows::Forms::Button());
			   this->lblThickness = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate4 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate3 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate5 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRate1 = (gcnew System::Windows::Forms::Label());
			   this->numRate = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdRate = (gcnew System::Windows::Forms::Button());
			   this->numMetabolic = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdMetabolic = (gcnew System::Windows::Forms::Button());
			   this->lblUnitMetabolic = (gcnew System::Windows::Forms::Label());
			   this->numBunsen = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdBunsen = (gcnew System::Windows::Forms::Button());
			   this->lblUnitBunsen = (gcnew System::Windows::Forms::Label());
			   this->numRadius = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdRadius = (gcnew System::Windows::Forms::Button());
			   this->lblNumRadius = (gcnew System::Windows::Forms::Label());
			   this->numRBC = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdRBC = (gcnew System::Windows::Forms::Button());
			   this->lblUnitRBC = (gcnew System::Windows::Forms::Label());
			   this->numSaturation = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdSaturation = (gcnew System::Windows::Forms::Button());
			   this->lblUnitSaturation = (gcnew System::Windows::Forms::Label());
			   this->numNumber = (gcnew System::Windows::Forms::NumericUpDown());
			   this->picVis = (gcnew System::Windows::Forms::PictureBox());
			   this->pnTissue = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitConsumption5 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitConsumption2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitConsumption3 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitConsumption4 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitConsumption1 = (gcnew System::Windows::Forms::Label());
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
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBind))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHemoglobin))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numYoung))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numViscosity))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLength))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numThickness))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRate))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMetabolic))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBunsen))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRadius))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRBC))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSaturation))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNumber))->BeginInit();
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
			   this->pnPreset->Location = System::Drawing::Point(153, 354);
			   this->pnPreset->Name = L"pnPreset";
			   this->pnPreset->Size = System::Drawing::Size(972, 28);
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
			   this->pnBloodVessel->Controls->Add(this->lblUnitIner1);
			   this->pnBloodVessel->Controls->Add(this->lblUnitIner2);
			   this->pnBloodVessel->Controls->Add(this->lblUnitIner3);
			   this->pnBloodVessel->Controls->Add(this->lblUnitResis);
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
			   this->pnBloodVessel->Location = System::Drawing::Point(153, 170);
			   this->pnBloodVessel->Name = L"pnBloodVessel";
			   this->pnBloodVessel->Size = System::Drawing::Size(611, 161);
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
			   this->lblSysPressure->Text = L"Systolic pressure";
			   // 
			   // lblUnitIner2
			   // 
			   this->lblUnitIner2->AutoSize = true;
			   this->lblUnitIner2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitIner2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 4, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitIner2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitIner2->Location = System::Drawing::Point(575, 42);
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
			   this->lblUnitIner1->Location = System::Drawing::Point(526, 42);
			   this->lblUnitIner1->Name = L"lblUnitIner1";
			   this->lblUnitIner1->Size = System::Drawing::Size(50, 13);
			   this->lblUnitIner1->TabIndex = 161;
			   this->lblUnitIner1->Text = L"mmHg · s";
			   // 
			   // lblUnitIner3
			   // 
			   this->lblUnitIner3->AutoSize = true;
			   this->lblUnitIner3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitIner3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitIner3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitIner3->Location = System::Drawing::Point(579, 42);
			   this->lblUnitIner3->Name = L"lblUnitIner3";
			   this->lblUnitIner3->Size = System::Drawing::Size(24, 13);
			   this->lblUnitIner3->TabIndex = 163;
			   this->lblUnitIner3->Text = L"/ ml";
			   // 
			   // lblUnitResis
			   // 
			   this->lblUnitResis->AutoSize = true;
			   this->lblUnitResis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitResis->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitResis->ForeColor = System::Drawing::Color::White;
			   this->lblUnitResis->Location = System::Drawing::Point(526, 14);
			   this->lblUnitResis->Name = L"lblUnitResis";
			   this->lblUnitResis->Size = System::Drawing::Size(70, 13);
			   this->lblUnitResis->TabIndex = 158;
			   this->lblUnitResis->Text = L"mmHg · s / ml";
			   // 
			   // lblUnitCompliance
			   // 
			   this->lblUnitCompliance->AutoSize = true;
			   this->lblUnitCompliance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitCompliance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitCompliance->ForeColor = System::Drawing::Color::White;
			   this->lblUnitCompliance->Location = System::Drawing::Point(527, 103);
			   this->lblUnitCompliance->Name = L"lblUnitCompliance";
			   this->lblUnitCompliance->Size = System::Drawing::Size(57, 13);
			   this->lblUnitCompliance->TabIndex = 125;
			   this->lblUnitCompliance->Text = L"ml / mmHg";
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
			   this->lblUnitElastance->Location = System::Drawing::Point(526, 72);
			   this->lblUnitElastance->Name = L"lblUnitElastance";
			   this->lblUnitElastance->Size = System::Drawing::Size(57, 13);
			   this->lblUnitElastance->TabIndex = 122;
			   this->lblUnitElastance->Text = L"mmHg / ml";
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
			   this->lblNumCompliance->Location = System::Drawing::Point(405, 98);
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
			   this->lblCompliance->Location = System::Drawing::Point(320, 98);
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
			   this->lblFlowRate->Size = System::Drawing::Size(70, 19);
			   this->lblFlowRate->TabIndex = 111;
			   this->lblFlowRate->Text = L"Flow rate";
			   // 
			   // lblNumElastance
			   // 
			   this->lblNumElastance->AutoSize = true;
			   this->lblNumElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumElastance->ForeColor = System::Drawing::Color::White;
			   this->lblNumElastance->Location = System::Drawing::Point(405, 67);
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
			   this->lblElastance->Location = System::Drawing::Point(321, 68);
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
			   this->lblNumIner->Location = System::Drawing::Point(405, 37);
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
			   this->lblNumResis->Location = System::Drawing::Point(405, 9);
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
			   this->lblBPartial->Text = L"Partial pressure";
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
			   this->lblDiaPressure->Text = L"Diastolic pressure";
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
			   this->lblSaturation->Location = System::Drawing::Point(13, 22);
			   this->lblSaturation->Name = L"lblSaturation";
			   this->lblSaturation->Size = System::Drawing::Size(130, 19);
			   this->lblSaturation->TabIndex = 168;
			   this->lblSaturation->Text = L"Hb-O2-Saturation";
			   // 
			   // lblRadius
			   // 
			   this->lblRadius->AutoSize = true;
			   this->lblRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRadius->ForeColor = System::Drawing::Color::White;
			   this->lblRadius->Location = System::Drawing::Point(14, 86);
			   this->lblRadius->Name = L"lblRadius";
			   this->lblRadius->Size = System::Drawing::Size(98, 19);
			   this->lblRadius->TabIndex = 162;
			   this->lblRadius->Text = L"Vessel radius";
			   // 
			   // lblBunsen
			   // 
			   this->lblBunsen->AutoSize = true;
			   this->lblBunsen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblBunsen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblBunsen->ForeColor = System::Drawing::Color::White;
			   this->lblBunsen->Location = System::Drawing::Point(14, 118);
			   this->lblBunsen->Name = L"lblBunsen";
			   this->lblBunsen->Size = System::Drawing::Size(117, 19);
			   this->lblBunsen->TabIndex = 164;
			   this->lblBunsen->Text = L"Bunsen solubility";
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
			   this->lblMetabolic->Size = System::Drawing::Size(106, 19);
			   this->lblMetabolic->TabIndex = 166;
			   this->lblMetabolic->Text = L"Metabolic rate";
			   // 
			   // lblRate
			   // 
			   this->lblRate->AutoSize = true;
			   this->lblRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRate->ForeColor = System::Drawing::Color::White;
			   this->lblRate->Location = System::Drawing::Point(13, 184);
			   this->lblRate->Name = L"lblRate";
			   this->lblRate->Size = System::Drawing::Size(185, 19);
			   this->lblRate->TabIndex = 167;
			   this->lblRate->Text = L"Max. O2 consumption rate";
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
			   this->pnParameters->Controls->Add(this->lblUnitBind);
			   this->pnParameters->Controls->Add(this->numBind);
			   this->pnParameters->Controls->Add(this->cmdBind);
			   this->pnParameters->Controls->Add(this->lblBinding);
			   this->pnParameters->Controls->Add(this->lblUnitHemoglobin);
			   this->pnParameters->Controls->Add(this->numHemoglobin);
			   this->pnParameters->Controls->Add(this->cmdHemoglobin);
			   this->pnParameters->Controls->Add(this->lblHemoglobin);
			   this->pnParameters->Controls->Add(this->lblUnitYoung);
			   this->pnParameters->Controls->Add(this->numYoung);
			   this->pnParameters->Controls->Add(this->cmdYoung);
			   this->pnParameters->Controls->Add(this->lblYoung);
			   this->pnParameters->Controls->Add(this->lblUnitViscosity);
			   this->pnParameters->Controls->Add(this->numViscosity);
			   this->pnParameters->Controls->Add(this->cmdViscosity);
			   this->pnParameters->Controls->Add(this->lblViscosity);
			   this->pnParameters->Controls->Add(this->lblUnitLength);
			   this->pnParameters->Controls->Add(this->numLength);
			   this->pnParameters->Controls->Add(this->cmdLength);
			   this->pnParameters->Controls->Add(this->lblLength);
			   this->pnParameters->Controls->Add(this->lblUnitThickness);
			   this->pnParameters->Controls->Add(this->numThickness);
			   this->pnParameters->Controls->Add(this->cmdThickness);
			   this->pnParameters->Controls->Add(this->lblThickness);
			   this->pnParameters->Controls->Add(this->lblUnitRate2);
			   this->pnParameters->Controls->Add(this->lblUnitRate4);
			   this->pnParameters->Controls->Add(this->lblUnitRate3);
			   this->pnParameters->Controls->Add(this->lblUnitRate5);
			   this->pnParameters->Controls->Add(this->lblUnitRate1);
			   this->pnParameters->Controls->Add(this->numRate);
			   this->pnParameters->Controls->Add(this->cmdRate);
			   this->pnParameters->Controls->Add(this->numMetabolic);
			   this->pnParameters->Controls->Add(this->cmdMetabolic);
			   this->pnParameters->Controls->Add(this->lblUnitMetabolic);
			   this->pnParameters->Controls->Add(this->numBunsen);
			   this->pnParameters->Controls->Add(this->cmdBunsen);
			   this->pnParameters->Controls->Add(this->lblUnitBunsen);
			   this->pnParameters->Controls->Add(this->numRadius);
			   this->pnParameters->Controls->Add(this->cmdRadius);
			   this->pnParameters->Controls->Add(this->lblNumRadius);
			   this->pnParameters->Controls->Add(this->numRBC);
			   this->pnParameters->Controls->Add(this->cmdRBC);
			   this->pnParameters->Controls->Add(this->lblUnitRBC);
			   this->pnParameters->Controls->Add(this->numSaturation);
			   this->pnParameters->Controls->Add(this->cmdSaturation);
			   this->pnParameters->Controls->Add(this->lblUnitSaturation);
			   this->pnParameters->Controls->Add(this->lblRate);
			   this->pnParameters->Controls->Add(this->lblMetabolic);
			   this->pnParameters->Controls->Add(this->lblBunsen);
			   this->pnParameters->Controls->Add(this->lblRadius);
			   this->pnParameters->Controls->Add(this->lblSaturation);
			   this->pnParameters->Controls->Add(this->lblRBC);
			   this->pnParameters->Location = System::Drawing::Point(153, 399);
			   this->pnParameters->Name = L"pnParameters";
			   this->pnParameters->Size = System::Drawing::Size(972, 420);
			   this->pnParameters->TabIndex = 99;
			   // 
			   // lblUnitBind
			   // 
			   this->lblUnitBind->AutoSize = true;
			   this->lblUnitBind->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitBind->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitBind->ForeColor = System::Drawing::Color::White;
			   this->lblUnitBind->Location = System::Drawing::Point(384, 379);
			   this->lblUnitBind->Name = L"lblUnitBind";
			   this->lblUnitBind->Size = System::Drawing::Size(26, 19);
			   this->lblUnitBind->TabIndex = 310;
			   this->lblUnitBind->Text = L"ml";
			   // 
			   // numBind
			   // 
			   this->numBind->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numBind->DecimalPlaces = 2;
			   this->numBind->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numBind->ForeColor = System::Drawing::Color::White;
			   this->numBind->Location = System::Drawing::Point(201, 376);
			   this->numBind->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			   this->numBind->Name = L"numBind";
			   this->numBind->Size = System::Drawing::Size(155, 26);
			   this->numBind->TabIndex = 309;
			   this->numBind->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numBind->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 134, 0, 0, 131072 });
			   this->numBind->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numBind_ValueChanged);
			   // 
			   // cmdBind
			   // 
			   this->cmdBind->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdBind->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdBind->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdBind->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdBind->ForeColor = System::Drawing::Color::White;
			   this->cmdBind->Location = System::Drawing::Point(531, 379);
			   this->cmdBind->Name = L"cmdBind";
			   this->cmdBind->Size = System::Drawing::Size(59, 23);
			   this->cmdBind->TabIndex = 308;
			   this->cmdBind->Text = L"Reset";
			   this->cmdBind->UseVisualStyleBackColor = false;
			   this->cmdBind->Click += gcnew System::EventHandler(this, &BloodForm::cmdBind_Click);
			   // 
			   // lblBinding
			   // 
			   this->lblBinding->AutoSize = true;
			   this->lblBinding->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblBinding->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblBinding->ForeColor = System::Drawing::Color::White;
			   this->lblBinding->Location = System::Drawing::Point(13, 379);
			   this->lblBinding->Name = L"lblBinding";
			   this->lblBinding->Size = System::Drawing::Size(140, 19);
			   this->lblBinding->TabIndex = 307;
			   this->lblBinding->Text = L"O2 Binding capacity";
			   // 
			   // lblUnitHemoglobin
			   // 
			   this->lblUnitHemoglobin->AutoSize = true;
			   this->lblUnitHemoglobin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitHemoglobin->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitHemoglobin->ForeColor = System::Drawing::Color::White;
			   this->lblUnitHemoglobin->Location = System::Drawing::Point(384, 347);
			   this->lblUnitHemoglobin->Name = L"lblUnitHemoglobin";
			   this->lblUnitHemoglobin->Size = System::Drawing::Size(64, 19);
			   this->lblUnitHemoglobin->TabIndex = 306;
			   this->lblUnitHemoglobin->Text = L"g/100ml";
			   // 
			   // numHemoglobin
			   // 
			   this->numHemoglobin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numHemoglobin->DecimalPlaces = 2;
			   this->numHemoglobin->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numHemoglobin->ForeColor = System::Drawing::Color::White;
			   this->numHemoglobin->Location = System::Drawing::Point(201, 344);
			   this->numHemoglobin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			   this->numHemoglobin->Name = L"numHemoglobin";
			   this->numHemoglobin->Size = System::Drawing::Size(155, 26);
			   this->numHemoglobin->TabIndex = 305;
			   this->numHemoglobin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numHemoglobin->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 138, 0, 0, 65536 });
			   this->numHemoglobin->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numHemoglobin_ValueChanged);
			   // 
			   // cmdHemoglobin
			   // 
			   this->cmdHemoglobin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdHemoglobin->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdHemoglobin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdHemoglobin->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdHemoglobin->ForeColor = System::Drawing::Color::White;
			   this->cmdHemoglobin->Location = System::Drawing::Point(531, 347);
			   this->cmdHemoglobin->Name = L"cmdHemoglobin";
			   this->cmdHemoglobin->Size = System::Drawing::Size(59, 23);
			   this->cmdHemoglobin->TabIndex = 304;
			   this->cmdHemoglobin->Text = L"Reset";
			   this->cmdHemoglobin->UseVisualStyleBackColor = false;
			   this->cmdHemoglobin->Click += gcnew System::EventHandler(this, &BloodForm::cmdHemoglobin_Click);
			   // 
			   // lblHemoglobin
			   // 
			   this->lblHemoglobin->AutoSize = true;
			   this->lblHemoglobin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblHemoglobin->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblHemoglobin->ForeColor = System::Drawing::Color::White;
			   this->lblHemoglobin->Location = System::Drawing::Point(13, 347);
			   this->lblHemoglobin->Name = L"lblHemoglobin";
			   this->lblHemoglobin->Size = System::Drawing::Size(126, 19);
			   this->lblHemoglobin->TabIndex = 303;
			   this->lblHemoglobin->Text = L"Hb Concentration";
			   // 
			   // lblUnitYoung
			   // 
			   this->lblUnitYoung->AutoSize = true;
			   this->lblUnitYoung->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitYoung->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitYoung->ForeColor = System::Drawing::Color::White;
			   this->lblUnitYoung->Location = System::Drawing::Point(384, 315);
			   this->lblUnitYoung->Name = L"lblUnitYoung";
			   this->lblUnitYoung->Size = System::Drawing::Size(55, 19);
			   this->lblUnitYoung->TabIndex = 302;
			   this->lblUnitYoung->Text = L"mmHg";
			   // 
			   // numYoung
			   // 
			   this->numYoung->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numYoung->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numYoung->ForeColor = System::Drawing::Color::White;
			   this->numYoung->Location = System::Drawing::Point(201, 312);
			   this->numYoung->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			   this->numYoung->Name = L"numYoung";
			   this->numYoung->Size = System::Drawing::Size(155, 26);
			   this->numYoung->TabIndex = 301;
			   this->numYoung->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numYoung->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			   this->numYoung->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numYoung_ValueChanged);
			   // 
			   // cmdYoung
			   // 
			   this->cmdYoung->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdYoung->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdYoung->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdYoung->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdYoung->ForeColor = System::Drawing::Color::White;
			   this->cmdYoung->Location = System::Drawing::Point(531, 315);
			   this->cmdYoung->Name = L"cmdYoung";
			   this->cmdYoung->Size = System::Drawing::Size(59, 23);
			   this->cmdYoung->TabIndex = 300;
			   this->cmdYoung->Text = L"Reset";
			   this->cmdYoung->UseVisualStyleBackColor = false;
			   this->cmdYoung->Click += gcnew System::EventHandler(this, &BloodForm::cmdYoung_Click);
			   // 
			   // lblYoung
			   // 
			   this->lblYoung->AutoSize = true;
			   this->lblYoung->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblYoung->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblYoung->ForeColor = System::Drawing::Color::White;
			   this->lblYoung->Location = System::Drawing::Point(13, 315);
			   this->lblYoung->Name = L"lblYoung";
			   this->lblYoung->Size = System::Drawing::Size(110, 19);
			   this->lblYoung->TabIndex = 299;
			   this->lblYoung->Text = L"Young modulus";
			   // 
			   // lblUnitViscosity
			   // 
			   this->lblUnitViscosity->AutoSize = true;
			   this->lblUnitViscosity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitViscosity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitViscosity->ForeColor = System::Drawing::Color::White;
			   this->lblUnitViscosity->Location = System::Drawing::Point(383, 283);
			   this->lblUnitViscosity->Name = L"lblUnitViscosity";
			   this->lblUnitViscosity->Size = System::Drawing::Size(61, 19);
			   this->lblUnitViscosity->TabIndex = 298;
			   this->lblUnitViscosity->Text = L"mPa · s";
			   // 
			   // numViscosity
			   // 
			   this->numViscosity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numViscosity->DecimalPlaces = 3;
			   this->numViscosity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numViscosity->ForeColor = System::Drawing::Color::White;
			   this->numViscosity->Location = System::Drawing::Point(200, 280);
			   this->numViscosity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			   this->numViscosity->Name = L"numViscosity";
			   this->numViscosity->Size = System::Drawing::Size(155, 26);
			   this->numViscosity->TabIndex = 297;
			   this->numViscosity->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numViscosity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 672, 0, 0, 131072 });
			   this->numViscosity->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numViscosity_ValueChanged);
			   // 
			   // cmdViscosity
			   // 
			   this->cmdViscosity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdViscosity->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdViscosity->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdViscosity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdViscosity->ForeColor = System::Drawing::Color::White;
			   this->cmdViscosity->Location = System::Drawing::Point(530, 283);
			   this->cmdViscosity->Name = L"cmdViscosity";
			   this->cmdViscosity->Size = System::Drawing::Size(59, 23);
			   this->cmdViscosity->TabIndex = 296;
			   this->cmdViscosity->Text = L"Reset";
			   this->cmdViscosity->UseVisualStyleBackColor = false;
			   this->cmdViscosity->Click += gcnew System::EventHandler(this, &BloodForm::cmdViscosity_Click);
			   // 
			   // lblViscosity
			   // 
			   this->lblViscosity->AutoSize = true;
			   this->lblViscosity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblViscosity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblViscosity->ForeColor = System::Drawing::Color::White;
			   this->lblViscosity->Location = System::Drawing::Point(12, 283);
			   this->lblViscosity->Name = L"lblViscosity";
			   this->lblViscosity->Size = System::Drawing::Size(66, 19);
			   this->lblViscosity->TabIndex = 295;
			   this->lblViscosity->Text = L"Viscosity";
			   // 
			   // lblUnitLength
			   // 
			   this->lblUnitLength->AutoSize = true;
			   this->lblUnitLength->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLength->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitLength->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLength->Location = System::Drawing::Point(383, 249);
			   this->lblUnitLength->Name = L"lblUnitLength";
			   this->lblUnitLength->Size = System::Drawing::Size(30, 19);
			   this->lblUnitLength->TabIndex = 294;
			   this->lblUnitLength->Text = L"cm";
			   // 
			   // numLength
			   // 
			   this->numLength->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numLength->DecimalPlaces = 2;
			   this->numLength->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numLength->ForeColor = System::Drawing::Color::White;
			   this->numLength->Location = System::Drawing::Point(200, 246);
			   this->numLength->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			   this->numLength->Name = L"numLength";
			   this->numLength->Size = System::Drawing::Size(155, 26);
			   this->numLength->TabIndex = 293;
			   this->numLength->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1335, 0, 0, 131072 });
			   this->numLength->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numLength_ValueChanged);
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
			   this->cmdLength->Location = System::Drawing::Point(530, 249);
			   this->cmdLength->Name = L"cmdLength";
			   this->cmdLength->Size = System::Drawing::Size(59, 23);
			   this->cmdLength->TabIndex = 292;
			   this->cmdLength->Text = L"Reset";
			   this->cmdLength->UseVisualStyleBackColor = false;
			   this->cmdLength->Click += gcnew System::EventHandler(this, &BloodForm::cmdLength_Click);
			   // 
			   // lblLength
			   // 
			   this->lblLength->AutoSize = true;
			   this->lblLength->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLength->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLength->ForeColor = System::Drawing::Color::White;
			   this->lblLength->Location = System::Drawing::Point(12, 249);
			   this->lblLength->Name = L"lblLength";
			   this->lblLength->Size = System::Drawing::Size(96, 19);
			   this->lblLength->TabIndex = 291;
			   this->lblLength->Text = L"Vessel length";
			   // 
			   // lblUnitThickness
			   // 
			   this->lblUnitThickness->AutoSize = true;
			   this->lblUnitThickness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitThickness->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitThickness->ForeColor = System::Drawing::Color::White;
			   this->lblUnitThickness->Location = System::Drawing::Point(383, 217);
			   this->lblUnitThickness->Name = L"lblUnitThickness";
			   this->lblUnitThickness->Size = System::Drawing::Size(30, 19);
			   this->lblUnitThickness->TabIndex = 290;
			   this->lblUnitThickness->Text = L"cm";
			   // 
			   // numThickness
			   // 
			   this->numThickness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numThickness->DecimalPlaces = 4;
			   this->numThickness->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numThickness->ForeColor = System::Drawing::Color::White;
			   this->numThickness->Location = System::Drawing::Point(200, 214);
			   this->numThickness->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			   this->numThickness->Name = L"numThickness";
			   this->numThickness->Size = System::Drawing::Size(155, 26);
			   this->numThickness->TabIndex = 289;
			   this->numThickness->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numThickness->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 196608 });
			   this->numThickness->ValueChanged += gcnew System::EventHandler(this, &BloodForm::numThickness_ValueChanged);
			   // 
			   // cmdThickness
			   // 
			   this->cmdThickness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdThickness->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdThickness->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdThickness->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdThickness->ForeColor = System::Drawing::Color::White;
			   this->cmdThickness->Location = System::Drawing::Point(530, 217);
			   this->cmdThickness->Name = L"cmdThickness";
			   this->cmdThickness->Size = System::Drawing::Size(59, 23);
			   this->cmdThickness->TabIndex = 288;
			   this->cmdThickness->Text = L"Reset";
			   this->cmdThickness->UseVisualStyleBackColor = false;
			   this->cmdThickness->Click += gcnew System::EventHandler(this, &BloodForm::cmdThickness_Click);
			   // 
			   // lblThickness
			   // 
			   this->lblThickness->AutoSize = true;
			   this->lblThickness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblThickness->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblThickness->ForeColor = System::Drawing::Color::White;
			   this->lblThickness->Location = System::Drawing::Point(12, 217);
			   this->lblThickness->Name = L"lblThickness";
			   this->lblThickness->Size = System::Drawing::Size(116, 19);
			   this->lblThickness->TabIndex = 287;
			   this->lblThickness->Text = L"Vessel thickness";
			   // 
			   // lblUnitRate2
			   // 
			   this->lblUnitRate2->AutoSize = true;
			   this->lblUnitRate2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRate2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRate2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRate2->Location = System::Drawing::Point(407, 194);
			   this->lblUnitRate2->Name = L"lblUnitRate2";
			   this->lblUnitRate2->Size = System::Drawing::Size(20, 13);
			   this->lblUnitRate2->TabIndex = 286;
			   this->lblUnitRate2->Text = L"O2";
			   // 
			   // lblUnitRate4
			   // 
			   this->lblUnitRate4->AutoSize = true;
			   this->lblUnitRate4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRate4->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRate4->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRate4->Location = System::Drawing::Point(463, 182);
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
			   this->lblUnitRate3->Location = System::Drawing::Point(425, 184);
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
			   this->lblUnitRate5->Location = System::Drawing::Point(476, 184);
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
			   this->lblUnitRate1->Location = System::Drawing::Point(384, 184);
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
			   this->numRate->Location = System::Drawing::Point(201, 181);
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
			   this->cmdRate->Location = System::Drawing::Point(531, 184);
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
			   this->lblUnitMetabolic->Size = System::Drawing::Size(38, 19);
			   this->lblUnitMetabolic->TabIndex = 268;
			   this->lblUnitMetabolic->Text = L"ml/s";
			   // 
			   // numBunsen
			   // 
			   this->numBunsen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numBunsen->DecimalPlaces = 6;
			   this->numBunsen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numBunsen->ForeColor = System::Drawing::Color::White;
			   this->numBunsen->Location = System::Drawing::Point(201, 116);
			   this->numBunsen->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numBunsen->Name = L"numBunsen";
			   this->numBunsen->Size = System::Drawing::Size(155, 26);
			   this->numBunsen->TabIndex = 267;
			   this->numBunsen->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numBunsen->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 327680 });
			   // 
			   // cmdBunsen
			   // 
			   this->cmdBunsen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdBunsen->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdBunsen->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdBunsen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdBunsen->ForeColor = System::Drawing::Color::White;
			   this->cmdBunsen->Location = System::Drawing::Point(531, 120);
			   this->cmdBunsen->Name = L"cmdBunsen";
			   this->cmdBunsen->Size = System::Drawing::Size(59, 23);
			   this->cmdBunsen->TabIndex = 266;
			   this->cmdBunsen->Text = L"Reset";
			   this->cmdBunsen->UseVisualStyleBackColor = false;
			   this->cmdBunsen->Click += gcnew System::EventHandler(this, &BloodForm::cmdBunsen_Click);
			   // 
			   // lblUnitBunsen
			   // 
			   this->lblUnitBunsen->AutoSize = true;
			   this->lblUnitBunsen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitBunsen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitBunsen->ForeColor = System::Drawing::Color::White;
			   this->lblUnitBunsen->Location = System::Drawing::Point(384, 120);
			   this->lblUnitBunsen->Name = L"lblUnitBunsen";
			   this->lblUnitBunsen->Size = System::Drawing::Size(26, 19);
			   this->lblUnitBunsen->TabIndex = 265;
			   this->lblUnitBunsen->Text = L"ml";
			   // 
			   // numRadius
			   // 
			   this->numRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numRadius->DecimalPlaces = 2;
			   this->numRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numRadius->ForeColor = System::Drawing::Color::White;
			   this->numRadius->Location = System::Drawing::Point(201, 84);
			   this->numRadius->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numRadius->Name = L"numRadius";
			   this->numRadius->Size = System::Drawing::Size(155, 26);
			   this->numRadius->TabIndex = 264;
			   this->numRadius->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numRadius->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 48, 0, 0, 131072 });
			   // 
			   // cmdRadius
			   // 
			   this->cmdRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdRadius->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdRadius->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdRadius->ForeColor = System::Drawing::Color::White;
			   this->cmdRadius->Location = System::Drawing::Point(531, 88);
			   this->cmdRadius->Name = L"cmdRadius";
			   this->cmdRadius->Size = System::Drawing::Size(59, 23);
			   this->cmdRadius->TabIndex = 263;
			   this->cmdRadius->Text = L"Reset";
			   this->cmdRadius->UseVisualStyleBackColor = false;
			   this->cmdRadius->Click += gcnew System::EventHandler(this, &BloodForm::cmdRadius_Click);
			   // 
			   // lblNumRadius
			   // 
			   this->lblNumRadius->AutoSize = true;
			   this->lblNumRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumRadius->ForeColor = System::Drawing::Color::White;
			   this->lblNumRadius->Location = System::Drawing::Point(384, 88);
			   this->lblNumRadius->Name = L"lblNumRadius";
			   this->lblNumRadius->Size = System::Drawing::Size(30, 19);
			   this->lblNumRadius->TabIndex = 262;
			   this->lblNumRadius->Text = L"cm";
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
			   this->pnTissue->Controls->Add(this->lblUnitConsumption5);
			   this->pnTissue->Controls->Add(this->lblUnitConsumption2);
			   this->pnTissue->Controls->Add(this->lblUnitConsumption3);
			   this->pnTissue->Controls->Add(this->lblUnitConsumption4);
			   this->pnTissue->Controls->Add(this->lblUnitConsumption1);
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
			   // lblUnitConsumption5
			   // 
			   this->lblUnitConsumption5->AutoSize = true;
			   this->lblUnitConsumption5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitConsumption5->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitConsumption5->ForeColor = System::Drawing::Color::White;
			   this->lblUnitConsumption5->Location = System::Drawing::Point(308, 32);
			   this->lblUnitConsumption5->Name = L"lblUnitConsumption5";
			   this->lblUnitConsumption5->Size = System::Drawing::Size(12, 13);
			   this->lblUnitConsumption5->TabIndex = 291;
			   this->lblUnitConsumption5->Text = L"3";
			   // 
			   // lblUnitConsumption2
			   // 
			   this->lblUnitConsumption2->AutoSize = true;
			   this->lblUnitConsumption2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitConsumption2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitConsumption2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitConsumption2->Location = System::Drawing::Point(255, 47);
			   this->lblUnitConsumption2->Name = L"lblUnitConsumption2";
			   this->lblUnitConsumption2->Size = System::Drawing::Size(20, 13);
			   this->lblUnitConsumption2->TabIndex = 290;
			   this->lblUnitConsumption2->Text = L"O2";
			   // 
			   // lblUnitConsumption3
			   // 
			   this->lblUnitConsumption3->AutoSize = true;
			   this->lblUnitConsumption3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitConsumption3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitConsumption3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitConsumption3->Location = System::Drawing::Point(271, 37);
			   this->lblUnitConsumption3->Name = L"lblUnitConsumption3";
			   this->lblUnitConsumption3->Size = System::Drawing::Size(45, 19);
			   this->lblUnitConsumption3->TabIndex = 289;
			   this->lblUnitConsumption3->Text = L"/ (cm";
			   // 
			   // lblUnitConsumption4
			   // 
			   this->lblUnitConsumption4->AutoSize = true;
			   this->lblUnitConsumption4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitConsumption4->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitConsumption4->ForeColor = System::Drawing::Color::White;
			   this->lblUnitConsumption4->Location = System::Drawing::Point(314, 37);
			   this->lblUnitConsumption4->Name = L"lblUnitConsumption4";
			   this->lblUnitConsumption4->Size = System::Drawing::Size(31, 19);
			   this->lblUnitConsumption4->TabIndex = 288;
			   this->lblUnitConsumption4->Text = L"· s)";
			   // 
			   // lblUnitConsumption1
			   // 
			   this->lblUnitConsumption1->AutoSize = true;
			   this->lblUnitConsumption1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitConsumption1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitConsumption1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitConsumption1->Location = System::Drawing::Point(234, 37);
			   this->lblUnitConsumption1->Name = L"lblUnitConsumption1";
			   this->lblUnitConsumption1->Size = System::Drawing::Size(30, 19);
			   this->lblUnitConsumption1->TabIndex = 287;
			   this->lblUnitConsumption1->Text = L"ml ";
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
			   this->lblConsumption->Size = System::Drawing::Size(149, 19);
			   this->lblConsumption->TabIndex = 169;
			   this->lblConsumption->Text = L"O2 consumption rate";
			   // 
			   // lblUnitTPartial
			   // 
			   this->lblUnitTPartial->AutoSize = true;
			   this->lblUnitTPartial->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitTPartial->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitTPartial->ForeColor = System::Drawing::Color::White;
			   this->lblUnitTPartial->Location = System::Drawing::Point(234, 11);
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
			   this->lblTPartial->Text = L"Partial pressure";
			   // 
			   // pnBloodTop
			   // 
			   this->pnBloodTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnBloodTop->Controls->Add(this->lblBloodVessel);
			   this->pnBloodTop->Location = System::Drawing::Point(153, 139);
			   this->pnBloodTop->Name = L"pnBloodTop";
			   this->pnBloodTop->Size = System::Drawing::Size(611, 35);
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
			   this->ClientSize = System::Drawing::Size(1161, 831);
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
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBind))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHemoglobin))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numYoung))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numViscosity))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLength))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numThickness))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRate))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMetabolic))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBunsen))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRadius))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRBC))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSaturation))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNumber))->EndInit();
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
		Decimal GetNumberOfVessels();
		Decimal GetVesselLength();
		Decimal GetVesselThickness();
		Decimal GetOxygenBindingCapacity();
		Decimal GetHemoglobinConcentration();
		Decimal GetOxygenHemoglobinSaturation();
		Decimal GetRBCVelocity();
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
		System::Void UpdateElastance(double new_elastance);

	private: System::Void cmdBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		parent_form->BringToFront();
	}
	private: System::Void cmdSaturation_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetHemoglobinOxygenSaturation();
		numSaturation->Value = (Decimal)human_parent_ptr->blood_vessel->GetHemoglobinOxygenSaturation();
	}
	private: System::Void cmdRBC_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetRBCVelocity();
		numRBC->Value = (Decimal)human_parent_ptr->blood_vessel->GetRBCVelocity();
	}
	private: System::Void cmdRadius_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetVesselRadius();
		numRadius->Value = (Decimal)human_parent_ptr->blood_vessel->GetVesselRadius();
	}
	private: System::Void cmdMetabolic_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetMetabolicRate();
		numMetabolic->Value = (Decimal)human_parent_ptr->blood_vessel->GetMetabolicRate();
	}
	private: System::Void cmdRate_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetMaxConsumption();
		numRate->Value = (Decimal)human_parent_ptr->blood_vessel->GetMaxConsumption();
	}
	private: System::Void cmdThickness_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetVesselThickness();
		numThickness->Value = (Decimal)human_parent_ptr->blood_vessel->GetVesselThickness();
	}
	private: System::Void cmdLength_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetVesselLength();
		numLength->Value = (Decimal)human_parent_ptr->blood_vessel->GetVesselLength();
	}
	private: System::Void cmdViscosity_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetViscosity();
		numViscosity->Value = (Decimal)human_parent_ptr->blood_vessel->GetViscosity();
	}
	private: System::Void cmdYoung_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetYoungModulus();
		numYoung->Value = (Decimal)human_parent_ptr->blood_vessel->GetYoungModulus();
	}
	private: System::Void cmdHemoglobin_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetHemoglobinConcentration();
		numHemoglobin->Value = (Decimal)human_parent_ptr->blood_vessel->GetHemoglobinConcentration();
	}

	private: System::Void cmdBunsen_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetBunsenSolubilityCoefficient();
		numBunsen->Value = (Decimal)human_parent_ptr->blood_vessel->GetBunsenSolubilityCoefficient();
	}
	private: System::Void cmdBind_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->ResetOxygenBindingCapacity();
		numBind->Value = (Decimal)human_parent_ptr->blood_vessel->GetOxygenBindingCapacity();
	}
	private: System::Void numSaturation_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetHemoglobinOxygenSaturation((double)numSaturation->Value);
	}
	private: System::Void numRBC_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetRBCVelocity((double)numRBC->Value);
	}
	private: System::Void numMetabolic_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetMetabolicRate((double)numMetabolic->Value);
	}
	private: System::Void numRate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetMaxConsumption((double)numRate->Value);
	}
	private: System::Void numThickness_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetVesselThickness((double)numThickness->Value);
	}
	private: System::Void numLength_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetVesselLength((double)numLength->Value);
	}
	private: System::Void numHemoglobin_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetHemoglobinConcentration((double)numHemoglobin->Value);
	}
	private: System::Void numYoung_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetYoungModulus((double)numYoung->Value);
	}
	private: System::Void numViscosity_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetViscosity((double)numViscosity->Value);
	}
	private: System::Void numBind_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->blood_vessel->SetOxygenBindingCapacity((double)numBind->Value);
	}
	};
}
