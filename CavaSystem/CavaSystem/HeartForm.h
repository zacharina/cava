#pragma once
#include "Human.h"

namespace CavaSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class HeartForm : public System::Windows::Forms::Form
	{
	public:
		HeartForm(Form^ form, Human* human_ptr)
		{
			InitializeComponent();
			parent_form = form;
			human_parent_ptr = human_ptr;
		}

	protected:
		~HeartForm()
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
	private: System::Windows::Forms::Panel^ pnCVS;
	private: System::Windows::Forms::Panel^ pnLeftAtrium;
	private: System::Windows::Forms::Panel^ pnParameters;
	private: System::Windows::Forms::Panel^ pnPreset;
	private: System::Windows::Forms::Panel^ pnOxygen;
	private: System::Windows::Forms::Panel^ pnRightAtrium;
	private: System::Windows::Forms::Panel^ pnRightVentricle;
	private: System::Windows::Forms::Panel^ pnLeftVentricle;
	private: System::Windows::Forms::Panel^ pnLeftAtriumTop;
	private: System::Windows::Forms::Panel^ pnRightAtriumTop;
	private: System::Windows::Forms::Panel^ pnRightVentricleTop;
	private: System::Windows::Forms::Panel^ pnLeftVentricleTop;
	private: System::Windows::Forms::Label^ lblLeftVentricle;
	private: System::Windows::Forms::Label^ lblRightVentricle;
	private: System::Windows::Forms::Label^ lblLeftAtrium;
	private: System::Windows::Forms::Label^ lblRightAtrium;
	private: System::Windows::Forms::Label^ lblCVS;
	private: System::Windows::Forms::Label^ lblOxygen;
	private: System::Windows::Forms::Label^ lblLVInertance;
	private: System::Windows::Forms::Label^ lblParameters;
	private: System::Windows::Forms::Label^ lblLARadius;
	private: System::Windows::Forms::Label^ lblRARadius;
	private: System::Windows::Forms::Label^ lblRAPressure;
	private: System::Windows::Forms::Label^ lblRAElastance;
	private: System::Windows::Forms::Label^ lblRVRadius;
	private: System::Windows::Forms::Label^ lblLVEnd;
	private: System::Windows::Forms::Label^ lblMaxElas;
	private: System::Windows::Forms::Label^ lblMinElas;
	private: System::Windows::Forms::Label^ lblDuration;
	private: System::Windows::Forms::Label^ lblStrokeVolume;
	private: System::Windows::Forms::Label^ lblHeartRate;
	private: System::Windows::Forms::Label^ lblDensity;
	private: System::Windows::Forms::Label^ lblRVEnd;
	private: System::Windows::Forms::Label^ lblCoeff1;
	private: System::Windows::Forms::Label^ lblCoeff2;
	private: System::Windows::Forms::Label^ lblAtrialKey;
	private: System::Windows::Forms::Label^ lblRadius0;
	private: System::Windows::Forms::Label^ lblLAPressure;
	private: System::Windows::Forms::Label^ lblRVInertance;
	private: System::Windows::Forms::Label^ lblLVRadius;
	private: System::Windows::Forms::Label^ lblLVPressureTotal;
	private: System::Windows::Forms::Label^ lblLAElastance;
	private: System::Windows::Forms::Label^ lblRVPressureTotal;
	private: System::Windows::Forms::Label^ lblFlowRate;
	private: System::Windows::Forms::Label^ lblNumRVRadius;
	private: System::Windows::Forms::Label^ lblNumRVPressureTotal;
	private: System::Windows::Forms::Label^ lblNumRVInertance;
	private: System::Windows::Forms::Label^ lblNumLVRadius;
	private: System::Windows::Forms::Label^ lblNumLVPressureTotal;
	private: System::Windows::Forms::Label^ lblNumOxygen;
	private: System::Windows::Forms::Label^ lblNumFlowRate;
	private: System::Windows::Forms::Label^ lblNumLARadius;
	private: System::Windows::Forms::Label^ lblNumLAPressure;
	private: System::Windows::Forms::Label^ lblNumLAElastance;
	private: System::Windows::Forms::Label^ lblNumLVInertance;
	private: System::Windows::Forms::Label^ lblNumRARadius;
	private: System::Windows::Forms::Label^ lblNumRAPressure;
	private: System::Windows::Forms::Label^ lblNumRAElastance;
	private: System::Windows::Forms::Label^ lblUnitLVRadius;
	private: System::Windows::Forms::Label^ lblUnitLVPressureTotal;
	private: System::Windows::Forms::Label^ lblUnitOxygen;
	private: System::Windows::Forms::Label^ lblUnitFlowRate;
	private: System::Windows::Forms::Label^ lblUnitRARadius;
	private: System::Windows::Forms::Label^ lblUnitLAElastance;
	private: System::Windows::Forms::Label^ lblUnitLARadius;
	private: System::Windows::Forms::Label^ lblUnitLAPressure;
	private: System::Windows::Forms::Label^ lblUnitLVInertance1;
	private: System::Windows::Forms::Label^ lblUnitLVInertance2;
	private: System::Windows::Forms::Label^ lblUnitLVInertance3;
	private: System::Windows::Forms::Label^ lblUnitRVPressureTotal;
	private: System::Windows::Forms::Label^ lblUnitRVInertance1;
	private: System::Windows::Forms::Label^ lblUnitRVInertance2;
	private: System::Windows::Forms::Label^ lblUnitRVInertance3;
	private: System::Windows::Forms::Label^ lblUnitRVRadius;
	private: System::Windows::Forms::Label^ lblUnitRAPressure;
	private: System::Windows::Forms::Label^ lblUnitRAElastance;
	private: System::Windows::Forms::Label^ lblUnitAtrialKey;
	private: System::Windows::Forms::Label^ lblUnitDuration;
	private: System::Windows::Forms::Label^ lblUnitStrokeVolume;
	private: System::Windows::Forms::Label^ lblUnitHeartRate;
	private: System::Windows::Forms::Label^ lblUnitDensity1;
	private: System::Windows::Forms::Label^ lblUnitDensity2;
	private: System::Windows::Forms::Label^ lblUnitMaxElas;
	private: System::Windows::Forms::Label^ lblUnitMinElas;
	private: System::Windows::Forms::Label^ lblUnitRVEnd;
	private: System::Windows::Forms::Label^ lblUnitLVEnd;
	private: System::Windows::Forms::Label^ lblUnitRadius01;
	private: System::Windows::Forms::Label^ lblUnitRadius02;
	private: System::Windows::Forms::NumericUpDown^ numDuration;
	private: System::Windows::Forms::NumericUpDown^ numStrokeVolume;
	private: System::Windows::Forms::NumericUpDown^ numHeartRate;
	private: System::Windows::Forms::NumericUpDown^ numRVEnd;
	private: System::Windows::Forms::NumericUpDown^ numLVEnd;
	private: System::Windows::Forms::NumericUpDown^ numAtrialKey;
	private: System::Windows::Forms::NumericUpDown^ numRadius0;
	private: System::Windows::Forms::NumericUpDown^ numMaxElas;
	private: System::Windows::Forms::NumericUpDown^ numMinElas;
	private: System::Windows::Forms::NumericUpDown^ numCoeff1;
	private: System::Windows::Forms::NumericUpDown^ numCoeff2;
	private: System::Windows::Forms::NumericUpDown^ numDensity;
	private: System::Windows::Forms::Button^ cmdBack;
	private: System::Windows::Forms::Button^ cmdDuration;
	private: System::Windows::Forms::Button^ cmdHeartRate;
	private: System::Windows::Forms::Button^ cmdStrokeVolume;
	private: System::Windows::Forms::Button^ cmdRVEnd;
	private: System::Windows::Forms::Button^ cmdLVEnd;
	private: System::Windows::Forms::Button^ cmdAtrialKey;
	private: System::Windows::Forms::Button^ cmdRadius0;
	private: System::Windows::Forms::Button^ cmdMaxElas;
	private: System::Windows::Forms::Button^ cmdMinElas;
	private: System::Windows::Forms::Button^ cmdCoeff1;
	private: System::Windows::Forms::Button^ cmdCoeff2;
	private: System::Windows::Forms::Button^ cmdDensity;
	private: System::Windows::Forms::PictureBox^ picVis;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HeartForm::typeid));
			   this->pnCVS = (gcnew System::Windows::Forms::Panel());
			   this->lblCVS = (gcnew System::Windows::Forms::Label());
			   this->pnPreset = (gcnew System::Windows::Forms::Panel());
			   this->lblParameters = (gcnew System::Windows::Forms::Label());
			   this->picVis = (gcnew System::Windows::Forms::PictureBox());
			   this->cmdBack = (gcnew System::Windows::Forms::Button());
			   this->pnOxygen = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitOxygen = (gcnew System::Windows::Forms::Label());
			   this->lblNumOxygen = (gcnew System::Windows::Forms::Label());
			   this->lblOxygen = (gcnew System::Windows::Forms::Label());
			   this->pnLeftAtrium = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitLARadius = (gcnew System::Windows::Forms::Label());
			   this->lblUnitLAElastance = (gcnew System::Windows::Forms::Label());
			   this->lblNumLARadius = (gcnew System::Windows::Forms::Label());
			   this->lblNumLAPressure = (gcnew System::Windows::Forms::Label());
			   this->lblNumLAElastance = (gcnew System::Windows::Forms::Label());
			   this->lblLARadius = (gcnew System::Windows::Forms::Label());
			   this->lblUnitLAPressure = (gcnew System::Windows::Forms::Label());
			   this->lblLAPressure = (gcnew System::Windows::Forms::Label());
			   this->lblLAElastance = (gcnew System::Windows::Forms::Label());
			   this->pnParameters = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitDensity2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRVEnd = (gcnew System::Windows::Forms::Label());
			   this->lblUnitLVEnd = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRadius02 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitMaxElas = (gcnew System::Windows::Forms::Label());
			   this->lblUnitMinElas = (gcnew System::Windows::Forms::Label());
			   this->numCoeff2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdCoeff2 = (gcnew System::Windows::Forms::Button());
			   this->lblCoeff2 = (gcnew System::Windows::Forms::Label());
			   this->lblCoeff1 = (gcnew System::Windows::Forms::Label());
			   this->numCoeff1 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdCoeff1 = (gcnew System::Windows::Forms::Button());
			   this->numDensity = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdDensity = (gcnew System::Windows::Forms::Button());
			   this->lblUnitDensity1 = (gcnew System::Windows::Forms::Label());
			   this->lblDensity = (gcnew System::Windows::Forms::Label());
			   this->lblRVEnd = (gcnew System::Windows::Forms::Label());
			   this->numRVEnd = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdRVEnd = (gcnew System::Windows::Forms::Button());
			   this->numLVEnd = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdLVEnd = (gcnew System::Windows::Forms::Button());
			   this->numAtrialKey = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdAtrialKey = (gcnew System::Windows::Forms::Button());
			   this->lblUnitAtrialKey = (gcnew System::Windows::Forms::Label());
			   this->numRadius0 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdRadius0 = (gcnew System::Windows::Forms::Button());
			   this->lblUnitRadius01 = (gcnew System::Windows::Forms::Label());
			   this->numMaxElas = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdMaxElas = (gcnew System::Windows::Forms::Button());
			   this->numMinElas = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdMinElas = (gcnew System::Windows::Forms::Button());
			   this->numDuration = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdDuration = (gcnew System::Windows::Forms::Button());
			   this->lblUnitDuration = (gcnew System::Windows::Forms::Label());
			   this->numStrokeVolume = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdStrokeVolume = (gcnew System::Windows::Forms::Button());
			   this->lblUnitStrokeVolume = (gcnew System::Windows::Forms::Label());
			   this->numHeartRate = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdHeartRate = (gcnew System::Windows::Forms::Button());
			   this->lblUnitHeartRate = (gcnew System::Windows::Forms::Label());
			   this->lblLVEnd = (gcnew System::Windows::Forms::Label());
			   this->lblAtrialKey = (gcnew System::Windows::Forms::Label());
			   this->lblRadius0 = (gcnew System::Windows::Forms::Label());
			   this->lblMaxElas = (gcnew System::Windows::Forms::Label());
			   this->lblMinElas = (gcnew System::Windows::Forms::Label());
			   this->lblDuration = (gcnew System::Windows::Forms::Label());
			   this->lblStrokeVolume = (gcnew System::Windows::Forms::Label());
			   this->lblHeartRate = (gcnew System::Windows::Forms::Label());
			   this->lblUnitFlowRate = (gcnew System::Windows::Forms::Label());
			   this->lblNumFlowRate = (gcnew System::Windows::Forms::Label());
			   this->lblFlowRate = (gcnew System::Windows::Forms::Label());
			   this->pnRightVentricle = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitRVInertance2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRVRadius = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRVPressureTotal = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRVInertance1 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRVInertance3 = (gcnew System::Windows::Forms::Label());
			   this->lblNumRVRadius = (gcnew System::Windows::Forms::Label());
			   this->lblRVRadius = (gcnew System::Windows::Forms::Label());
			   this->lblNumRVPressureTotal = (gcnew System::Windows::Forms::Label());
			   this->lblRVPressureTotal = (gcnew System::Windows::Forms::Label());
			   this->lblNumRVInertance = (gcnew System::Windows::Forms::Label());
			   this->lblRVInertance = (gcnew System::Windows::Forms::Label());
			   this->pnLeftVentricle = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitLVInertance2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitLVInertance1 = (gcnew System::Windows::Forms::Label());
			   this->lblNumLVRadius = (gcnew System::Windows::Forms::Label());
			   this->lblUnitLVRadius = (gcnew System::Windows::Forms::Label());
			   this->lblLVRadius = (gcnew System::Windows::Forms::Label());
			   this->lblNumLVPressureTotal = (gcnew System::Windows::Forms::Label());
			   this->lblUnitLVPressureTotal = (gcnew System::Windows::Forms::Label());
			   this->lblLVPressureTotal = (gcnew System::Windows::Forms::Label());
			   this->lblNumLVInertance = (gcnew System::Windows::Forms::Label());
			   this->lblLVInertance = (gcnew System::Windows::Forms::Label());
			   this->lblUnitLVInertance3 = (gcnew System::Windows::Forms::Label());
			   this->pnRightAtrium = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitRAElastance = (gcnew System::Windows::Forms::Label());
			   this->lblNumRARadius = (gcnew System::Windows::Forms::Label());
			   this->lblNumRAPressure = (gcnew System::Windows::Forms::Label());
			   this->lblNumRAElastance = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRARadius = (gcnew System::Windows::Forms::Label());
			   this->lblRARadius = (gcnew System::Windows::Forms::Label());
			   this->lblUnitRAPressure = (gcnew System::Windows::Forms::Label());
			   this->lblRAPressure = (gcnew System::Windows::Forms::Label());
			   this->lblRAElastance = (gcnew System::Windows::Forms::Label());
			   this->pnLeftAtriumTop = (gcnew System::Windows::Forms::Panel());
			   this->lblLeftAtrium = (gcnew System::Windows::Forms::Label());
			   this->pnRightAtriumTop = (gcnew System::Windows::Forms::Panel());
			   this->lblRightAtrium = (gcnew System::Windows::Forms::Label());
			   this->pnLeftVentricleTop = (gcnew System::Windows::Forms::Panel());
			   this->lblLeftVentricle = (gcnew System::Windows::Forms::Label());
			   this->pnRightVentricleTop = (gcnew System::Windows::Forms::Panel());
			   this->lblRightVentricle = (gcnew System::Windows::Forms::Label());
			   this->pnCVS->SuspendLayout();
			   this->pnPreset->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picVis))->BeginInit();
			   this->pnOxygen->SuspendLayout();
			   this->pnLeftAtrium->SuspendLayout();
			   this->pnParameters->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCoeff2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCoeff1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDensity))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRVEnd))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLVEnd))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAtrialKey))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRadius0))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxElas))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinElas))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDuration))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStrokeVolume))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHeartRate))->BeginInit();
			   this->pnRightVentricle->SuspendLayout();
			   this->pnLeftVentricle->SuspendLayout();
			   this->pnRightAtrium->SuspendLayout();
			   this->pnLeftAtriumTop->SuspendLayout();
			   this->pnRightAtriumTop->SuspendLayout();
			   this->pnLeftVentricleTop->SuspendLayout();
			   this->pnRightVentricleTop->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // pnCVS
			   // 
			   this->pnCVS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(44)));
			   this->pnCVS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnCVS->Controls->Add(this->lblCVS);
			   this->pnCVS->Location = System::Drawing::Point(0, 0);
			   this->pnCVS->Name = L"pnCVS";
			   this->pnCVS->Size = System::Drawing::Size(1041, 47);
			   this->pnCVS->TabIndex = 51;
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
			   // pnPreset
			   // 
			   this->pnPreset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->pnPreset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnPreset->Controls->Add(this->lblParameters);
			   this->pnPreset->Location = System::Drawing::Point(143, 298);
			   this->pnPreset->Name = L"pnPreset";
			   this->pnPreset->Size = System::Drawing::Size(898, 28);
			   this->pnPreset->TabIndex = 95;
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
			   // picVis
			   // 
			   this->picVis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picVis.Image")));
			   this->picVis->Location = System::Drawing::Point(12, 100);
			   this->picVis->Name = L"picVis";
			   this->picVis->Size = System::Drawing::Size(113, 352);
			   this->picVis->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->picVis->TabIndex = 89;
			   this->picVis->TabStop = false;
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
			   this->cmdBack->TabIndex = 88;
			   this->cmdBack->Text = L"CLOSE";
			   this->cmdBack->UseVisualStyleBackColor = false;
			   this->cmdBack->Click += gcnew System::EventHandler(this, &HeartForm::cmdBack_Click);
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
			   this->pnOxygen->Size = System::Drawing::Size(887, 28);
			   this->pnOxygen->TabIndex = 92;
			   // 
			   // lblUnitOxygen
			   // 
			   this->lblUnitOxygen->AutoSize = true;
			   this->lblUnitOxygen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lblUnitOxygen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitOxygen->ForeColor = System::Drawing::Color::White;
			   this->lblUnitOxygen->Location = System::Drawing::Point(144, 4);
			   this->lblUnitOxygen->Name = L"lblUnitOxygen";
			   this->lblUnitOxygen->Size = System::Drawing::Size(19, 19);
			   this->lblUnitOxygen->TabIndex = 48;
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
			   this->lblNumOxygen->Location = System::Drawing::Point(106, 4);
			   this->lblNumOxygen->Name = L"lblNumOxygen";
			   this->lblNumOxygen->Size = System::Drawing::Size(34, 19);
			   this->lblNumOxygen->TabIndex = 47;
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
			   // pnLeftAtrium
			   // 
			   this->pnLeftAtrium->AutoScroll = true;
			   this->pnLeftAtrium->AutoSize = true;
			   this->pnLeftAtrium->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnLeftAtrium->Controls->Add(this->lblUnitLARadius);
			   this->pnLeftAtrium->Controls->Add(this->lblUnitLAElastance);
			   this->pnLeftAtrium->Controls->Add(this->lblNumLARadius);
			   this->pnLeftAtrium->Controls->Add(this->lblNumLAPressure);
			   this->pnLeftAtrium->Controls->Add(this->lblNumLAElastance);
			   this->pnLeftAtrium->Controls->Add(this->lblLARadius);
			   this->pnLeftAtrium->Controls->Add(this->lblUnitLAPressure);
			   this->pnLeftAtrium->Controls->Add(this->lblLAPressure);
			   this->pnLeftAtrium->Controls->Add(this->lblLAElastance);
			   this->pnLeftAtrium->Location = System::Drawing::Point(144, 203);
			   this->pnLeftAtrium->Name = L"pnLeftAtrium";
			   this->pnLeftAtrium->Size = System::Drawing::Size(225, 88);
			   this->pnLeftAtrium->TabIndex = 99;
			   // 
			   // lblUnitLARadius
			   // 
			   this->lblUnitLARadius->AutoSize = true;
			   this->lblUnitLARadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLARadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitLARadius->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLARadius->Location = System::Drawing::Point(165, 66);
			   this->lblUnitLARadius->Name = L"lblUnitLARadius";
			   this->lblUnitLARadius->Size = System::Drawing::Size(27, 17);
			   this->lblUnitLARadius->TabIndex = 106;
			   this->lblUnitLARadius->Text = L"cm";
			   // 
			   // lblUnitLAElastance
			   // 
			   this->lblUnitLAElastance->AutoSize = true;
			   this->lblUnitLAElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLAElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 7, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitLAElastance->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLAElastance->Location = System::Drawing::Point(165, 12);
			   this->lblUnitLAElastance->Name = L"lblUnitLAElastance";
			   this->lblUnitLAElastance->Size = System::Drawing::Size(47, 12);
			   this->lblUnitLAElastance->TabIndex = 102;
			   this->lblUnitLAElastance->Text = L"mmHg/mL";
			   // 
			   // lblNumLARadius
			   // 
			   this->lblNumLARadius->AutoSize = true;
			   this->lblNumLARadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumLARadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumLARadius->ForeColor = System::Drawing::Color::White;
			   this->lblNumLARadius->Location = System::Drawing::Point(97, 66);
			   this->lblNumLARadius->Name = L"lblNumLARadius";
			   this->lblNumLARadius->Size = System::Drawing::Size(56, 17);
			   this->lblNumLARadius->TabIndex = 109;
			   this->lblNumLARadius->Text = L"000.00";
			   // 
			   // lblNumLAPressure
			   // 
			   this->lblNumLAPressure->AutoSize = true;
			   this->lblNumLAPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumLAPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumLAPressure->ForeColor = System::Drawing::Color::White;
			   this->lblNumLAPressure->Location = System::Drawing::Point(97, 37);
			   this->lblNumLAPressure->Name = L"lblNumLAPressure";
			   this->lblNumLAPressure->Size = System::Drawing::Size(56, 17);
			   this->lblNumLAPressure->TabIndex = 108;
			   this->lblNumLAPressure->Text = L"000.00";
			   // 
			   // lblNumLAElastance
			   // 
			   this->lblNumLAElastance->AutoSize = true;
			   this->lblNumLAElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumLAElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumLAElastance->ForeColor = System::Drawing::Color::White;
			   this->lblNumLAElastance->Location = System::Drawing::Point(97, 9);
			   this->lblNumLAElastance->Name = L"lblNumLAElastance";
			   this->lblNumLAElastance->Size = System::Drawing::Size(56, 17);
			   this->lblNumLAElastance->TabIndex = 107;
			   this->lblNumLAElastance->Text = L"000.00";
			   // 
			   // lblLARadius
			   // 
			   this->lblLARadius->AutoSize = true;
			   this->lblLARadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLARadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLARadius->ForeColor = System::Drawing::Color::White;
			   this->lblLARadius->Location = System::Drawing::Point(7, 66);
			   this->lblLARadius->Name = L"lblLARadius";
			   this->lblLARadius->Size = System::Drawing::Size(48, 17);
			   this->lblLARadius->TabIndex = 105;
			   this->lblLARadius->Text = L"Radius";
			   // 
			   // lblUnitLAPressure
			   // 
			   this->lblUnitLAPressure->AutoSize = true;
			   this->lblUnitLAPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLAPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitLAPressure->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLAPressure->Location = System::Drawing::Point(165, 37);
			   this->lblUnitLAPressure->Name = L"lblUnitLAPressure";
			   this->lblUnitLAPressure->Size = System::Drawing::Size(47, 17);
			   this->lblUnitLAPressure->TabIndex = 104;
			   this->lblUnitLAPressure->Text = L"mmHg";
			   // 
			   // lblLAPressure
			   // 
			   this->lblLAPressure->AutoSize = true;
			   this->lblLAPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLAPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLAPressure->ForeColor = System::Drawing::Color::White;
			   this->lblLAPressure->Location = System::Drawing::Point(8, 36);
			   this->lblLAPressure->Name = L"lblLAPressure";
			   this->lblLAPressure->Size = System::Drawing::Size(59, 17);
			   this->lblLAPressure->TabIndex = 103;
			   this->lblLAPressure->Text = L"Pressure";
			   // 
			   // lblLAElastance
			   // 
			   this->lblLAElastance->AutoSize = true;
			   this->lblLAElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLAElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLAElastance->ForeColor = System::Drawing::Color::White;
			   this->lblLAElastance->Location = System::Drawing::Point(7, 9);
			   this->lblLAElastance->Name = L"lblLAElastance";
			   this->lblLAElastance->Size = System::Drawing::Size(66, 17);
			   this->lblLAElastance->TabIndex = 101;
			   this->lblLAElastance->Text = L"Elastance";
			   // 
			   // pnParameters
			   // 
			   this->pnParameters->AutoScroll = true;
			   this->pnParameters->AutoSize = true;
			   this->pnParameters->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnParameters->Controls->Add(this->lblUnitDensity2);
			   this->pnParameters->Controls->Add(this->lblUnitRVEnd);
			   this->pnParameters->Controls->Add(this->lblUnitLVEnd);
			   this->pnParameters->Controls->Add(this->lblUnitRadius02);
			   this->pnParameters->Controls->Add(this->lblUnitMaxElas);
			   this->pnParameters->Controls->Add(this->lblUnitMinElas);
			   this->pnParameters->Controls->Add(this->numCoeff2);
			   this->pnParameters->Controls->Add(this->cmdCoeff2);
			   this->pnParameters->Controls->Add(this->lblCoeff2);
			   this->pnParameters->Controls->Add(this->lblCoeff1);
			   this->pnParameters->Controls->Add(this->numCoeff1);
			   this->pnParameters->Controls->Add(this->cmdCoeff1);
			   this->pnParameters->Controls->Add(this->numDensity);
			   this->pnParameters->Controls->Add(this->cmdDensity);
			   this->pnParameters->Controls->Add(this->lblUnitDensity1);
			   this->pnParameters->Controls->Add(this->lblDensity);
			   this->pnParameters->Controls->Add(this->lblRVEnd);
			   this->pnParameters->Controls->Add(this->numRVEnd);
			   this->pnParameters->Controls->Add(this->cmdRVEnd);
			   this->pnParameters->Controls->Add(this->numLVEnd);
			   this->pnParameters->Controls->Add(this->cmdLVEnd);
			   this->pnParameters->Controls->Add(this->numAtrialKey);
			   this->pnParameters->Controls->Add(this->cmdAtrialKey);
			   this->pnParameters->Controls->Add(this->lblUnitAtrialKey);
			   this->pnParameters->Controls->Add(this->numRadius0);
			   this->pnParameters->Controls->Add(this->cmdRadius0);
			   this->pnParameters->Controls->Add(this->lblUnitRadius01);
			   this->pnParameters->Controls->Add(this->numMaxElas);
			   this->pnParameters->Controls->Add(this->cmdMaxElas);
			   this->pnParameters->Controls->Add(this->numMinElas);
			   this->pnParameters->Controls->Add(this->cmdMinElas);
			   this->pnParameters->Controls->Add(this->numDuration);
			   this->pnParameters->Controls->Add(this->cmdDuration);
			   this->pnParameters->Controls->Add(this->lblUnitDuration);
			   this->pnParameters->Controls->Add(this->numStrokeVolume);
			   this->pnParameters->Controls->Add(this->cmdStrokeVolume);
			   this->pnParameters->Controls->Add(this->lblUnitStrokeVolume);
			   this->pnParameters->Controls->Add(this->numHeartRate);
			   this->pnParameters->Controls->Add(this->cmdHeartRate);
			   this->pnParameters->Controls->Add(this->lblUnitHeartRate);
			   this->pnParameters->Controls->Add(this->lblLVEnd);
			   this->pnParameters->Controls->Add(this->lblAtrialKey);
			   this->pnParameters->Controls->Add(this->lblRadius0);
			   this->pnParameters->Controls->Add(this->lblMaxElas);
			   this->pnParameters->Controls->Add(this->lblMinElas);
			   this->pnParameters->Controls->Add(this->lblDuration);
			   this->pnParameters->Controls->Add(this->lblStrokeVolume);
			   this->pnParameters->Controls->Add(this->lblHeartRate);
			   this->pnParameters->Location = System::Drawing::Point(144, 327);
			   this->pnParameters->Name = L"pnParameters";
			   this->pnParameters->Size = System::Drawing::Size(897, 402);
			   this->pnParameters->TabIndex = 98;
			   // 
			   // lblUnitDensity2
			   // 
			   this->lblUnitDensity2->AutoSize = true;
			   this->lblUnitDensity2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitDensity2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitDensity2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitDensity2->Location = System::Drawing::Point(403, 300);
			   this->lblUnitDensity2->Name = L"lblUnitDensity2";
			   this->lblUnitDensity2->Size = System::Drawing::Size(12, 13);
			   this->lblUnitDensity2->TabIndex = 228;
			   this->lblUnitDensity2->Text = L"3";
			   // 
			   // lblUnitRVEnd
			   // 
			   this->lblUnitRVEnd->AutoSize = true;
			   this->lblUnitRVEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRVEnd->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRVEnd->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRVEnd->Location = System::Drawing::Point(367, 274);
			   this->lblUnitRVEnd->Name = L"lblUnitRVEnd";
			   this->lblUnitRVEnd->Size = System::Drawing::Size(54, 13);
			   this->lblUnitRVEnd->TabIndex = 227;
			   this->lblUnitRVEnd->Text = L"mmHg/mL";
			   // 
			   // lblUnitLVEnd
			   // 
			   this->lblUnitLVEnd->AutoSize = true;
			   this->lblUnitLVEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLVEnd->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitLVEnd->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLVEnd->Location = System::Drawing::Point(367, 242);
			   this->lblUnitLVEnd->Name = L"lblUnitLVEnd";
			   this->lblUnitLVEnd->Size = System::Drawing::Size(54, 13);
			   this->lblUnitLVEnd->TabIndex = 226;
			   this->lblUnitLVEnd->Text = L"mmHg/mL";
			   // 
			   // lblUnitRadius02
			   // 
			   this->lblUnitRadius02->AutoSize = true;
			   this->lblUnitRadius02->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRadius02->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRadius02->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRadius02->Location = System::Drawing::Point(392, 171);
			   this->lblUnitRadius02->Name = L"lblUnitRadius02";
			   this->lblUnitRadius02->Size = System::Drawing::Size(12, 13);
			   this->lblUnitRadius02->TabIndex = 225;
			   this->lblUnitRadius02->Text = L"3";
			   // 
			   // lblUnitMaxElas
			   // 
			   this->lblUnitMaxElas->AutoSize = true;
			   this->lblUnitMaxElas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitMaxElas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitMaxElas->ForeColor = System::Drawing::Color::White;
			   this->lblUnitMaxElas->Location = System::Drawing::Point(367, 146);
			   this->lblUnitMaxElas->Name = L"lblUnitMaxElas";
			   this->lblUnitMaxElas->Size = System::Drawing::Size(54, 13);
			   this->lblUnitMaxElas->TabIndex = 224;
			   this->lblUnitMaxElas->Text = L"mmHg/mL";
			   // 
			   // lblUnitMinElas
			   // 
			   this->lblUnitMinElas->AutoSize = true;
			   this->lblUnitMinElas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitMinElas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitMinElas->ForeColor = System::Drawing::Color::White;
			   this->lblUnitMinElas->Location = System::Drawing::Point(367, 114);
			   this->lblUnitMinElas->Name = L"lblUnitMinElas";
			   this->lblUnitMinElas->Size = System::Drawing::Size(54, 13);
			   this->lblUnitMinElas->TabIndex = 223;
			   this->lblUnitMinElas->Text = L"mmHg/mL";
			   // 
			   // numCoeff2
			   // 
			   this->numCoeff2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numCoeff2->DecimalPlaces = 2;
			   this->numCoeff2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numCoeff2->ForeColor = System::Drawing::Color::White;
			   this->numCoeff2->Location = System::Drawing::Point(213, 364);
			   this->numCoeff2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numCoeff2->Name = L"numCoeff2";
			   this->numCoeff2->Size = System::Drawing::Size(134, 26);
			   this->numCoeff2->TabIndex = 199;
			   this->numCoeff2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numCoeff2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numCoeff2->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numCoeff2_ValueChanged);
			   // 
			   // cmdCoeff2
			   // 
			   this->cmdCoeff2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdCoeff2->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdCoeff2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdCoeff2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdCoeff2->ForeColor = System::Drawing::Color::White;
			   this->cmdCoeff2->Location = System::Drawing::Point(435, 365);
			   this->cmdCoeff2->Name = L"cmdCoeff2";
			   this->cmdCoeff2->Size = System::Drawing::Size(59, 23);
			   this->cmdCoeff2->TabIndex = 198;
			   this->cmdCoeff2->Text = L"Reset";
			   this->cmdCoeff2->UseVisualStyleBackColor = false;
			   this->cmdCoeff2->Click += gcnew System::EventHandler(this, &HeartForm::cmdCoeff2_Click);
			   // 
			   // lblCoeff2
			   // 
			   this->lblCoeff2->AutoSize = true;
			   this->lblCoeff2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblCoeff2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCoeff2->ForeColor = System::Drawing::Color::White;
			   this->lblCoeff2->Location = System::Drawing::Point(15, 365);
			   this->lblCoeff2->Name = L"lblCoeff2";
			   this->lblCoeff2->Size = System::Drawing::Size(101, 19);
			   this->lblCoeff2->TabIndex = 195;
			   this->lblCoeff2->Text = L"RV Coefficient";
			   // 
			   // lblCoeff1
			   // 
			   this->lblCoeff1->AutoSize = true;
			   this->lblCoeff1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblCoeff1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCoeff1->ForeColor = System::Drawing::Color::White;
			   this->lblCoeff1->Location = System::Drawing::Point(14, 333);
			   this->lblCoeff1->Name = L"lblCoeff1";
			   this->lblCoeff1->Size = System::Drawing::Size(99, 19);
			   this->lblCoeff1->TabIndex = 194;
			   this->lblCoeff1->Text = L"LV Coefficient";
			   // 
			   // numCoeff1
			   // 
			   this->numCoeff1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numCoeff1->DecimalPlaces = 2;
			   this->numCoeff1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numCoeff1->ForeColor = System::Drawing::Color::White;
			   this->numCoeff1->Location = System::Drawing::Point(213, 332);
			   this->numCoeff1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numCoeff1->Name = L"numCoeff1";
			   this->numCoeff1->Size = System::Drawing::Size(134, 26);
			   this->numCoeff1->TabIndex = 193;
			   this->numCoeff1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numCoeff1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numCoeff1->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numCoeff1_ValueChanged);
			   // 
			   // cmdCoeff1
			   // 
			   this->cmdCoeff1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdCoeff1->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdCoeff1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdCoeff1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdCoeff1->ForeColor = System::Drawing::Color::White;
			   this->cmdCoeff1->Location = System::Drawing::Point(435, 333);
			   this->cmdCoeff1->Name = L"cmdCoeff1";
			   this->cmdCoeff1->Size = System::Drawing::Size(59, 23);
			   this->cmdCoeff1->TabIndex = 192;
			   this->cmdCoeff1->Text = L"Reset";
			   this->cmdCoeff1->UseVisualStyleBackColor = false;
			   this->cmdCoeff1->Click += gcnew System::EventHandler(this, &HeartForm::cmdCoeff1_Click);
			   // 
			   // numDensity
			   // 
			   this->numDensity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numDensity->DecimalPlaces = 2;
			   this->numDensity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numDensity->ForeColor = System::Drawing::Color::White;
			   this->numDensity->Location = System::Drawing::Point(213, 300);
			   this->numDensity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			   this->numDensity->Name = L"numDensity";
			   this->numDensity->Size = System::Drawing::Size(134, 26);
			   this->numDensity->TabIndex = 186;
			   this->numDensity->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numDensity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 106, 0, 0, 131072 });
			   this->numDensity->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numDensity_ValueChanged);
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
			   this->cmdDensity->Location = System::Drawing::Point(435, 301);
			   this->cmdDensity->Name = L"cmdDensity";
			   this->cmdDensity->Size = System::Drawing::Size(59, 23);
			   this->cmdDensity->TabIndex = 185;
			   this->cmdDensity->Text = L"Reset";
			   this->cmdDensity->UseVisualStyleBackColor = false;
			   this->cmdDensity->Click += gcnew System::EventHandler(this, &HeartForm::cmdDensity_Click);
			   // 
			   // lblUnitDensity1
			   // 
			   this->lblUnitDensity1->AutoSize = true;
			   this->lblUnitDensity1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitDensity1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitDensity1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitDensity1->Location = System::Drawing::Point(365, 301);
			   this->lblUnitDensity1->Name = L"lblUnitDensity1";
			   this->lblUnitDensity1->Size = System::Drawing::Size(43, 19);
			   this->lblUnitDensity1->TabIndex = 184;
			   this->lblUnitDensity1->Text = L"g/cm";
			   // 
			   // lblDensity
			   // 
			   this->lblDensity->AutoSize = true;
			   this->lblDensity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblDensity->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblDensity->ForeColor = System::Drawing::Color::White;
			   this->lblDensity->Location = System::Drawing::Point(15, 301);
			   this->lblDensity->Name = L"lblDensity";
			   this->lblDensity->Size = System::Drawing::Size(97, 19);
			   this->lblDensity->TabIndex = 180;
			   this->lblDensity->Text = L"Blood density";
			   // 
			   // lblRVEnd
			   // 
			   this->lblRVEnd->AutoSize = true;
			   this->lblRVEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRVEnd->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRVEnd->ForeColor = System::Drawing::Color::White;
			   this->lblRVEnd->Location = System::Drawing::Point(14, 268);
			   this->lblRVEnd->Name = L"lblRVEnd";
			   this->lblRVEnd->Size = System::Drawing::Size(176, 19);
			   this->lblRVEnd->TabIndex = 174;
			   this->lblRVEnd->Text = L"RV end systolic elastance";
			   // 
			   // numRVEnd
			   // 
			   this->numRVEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numRVEnd->DecimalPlaces = 2;
			   this->numRVEnd->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numRVEnd->ForeColor = System::Drawing::Color::White;
			   this->numRVEnd->Location = System::Drawing::Point(214, 268);
			   this->numRVEnd->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numRVEnd->Name = L"numRVEnd";
			   this->numRVEnd->Size = System::Drawing::Size(134, 26);
			   this->numRVEnd->TabIndex = 173;
			   this->numRVEnd->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numRVEnd->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numRVEnd->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numRVEnd_ValueChanged);
			   // 
			   // cmdRVEnd
			   // 
			   this->cmdRVEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdRVEnd->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdRVEnd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdRVEnd->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdRVEnd->ForeColor = System::Drawing::Color::White;
			   this->cmdRVEnd->Location = System::Drawing::Point(434, 269);
			   this->cmdRVEnd->Name = L"cmdRVEnd";
			   this->cmdRVEnd->Size = System::Drawing::Size(59, 23);
			   this->cmdRVEnd->TabIndex = 172;
			   this->cmdRVEnd->Text = L"Reset";
			   this->cmdRVEnd->UseVisualStyleBackColor = false;
			   this->cmdRVEnd->Click += gcnew System::EventHandler(this, &HeartForm::cmdRVEnd_Click);
			   // 
			   // numLVEnd
			   // 
			   this->numLVEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numLVEnd->DecimalPlaces = 2;
			   this->numLVEnd->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numLVEnd->ForeColor = System::Drawing::Color::White;
			   this->numLVEnd->Location = System::Drawing::Point(214, 236);
			   this->numLVEnd->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numLVEnd->Name = L"numLVEnd";
			   this->numLVEnd->Size = System::Drawing::Size(134, 26);
			   this->numLVEnd->TabIndex = 170;
			   this->numLVEnd->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numLVEnd->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 65536 });
			   this->numLVEnd->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numLVEnd_ValueChanged);
			   // 
			   // cmdLVEnd
			   // 
			   this->cmdLVEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdLVEnd->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdLVEnd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdLVEnd->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdLVEnd->ForeColor = System::Drawing::Color::White;
			   this->cmdLVEnd->Location = System::Drawing::Point(434, 237);
			   this->cmdLVEnd->Name = L"cmdLVEnd";
			   this->cmdLVEnd->Size = System::Drawing::Size(59, 23);
			   this->cmdLVEnd->TabIndex = 169;
			   this->cmdLVEnd->Text = L"Reset";
			   this->cmdLVEnd->UseVisualStyleBackColor = false;
			   this->cmdLVEnd->Click += gcnew System::EventHandler(this, &HeartForm::cmdLVEnd_Click);
			   // 
			   // numAtrialKey
			   // 
			   this->numAtrialKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numAtrialKey->DecimalPlaces = 2;
			   this->numAtrialKey->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numAtrialKey->ForeColor = System::Drawing::Color::White;
			   this->numAtrialKey->Location = System::Drawing::Point(214, 204);
			   this->numAtrialKey->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numAtrialKey->Name = L"numAtrialKey";
			   this->numAtrialKey->Size = System::Drawing::Size(134, 26);
			   this->numAtrialKey->TabIndex = 167;
			   this->numAtrialKey->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numAtrialKey->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 131072 });
			   this->numAtrialKey->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numAtrialKey_ValueChanged);
			   // 
			   // cmdAtrialKey
			   // 
			   this->cmdAtrialKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdAtrialKey->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdAtrialKey->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdAtrialKey->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdAtrialKey->ForeColor = System::Drawing::Color::White;
			   this->cmdAtrialKey->Location = System::Drawing::Point(434, 205);
			   this->cmdAtrialKey->Name = L"cmdAtrialKey";
			   this->cmdAtrialKey->Size = System::Drawing::Size(59, 23);
			   this->cmdAtrialKey->TabIndex = 166;
			   this->cmdAtrialKey->Text = L"Reset";
			   this->cmdAtrialKey->UseVisualStyleBackColor = false;
			   this->cmdAtrialKey->Click += gcnew System::EventHandler(this, &HeartForm::cmdAtrialKey_Click);
			   // 
			   // lblUnitAtrialKey
			   // 
			   this->lblUnitAtrialKey->AutoSize = true;
			   this->lblUnitAtrialKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitAtrialKey->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitAtrialKey->ForeColor = System::Drawing::Color::White;
			   this->lblUnitAtrialKey->Location = System::Drawing::Point(366, 205);
			   this->lblUnitAtrialKey->Name = L"lblUnitAtrialKey";
			   this->lblUnitAtrialKey->Size = System::Drawing::Size(19, 19);
			   this->lblUnitAtrialKey->TabIndex = 165;
			   this->lblUnitAtrialKey->Text = L"%";
			   // 
			   // numRadius0
			   // 
			   this->numRadius0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numRadius0->DecimalPlaces = 2;
			   this->numRadius0->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numRadius0->ForeColor = System::Drawing::Color::White;
			   this->numRadius0->Location = System::Drawing::Point(214, 172);
			   this->numRadius0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numRadius0->Name = L"numRadius0";
			   this->numRadius0->Size = System::Drawing::Size(134, 26);
			   this->numRadius0->TabIndex = 164;
			   this->numRadius0->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numRadius0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->numRadius0->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numRadius0_ValueChanged);
			   // 
			   // cmdRadius0
			   // 
			   this->cmdRadius0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdRadius0->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdRadius0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdRadius0->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdRadius0->ForeColor = System::Drawing::Color::White;
			   this->cmdRadius0->Location = System::Drawing::Point(434, 173);
			   this->cmdRadius0->Name = L"cmdRadius0";
			   this->cmdRadius0->Size = System::Drawing::Size(59, 23);
			   this->cmdRadius0->TabIndex = 163;
			   this->cmdRadius0->Text = L"Reset";
			   this->cmdRadius0->UseVisualStyleBackColor = false;
			   this->cmdRadius0->Click += gcnew System::EventHandler(this, &HeartForm::cmdRadius0_Click);
			   // 
			   // lblUnitRadius01
			   // 
			   this->lblUnitRadius01->AutoSize = true;
			   this->lblUnitRadius01->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRadius01->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRadius01->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRadius01->Location = System::Drawing::Point(366, 173);
			   this->lblUnitRadius01->Name = L"lblUnitRadius01";
			   this->lblUnitRadius01->Size = System::Drawing::Size(30, 19);
			   this->lblUnitRadius01->TabIndex = 162;
			   this->lblUnitRadius01->Text = L"cm";
			   // 
			   // numMaxElas
			   // 
			   this->numMaxElas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numMaxElas->DecimalPlaces = 2;
			   this->numMaxElas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numMaxElas->ForeColor = System::Drawing::Color::White;
			   this->numMaxElas->Location = System::Drawing::Point(215, 140);
			   this->numMaxElas->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			   this->numMaxElas->Name = L"numMaxElas";
			   this->numMaxElas->Size = System::Drawing::Size(134, 26);
			   this->numMaxElas->TabIndex = 158;
			   this->numMaxElas->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numMaxElas->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 65536 });
			   this->numMaxElas->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numMaxElas_ValueChanged);
			   // 
			   // cmdMaxElas
			   // 
			   this->cmdMaxElas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdMaxElas->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdMaxElas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdMaxElas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdMaxElas->ForeColor = System::Drawing::Color::White;
			   this->cmdMaxElas->Location = System::Drawing::Point(435, 141);
			   this->cmdMaxElas->Name = L"cmdMaxElas";
			   this->cmdMaxElas->Size = System::Drawing::Size(59, 23);
			   this->cmdMaxElas->TabIndex = 157;
			   this->cmdMaxElas->Text = L"Reset";
			   this->cmdMaxElas->UseVisualStyleBackColor = false;
			   this->cmdMaxElas->Click += gcnew System::EventHandler(this, &HeartForm::cmdMaxElas_Click);
			   // 
			   // numMinElas
			   // 
			   this->numMinElas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numMinElas->DecimalPlaces = 2;
			   this->numMinElas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numMinElas->ForeColor = System::Drawing::Color::White;
			   this->numMinElas->Location = System::Drawing::Point(215, 108);
			   this->numMinElas->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			   this->numMinElas->Name = L"numMinElas";
			   this->numMinElas->Size = System::Drawing::Size(134, 26);
			   this->numMinElas->TabIndex = 155;
			   this->numMinElas->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numMinElas->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 65536 });
			   this->numMinElas->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numMinElas_ValueChanged);
			   // 
			   // cmdMinElas
			   // 
			   this->cmdMinElas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdMinElas->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdMinElas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdMinElas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdMinElas->ForeColor = System::Drawing::Color::White;
			   this->cmdMinElas->Location = System::Drawing::Point(435, 109);
			   this->cmdMinElas->Name = L"cmdMinElas";
			   this->cmdMinElas->Size = System::Drawing::Size(59, 23);
			   this->cmdMinElas->TabIndex = 154;
			   this->cmdMinElas->Text = L"Reset";
			   this->cmdMinElas->UseVisualStyleBackColor = false;
			   this->cmdMinElas->Click += gcnew System::EventHandler(this, &HeartForm::cmdMinElas_Click);
			   // 
			   // numDuration
			   // 
			   this->numDuration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numDuration->DecimalPlaces = 2;
			   this->numDuration->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numDuration->ForeColor = System::Drawing::Color::White;
			   this->numDuration->Location = System::Drawing::Point(214, 76);
			   this->numDuration->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->numDuration->Name = L"numDuration";
			   this->numDuration->Size = System::Drawing::Size(134, 26);
			   this->numDuration->TabIndex = 134;
			   this->numDuration->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numDuration->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 65536 });
			   this->numDuration->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numDuration_ValueChanged);
			   // 
			   // cmdDuration
			   // 
			   this->cmdDuration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdDuration->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdDuration->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdDuration->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdDuration->ForeColor = System::Drawing::Color::White;
			   this->cmdDuration->Location = System::Drawing::Point(434, 77);
			   this->cmdDuration->Name = L"cmdDuration";
			   this->cmdDuration->Size = System::Drawing::Size(59, 23);
			   this->cmdDuration->TabIndex = 133;
			   this->cmdDuration->Text = L"Reset";
			   this->cmdDuration->UseVisualStyleBackColor = false;
			   this->cmdDuration->Click += gcnew System::EventHandler(this, &HeartForm::cmdDuration_Click);
			   // 
			   // lblUnitDuration
			   // 
			   this->lblUnitDuration->AutoSize = true;
			   this->lblUnitDuration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitDuration->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitDuration->ForeColor = System::Drawing::Color::White;
			   this->lblUnitDuration->Location = System::Drawing::Point(365, 77);
			   this->lblUnitDuration->Name = L"lblUnitDuration";
			   this->lblUnitDuration->Size = System::Drawing::Size(16, 19);
			   this->lblUnitDuration->TabIndex = 132;
			   this->lblUnitDuration->Text = L"s";
			   // 
			   // numStrokeVolume
			   // 
			   this->numStrokeVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numStrokeVolume->DecimalPlaces = 2;
			   this->numStrokeVolume->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numStrokeVolume->ForeColor = System::Drawing::Color::White;
			   this->numStrokeVolume->Location = System::Drawing::Point(214, 44);
			   this->numStrokeVolume->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numStrokeVolume->Name = L"numStrokeVolume";
			   this->numStrokeVolume->Size = System::Drawing::Size(134, 26);
			   this->numStrokeVolume->TabIndex = 131;
			   this->numStrokeVolume->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numStrokeVolume->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			   this->numStrokeVolume->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numStrokeVolume_ValueChanged);
			   // 
			   // cmdStrokeVolume
			   // 
			   this->cmdStrokeVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdStrokeVolume->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdStrokeVolume->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdStrokeVolume->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdStrokeVolume->ForeColor = System::Drawing::Color::White;
			   this->cmdStrokeVolume->Location = System::Drawing::Point(434, 45);
			   this->cmdStrokeVolume->Name = L"cmdStrokeVolume";
			   this->cmdStrokeVolume->Size = System::Drawing::Size(59, 23);
			   this->cmdStrokeVolume->TabIndex = 130;
			   this->cmdStrokeVolume->Text = L"Reset";
			   this->cmdStrokeVolume->UseVisualStyleBackColor = false;
			   this->cmdStrokeVolume->Click += gcnew System::EventHandler(this, &HeartForm::cmdStrokeVolume_Click);
			   // 
			   // lblUnitStrokeVolume
			   // 
			   this->lblUnitStrokeVolume->AutoSize = true;
			   this->lblUnitStrokeVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitStrokeVolume->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitStrokeVolume->ForeColor = System::Drawing::Color::White;
			   this->lblUnitStrokeVolume->Location = System::Drawing::Point(362, 45);
			   this->lblUnitStrokeVolume->Name = L"lblUnitStrokeVolume";
			   this->lblUnitStrokeVolume->Size = System::Drawing::Size(26, 19);
			   this->lblUnitStrokeVolume->TabIndex = 129;
			   this->lblUnitStrokeVolume->Text = L"ml";
			   // 
			   // numHeartRate
			   // 
			   this->numHeartRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numHeartRate->DecimalPlaces = 2;
			   this->numHeartRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numHeartRate->ForeColor = System::Drawing::Color::White;
			   this->numHeartRate->Location = System::Drawing::Point(214, 12);
			   this->numHeartRate->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			   this->numHeartRate->Name = L"numHeartRate";
			   this->numHeartRate->Size = System::Drawing::Size(134, 26);
			   this->numHeartRate->TabIndex = 128;
			   this->numHeartRate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numHeartRate->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 70, 0, 0, 0 });
			   this->numHeartRate->ValueChanged += gcnew System::EventHandler(this, &HeartForm::numHeartRate_ValueChanged);
			   // 
			   // cmdHeartRate
			   // 
			   this->cmdHeartRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdHeartRate->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdHeartRate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdHeartRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdHeartRate->ForeColor = System::Drawing::Color::White;
			   this->cmdHeartRate->Location = System::Drawing::Point(434, 13);
			   this->cmdHeartRate->Name = L"cmdHeartRate";
			   this->cmdHeartRate->Size = System::Drawing::Size(59, 23);
			   this->cmdHeartRate->TabIndex = 127;
			   this->cmdHeartRate->Text = L"Reset";
			   this->cmdHeartRate->UseVisualStyleBackColor = false;
			   this->cmdHeartRate->Click += gcnew System::EventHandler(this, &HeartForm::cmdHeartRate_Click);
			   // 
			   // lblUnitHeartRate
			   // 
			   this->lblUnitHeartRate->AutoSize = true;
			   this->lblUnitHeartRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitHeartRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitHeartRate->ForeColor = System::Drawing::Color::White;
			   this->lblUnitHeartRate->Location = System::Drawing::Point(362, 13);
			   this->lblUnitHeartRate->Name = L"lblUnitHeartRate";
			   this->lblUnitHeartRate->Size = System::Drawing::Size(41, 19);
			   this->lblUnitHeartRate->TabIndex = 126;
			   this->lblUnitHeartRate->Text = L"bpm";
			   // 
			   // lblLVEnd
			   // 
			   this->lblLVEnd->AutoSize = true;
			   this->lblLVEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLVEnd->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLVEnd->ForeColor = System::Drawing::Color::White;
			   this->lblLVEnd->Location = System::Drawing::Point(15, 237);
			   this->lblLVEnd->Name = L"lblLVEnd";
			   this->lblLVEnd->Size = System::Drawing::Size(174, 19);
			   this->lblLVEnd->TabIndex = 119;
			   this->lblLVEnd->Text = L"LV end systolic elastance";
			   // 
			   // lblAtrialKey
			   // 
			   this->lblAtrialKey->AutoSize = true;
			   this->lblAtrialKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblAtrialKey->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblAtrialKey->ForeColor = System::Drawing::Color::White;
			   this->lblAtrialKey->Location = System::Drawing::Point(15, 205);
			   this->lblAtrialKey->Name = L"lblAtrialKey";
			   this->lblAtrialKey->Size = System::Drawing::Size(101, 19);
			   this->lblAtrialKey->TabIndex = 118;
			   this->lblAtrialKey->Text = L"Atrial keytime";
			   // 
			   // lblRadius0
			   // 
			   this->lblRadius0->AutoSize = true;
			   this->lblRadius0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRadius0->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRadius0->ForeColor = System::Drawing::Color::White;
			   this->lblRadius0->Location = System::Drawing::Point(14, 172);
			   this->lblRadius0->Name = L"lblRadius0";
			   this->lblRadius0->Size = System::Drawing::Size(173, 19);
			   this->lblRadius0->TabIndex = 117;
			   this->lblRadius0->Text = L"Atrial radius at 0 mmHg";
			   // 
			   // lblMaxElas
			   // 
			   this->lblMaxElas->AutoSize = true;
			   this->lblMaxElas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblMaxElas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMaxElas->ForeColor = System::Drawing::Color::White;
			   this->lblMaxElas->Location = System::Drawing::Point(13, 141);
			   this->lblMaxElas->Name = L"lblMaxElas";
			   this->lblMaxElas->Size = System::Drawing::Size(186, 19);
			   this->lblMaxElas->TabIndex = 115;
			   this->lblMaxElas->Text = L"Atrial maximum elastance";
			   // 
			   // lblMinElas
			   // 
			   this->lblMinElas->AutoSize = true;
			   this->lblMinElas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblMinElas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMinElas->ForeColor = System::Drawing::Color::White;
			   this->lblMinElas->Location = System::Drawing::Point(13, 109);
			   this->lblMinElas->Name = L"lblMinElas";
			   this->lblMinElas->Size = System::Drawing::Size(181, 19);
			   this->lblMinElas->TabIndex = 114;
			   this->lblMinElas->Text = L"Atrial minimum elastance";
			   // 
			   // lblDuration
			   // 
			   this->lblDuration->AutoSize = true;
			   this->lblDuration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblDuration->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblDuration->ForeColor = System::Drawing::Color::White;
			   this->lblDuration->Location = System::Drawing::Point(13, 77);
			   this->lblDuration->Name = L"lblDuration";
			   this->lblDuration->Size = System::Drawing::Size(142, 19);
			   this->lblDuration->TabIndex = 106;
			   this->lblDuration->Text = L"Duration heart cycle";
			   // 
			   // lblStrokeVolume
			   // 
			   this->lblStrokeVolume->AutoSize = true;
			   this->lblStrokeVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblStrokeVolume->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblStrokeVolume->ForeColor = System::Drawing::Color::White;
			   this->lblStrokeVolume->Location = System::Drawing::Point(14, 45);
			   this->lblStrokeVolume->Name = L"lblStrokeVolume";
			   this->lblStrokeVolume->Size = System::Drawing::Size(103, 19);
			   this->lblStrokeVolume->TabIndex = 105;
			   this->lblStrokeVolume->Text = L"Stroke volume";
			   // 
			   // lblHeartRate
			   // 
			   this->lblHeartRate->AutoSize = true;
			   this->lblHeartRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblHeartRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblHeartRate->ForeColor = System::Drawing::Color::White;
			   this->lblHeartRate->Location = System::Drawing::Point(14, 13);
			   this->lblHeartRate->Name = L"lblHeartRate";
			   this->lblHeartRate->Size = System::Drawing::Size(79, 19);
			   this->lblHeartRate->TabIndex = 104;
			   this->lblHeartRate->Text = L"Heart rate";
			   // 
			   // lblUnitFlowRate
			   // 
			   this->lblUnitFlowRate->AutoSize = true;
			   this->lblUnitFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->lblUnitFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblUnitFlowRate->Location = System::Drawing::Point(340, 141);
			   this->lblUnitFlowRate->Name = L"lblUnitFlowRate";
			   this->lblUnitFlowRate->Size = System::Drawing::Size(42, 19);
			   this->lblUnitFlowRate->TabIndex = 108;
			   this->lblUnitFlowRate->Text = L"l/min";
			   // 
			   // lblNumFlowRate
			   // 
			   this->lblNumFlowRate->AutoSize = true;
			   this->lblNumFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->lblNumFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblNumFlowRate->Location = System::Drawing::Point(265, 141);
			   this->lblNumFlowRate->Name = L"lblNumFlowRate";
			   this->lblNumFlowRate->Size = System::Drawing::Size(34, 19);
			   this->lblNumFlowRate->TabIndex = 107;
			   this->lblNumFlowRate->Text = L"100";
			   // 
			   // lblFlowRate
			   // 
			   this->lblFlowRate->AutoSize = true;
			   this->lblFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->lblFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblFlowRate->Location = System::Drawing::Point(156, 141);
			   this->lblFlowRate->Name = L"lblFlowRate";
			   this->lblFlowRate->Size = System::Drawing::Size(73, 19);
			   this->lblFlowRate->TabIndex = 106;
			   this->lblFlowRate->Text = L"Flow Rate";
			   // 
			   // pnRightVentricle
			   // 
			   this->pnRightVentricle->AutoScroll = true;
			   this->pnRightVentricle->AutoSize = true;
			   this->pnRightVentricle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnRightVentricle->Controls->Add(this->lblUnitRVInertance2);
			   this->pnRightVentricle->Controls->Add(this->lblUnitRVRadius);
			   this->pnRightVentricle->Controls->Add(this->lblUnitRVPressureTotal);
			   this->pnRightVentricle->Controls->Add(this->lblUnitRVInertance1);
			   this->pnRightVentricle->Controls->Add(this->lblUnitRVInertance3);
			   this->pnRightVentricle->Controls->Add(this->lblNumRVRadius);
			   this->pnRightVentricle->Controls->Add(this->lblRVRadius);
			   this->pnRightVentricle->Controls->Add(this->lblNumRVPressureTotal);
			   this->pnRightVentricle->Controls->Add(this->lblRVPressureTotal);
			   this->pnRightVentricle->Controls->Add(this->lblNumRVInertance);
			   this->pnRightVentricle->Controls->Add(this->lblRVInertance);
			   this->pnRightVentricle->Location = System::Drawing::Point(820, 203);
			   this->pnRightVentricle->Name = L"pnRightVentricle";
			   this->pnRightVentricle->Size = System::Drawing::Size(221, 88);
			   this->pnRightVentricle->TabIndex = 105;
			   // 
			   // lblUnitRVInertance2
			   // 
			   this->lblUnitRVInertance2->AutoSize = true;
			   this->lblUnitRVInertance2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRVInertance2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 4, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitRVInertance2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRVInertance2->Location = System::Drawing::Point(189, 10);
			   this->lblUnitRVInertance2->Name = L"lblUnitRVInertance2";
			   this->lblUnitRVInertance2->Size = System::Drawing::Size(7, 7);
			   this->lblUnitRVInertance2->TabIndex = 156;
			   this->lblUnitRVInertance2->Text = L"2";
			   // 
			   // lblUnitRVRadius
			   // 
			   this->lblUnitRVRadius->AutoSize = true;
			   this->lblUnitRVRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRVRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRVRadius->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRVRadius->Location = System::Drawing::Point(161, 65);
			   this->lblUnitRVRadius->Name = L"lblUnitRVRadius";
			   this->lblUnitRVRadius->Size = System::Drawing::Size(27, 17);
			   this->lblUnitRVRadius->TabIndex = 155;
			   this->lblUnitRVRadius->Text = L"cm";
			   // 
			   // lblUnitRVPressureTotal
			   // 
			   this->lblUnitRVPressureTotal->AutoSize = true;
			   this->lblUnitRVPressureTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRVPressureTotal->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitRVPressureTotal->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRVPressureTotal->Location = System::Drawing::Point(162, 37);
			   this->lblUnitRVPressureTotal->Name = L"lblUnitRVPressureTotal";
			   this->lblUnitRVPressureTotal->Size = System::Drawing::Size(47, 17);
			   this->lblUnitRVPressureTotal->TabIndex = 154;
			   this->lblUnitRVPressureTotal->Text = L"mmHg";
			   // 
			   // lblUnitRVInertance1
			   // 
			   this->lblUnitRVInertance1->AutoSize = true;
			   this->lblUnitRVInertance1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRVInertance1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitRVInertance1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRVInertance1->Location = System::Drawing::Point(160, 10);
			   this->lblUnitRVInertance1->Name = L"lblUnitRVInertance1";
			   this->lblUnitRVInertance1->Size = System::Drawing::Size(32, 13);
			   this->lblUnitRVInertance1->TabIndex = 151;
			   this->lblUnitRVInertance1->Text = L"Pa · s";
			   // 
			   // lblUnitRVInertance3
			   // 
			   this->lblUnitRVInertance3->AutoSize = true;
			   this->lblUnitRVInertance3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRVInertance3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitRVInertance3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRVInertance3->Location = System::Drawing::Point(192, 10);
			   this->lblUnitRVInertance3->Name = L"lblUnitRVInertance3";
			   this->lblUnitRVInertance3->Size = System::Drawing::Size(21, 13);
			   this->lblUnitRVInertance3->TabIndex = 157;
			   this->lblUnitRVInertance3->Text = L"/ml";
			   // 
			   // lblNumRVRadius
			   // 
			   this->lblNumRVRadius->AutoSize = true;
			   this->lblNumRVRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumRVRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumRVRadius->ForeColor = System::Drawing::Color::White;
			   this->lblNumRVRadius->Location = System::Drawing::Point(97, 65);
			   this->lblNumRVRadius->Name = L"lblNumRVRadius";
			   this->lblNumRVRadius->Size = System::Drawing::Size(56, 17);
			   this->lblNumRVRadius->TabIndex = 143;
			   this->lblNumRVRadius->Text = L"000.00";
			   // 
			   // lblRVRadius
			   // 
			   this->lblRVRadius->AutoSize = true;
			   this->lblRVRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRVRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRVRadius->ForeColor = System::Drawing::Color::White;
			   this->lblRVRadius->Location = System::Drawing::Point(6, 65);
			   this->lblRVRadius->Name = L"lblRVRadius";
			   this->lblRVRadius->Size = System::Drawing::Size(48, 17);
			   this->lblRVRadius->TabIndex = 141;
			   this->lblRVRadius->Text = L"Radius";
			   // 
			   // lblNumRVPressureTotal
			   // 
			   this->lblNumRVPressureTotal->AutoSize = true;
			   this->lblNumRVPressureTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumRVPressureTotal->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumRVPressureTotal->ForeColor = System::Drawing::Color::White;
			   this->lblNumRVPressureTotal->Location = System::Drawing::Point(97, 37);
			   this->lblNumRVPressureTotal->Name = L"lblNumRVPressureTotal";
			   this->lblNumRVPressureTotal->Size = System::Drawing::Size(56, 17);
			   this->lblNumRVPressureTotal->TabIndex = 140;
			   this->lblNumRVPressureTotal->Text = L"000.00";
			   // 
			   // lblRVPressureTotal
			   // 
			   this->lblRVPressureTotal->AutoSize = true;
			   this->lblRVPressureTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRVPressureTotal->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblRVPressureTotal->ForeColor = System::Drawing::Color::White;
			   this->lblRVPressureTotal->Location = System::Drawing::Point(7, 37);
			   this->lblRVPressureTotal->Name = L"lblRVPressureTotal";
			   this->lblRVPressureTotal->Size = System::Drawing::Size(59, 17);
			   this->lblRVPressureTotal->TabIndex = 138;
			   this->lblRVPressureTotal->Text = L"Pressure";
			   // 
			   // lblNumRVInertance
			   // 
			   this->lblNumRVInertance->AutoSize = true;
			   this->lblNumRVInertance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumRVInertance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumRVInertance->ForeColor = System::Drawing::Color::White;
			   this->lblNumRVInertance->Location = System::Drawing::Point(97, 8);
			   this->lblNumRVInertance->Name = L"lblNumRVInertance";
			   this->lblNumRVInertance->Size = System::Drawing::Size(56, 17);
			   this->lblNumRVInertance->TabIndex = 133;
			   this->lblNumRVInertance->Text = L"000.00";
			   // 
			   // lblRVInertance
			   // 
			   this->lblRVInertance->AutoSize = true;
			   this->lblRVInertance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRVInertance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRVInertance->ForeColor = System::Drawing::Color::White;
			   this->lblRVInertance->Location = System::Drawing::Point(6, 8);
			   this->lblRVInertance->Name = L"lblRVInertance";
			   this->lblRVInertance->Size = System::Drawing::Size(64, 17);
			   this->lblRVInertance->TabIndex = 128;
			   this->lblRVInertance->Text = L"Inertance";
			   // 
			   // pnLeftVentricle
			   // 
			   this->pnLeftVentricle->AutoScroll = true;
			   this->pnLeftVentricle->AutoSize = true;
			   this->pnLeftVentricle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnLeftVentricle->Controls->Add(this->lblUnitLVInertance2);
			   this->pnLeftVentricle->Controls->Add(this->lblUnitLVInertance1);
			   this->pnLeftVentricle->Controls->Add(this->lblNumLVRadius);
			   this->pnLeftVentricle->Controls->Add(this->lblUnitLVRadius);
			   this->pnLeftVentricle->Controls->Add(this->lblLVRadius);
			   this->pnLeftVentricle->Controls->Add(this->lblNumLVPressureTotal);
			   this->pnLeftVentricle->Controls->Add(this->lblUnitLVPressureTotal);
			   this->pnLeftVentricle->Controls->Add(this->lblLVPressureTotal);
			   this->pnLeftVentricle->Controls->Add(this->lblNumLVInertance);
			   this->pnLeftVentricle->Controls->Add(this->lblLVInertance);
			   this->pnLeftVentricle->Controls->Add(this->lblUnitLVInertance3);
			   this->pnLeftVentricle->Location = System::Drawing::Point(597, 203);
			   this->pnLeftVentricle->Name = L"pnLeftVentricle";
			   this->pnLeftVentricle->Size = System::Drawing::Size(220, 88);
			   this->pnLeftVentricle->TabIndex = 104;
			   // 
			   // lblUnitLVInertance2
			   // 
			   this->lblUnitLVInertance2->AutoSize = true;
			   this->lblUnitLVInertance2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLVInertance2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 4, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitLVInertance2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLVInertance2->Location = System::Drawing::Point(193, 11);
			   this->lblUnitLVInertance2->Name = L"lblUnitLVInertance2";
			   this->lblUnitLVInertance2->Size = System::Drawing::Size(7, 7);
			   this->lblUnitLVInertance2->TabIndex = 128;
			   this->lblUnitLVInertance2->Text = L"2";
			   // 
			   // lblUnitLVInertance1
			   // 
			   this->lblUnitLVInertance1->AutoSize = true;
			   this->lblUnitLVInertance1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLVInertance1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitLVInertance1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLVInertance1->Location = System::Drawing::Point(164, 11);
			   this->lblUnitLVInertance1->Name = L"lblUnitLVInertance1";
			   this->lblUnitLVInertance1->Size = System::Drawing::Size(32, 13);
			   this->lblUnitLVInertance1->TabIndex = 111;
			   this->lblUnitLVInertance1->Text = L"Pa · s";
			   // 
			   // lblNumLVRadius
			   // 
			   this->lblNumLVRadius->AutoSize = true;
			   this->lblNumLVRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumLVRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumLVRadius->ForeColor = System::Drawing::Color::White;
			   this->lblNumLVRadius->Location = System::Drawing::Point(97, 64);
			   this->lblNumLVRadius->Name = L"lblNumLVRadius";
			   this->lblNumLVRadius->Size = System::Drawing::Size(56, 17);
			   this->lblNumLVRadius->TabIndex = 127;
			   this->lblNumLVRadius->Text = L"000.00";
			   // 
			   // lblUnitLVRadius
			   // 
			   this->lblUnitLVRadius->AutoSize = true;
			   this->lblUnitLVRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLVRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitLVRadius->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLVRadius->Location = System::Drawing::Point(169, 64);
			   this->lblUnitLVRadius->Name = L"lblUnitLVRadius";
			   this->lblUnitLVRadius->Size = System::Drawing::Size(27, 17);
			   this->lblUnitLVRadius->TabIndex = 126;
			   this->lblUnitLVRadius->Text = L"cm";
			   // 
			   // lblLVRadius
			   // 
			   this->lblLVRadius->AutoSize = true;
			   this->lblLVRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLVRadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLVRadius->ForeColor = System::Drawing::Color::White;
			   this->lblLVRadius->Location = System::Drawing::Point(6, 64);
			   this->lblLVRadius->Name = L"lblLVRadius";
			   this->lblLVRadius->Size = System::Drawing::Size(48, 17);
			   this->lblLVRadius->TabIndex = 125;
			   this->lblLVRadius->Text = L"Radius";
			   // 
			   // lblNumLVPressureTotal
			   // 
			   this->lblNumLVPressureTotal->AutoSize = true;
			   this->lblNumLVPressureTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumLVPressureTotal->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumLVPressureTotal->ForeColor = System::Drawing::Color::White;
			   this->lblNumLVPressureTotal->Location = System::Drawing::Point(97, 36);
			   this->lblNumLVPressureTotal->Name = L"lblNumLVPressureTotal";
			   this->lblNumLVPressureTotal->Size = System::Drawing::Size(56, 17);
			   this->lblNumLVPressureTotal->TabIndex = 124;
			   this->lblNumLVPressureTotal->Text = L"000.00";
			   // 
			   // lblUnitLVPressureTotal
			   // 
			   this->lblUnitLVPressureTotal->AutoSize = true;
			   this->lblUnitLVPressureTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLVPressureTotal->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitLVPressureTotal->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLVPressureTotal->Location = System::Drawing::Point(168, 36);
			   this->lblUnitLVPressureTotal->Name = L"lblUnitLVPressureTotal";
			   this->lblUnitLVPressureTotal->Size = System::Drawing::Size(47, 17);
			   this->lblUnitLVPressureTotal->TabIndex = 123;
			   this->lblUnitLVPressureTotal->Text = L"mmHg";
			   // 
			   // lblLVPressureTotal
			   // 
			   this->lblLVPressureTotal->AutoSize = true;
			   this->lblLVPressureTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLVPressureTotal->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblLVPressureTotal->ForeColor = System::Drawing::Color::White;
			   this->lblLVPressureTotal->Location = System::Drawing::Point(6, 36);
			   this->lblLVPressureTotal->Name = L"lblLVPressureTotal";
			   this->lblLVPressureTotal->Size = System::Drawing::Size(59, 17);
			   this->lblLVPressureTotal->TabIndex = 122;
			   this->lblLVPressureTotal->Text = L"Pressure";
			   // 
			   // lblNumLVInertance
			   // 
			   this->lblNumLVInertance->AutoSize = true;
			   this->lblNumLVInertance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumLVInertance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumLVInertance->ForeColor = System::Drawing::Color::White;
			   this->lblNumLVInertance->Location = System::Drawing::Point(97, 9);
			   this->lblNumLVInertance->Name = L"lblNumLVInertance";
			   this->lblNumLVInertance->Size = System::Drawing::Size(56, 17);
			   this->lblNumLVInertance->TabIndex = 116;
			   this->lblNumLVInertance->Text = L"000.00";
			   // 
			   // lblLVInertance
			   // 
			   this->lblLVInertance->AutoSize = true;
			   this->lblLVInertance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLVInertance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLVInertance->ForeColor = System::Drawing::Color::White;
			   this->lblLVInertance->Location = System::Drawing::Point(5, 9);
			   this->lblLVInertance->Name = L"lblLVInertance";
			   this->lblLVInertance->Size = System::Drawing::Size(64, 17);
			   this->lblLVInertance->TabIndex = 110;
			   this->lblLVInertance->Text = L"Inertance";
			   // 
			   // lblUnitLVInertance3
			   // 
			   this->lblUnitLVInertance3->AutoSize = true;
			   this->lblUnitLVInertance3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitLVInertance3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitLVInertance3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitLVInertance3->Location = System::Drawing::Point(196, 12);
			   this->lblUnitLVInertance3->Name = L"lblUnitLVInertance3";
			   this->lblUnitLVInertance3->Size = System::Drawing::Size(21, 13);
			   this->lblUnitLVInertance3->TabIndex = 129;
			   this->lblUnitLVInertance3->Text = L"/ml";
			   // 
			   // pnRightAtrium
			   // 
			   this->pnRightAtrium->AutoScroll = true;
			   this->pnRightAtrium->AutoSize = true;
			   this->pnRightAtrium->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnRightAtrium->Controls->Add(this->lblUnitRAElastance);
			   this->pnRightAtrium->Controls->Add(this->lblNumRARadius);
			   this->pnRightAtrium->Controls->Add(this->lblNumRAPressure);
			   this->pnRightAtrium->Controls->Add(this->lblNumRAElastance);
			   this->pnRightAtrium->Controls->Add(this->lblUnitRARadius);
			   this->pnRightAtrium->Controls->Add(this->lblRARadius);
			   this->pnRightAtrium->Controls->Add(this->lblUnitRAPressure);
			   this->pnRightAtrium->Controls->Add(this->lblRAPressure);
			   this->pnRightAtrium->Controls->Add(this->lblRAElastance);
			   this->pnRightAtrium->Location = System::Drawing::Point(375, 203);
			   this->pnRightAtrium->Name = L"pnRightAtrium";
			   this->pnRightAtrium->Size = System::Drawing::Size(217, 88);
			   this->pnRightAtrium->TabIndex = 103;
			   // 
			   // lblUnitRAElastance
			   // 
			   this->lblUnitRAElastance->AutoSize = true;
			   this->lblUnitRAElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRAElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 7, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitRAElastance->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRAElastance->Location = System::Drawing::Point(161, 13);
			   this->lblUnitRAElastance->Name = L"lblUnitRAElastance";
			   this->lblUnitRAElastance->Size = System::Drawing::Size(47, 12);
			   this->lblUnitRAElastance->TabIndex = 111;
			   this->lblUnitRAElastance->Text = L"mmHg/mL";
			   // 
			   // lblNumRARadius
			   // 
			   this->lblNumRARadius->AutoSize = true;
			   this->lblNumRARadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumRARadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumRARadius->ForeColor = System::Drawing::Color::White;
			   this->lblNumRARadius->Location = System::Drawing::Point(96, 66);
			   this->lblNumRARadius->Name = L"lblNumRARadius";
			   this->lblNumRARadius->Size = System::Drawing::Size(56, 17);
			   this->lblNumRARadius->TabIndex = 118;
			   this->lblNumRARadius->Text = L"000.00";
			   // 
			   // lblNumRAPressure
			   // 
			   this->lblNumRAPressure->AutoSize = true;
			   this->lblNumRAPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumRAPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumRAPressure->ForeColor = System::Drawing::Color::White;
			   this->lblNumRAPressure->Location = System::Drawing::Point(96, 37);
			   this->lblNumRAPressure->Name = L"lblNumRAPressure";
			   this->lblNumRAPressure->Size = System::Drawing::Size(56, 17);
			   this->lblNumRAPressure->TabIndex = 117;
			   this->lblNumRAPressure->Text = L"000.00";
			   // 
			   // lblNumRAElastance
			   // 
			   this->lblNumRAElastance->AutoSize = true;
			   this->lblNumRAElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumRAElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumRAElastance->ForeColor = System::Drawing::Color::White;
			   this->lblNumRAElastance->Location = System::Drawing::Point(96, 9);
			   this->lblNumRAElastance->Name = L"lblNumRAElastance";
			   this->lblNumRAElastance->Size = System::Drawing::Size(56, 17);
			   this->lblNumRAElastance->TabIndex = 116;
			   this->lblNumRAElastance->Text = L"000.00";
			   // 
			   // lblUnitRARadius
			   // 
			   this->lblUnitRARadius->AutoSize = true;
			   this->lblUnitRARadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRARadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitRARadius->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRARadius->Location = System::Drawing::Point(161, 66);
			   this->lblUnitRARadius->Name = L"lblUnitRARadius";
			   this->lblUnitRARadius->Size = System::Drawing::Size(27, 17);
			   this->lblUnitRARadius->TabIndex = 115;
			   this->lblUnitRARadius->Text = L"cm";
			   // 
			   // lblRARadius
			   // 
			   this->lblRARadius->AutoSize = true;
			   this->lblRARadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRARadius->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRARadius->ForeColor = System::Drawing::Color::White;
			   this->lblRARadius->Location = System::Drawing::Point(5, 66);
			   this->lblRARadius->Name = L"lblRARadius";
			   this->lblRARadius->Size = System::Drawing::Size(48, 17);
			   this->lblRARadius->TabIndex = 114;
			   this->lblRARadius->Text = L"Radius";
			   // 
			   // lblUnitRAPressure
			   // 
			   this->lblUnitRAPressure->AutoSize = true;
			   this->lblUnitRAPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitRAPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitRAPressure->ForeColor = System::Drawing::Color::White;
			   this->lblUnitRAPressure->Location = System::Drawing::Point(161, 37);
			   this->lblUnitRAPressure->Name = L"lblUnitRAPressure";
			   this->lblUnitRAPressure->Size = System::Drawing::Size(47, 17);
			   this->lblUnitRAPressure->TabIndex = 113;
			   this->lblUnitRAPressure->Text = L"mmHg";
			   // 
			   // lblRAPressure
			   // 
			   this->lblRAPressure->AutoSize = true;
			   this->lblRAPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRAPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRAPressure->ForeColor = System::Drawing::Color::White;
			   this->lblRAPressure->Location = System::Drawing::Point(5, 37);
			   this->lblRAPressure->Name = L"lblRAPressure";
			   this->lblRAPressure->Size = System::Drawing::Size(59, 17);
			   this->lblRAPressure->TabIndex = 112;
			   this->lblRAPressure->Text = L"Pressure";
			   // 
			   // lblRAElastance
			   // 
			   this->lblRAElastance->AutoSize = true;
			   this->lblRAElastance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRAElastance->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRAElastance->ForeColor = System::Drawing::Color::White;
			   this->lblRAElastance->Location = System::Drawing::Point(7, 9);
			   this->lblRAElastance->Name = L"lblRAElastance";
			   this->lblRAElastance->Size = System::Drawing::Size(66, 17);
			   this->lblRAElastance->TabIndex = 110;
			   this->lblRAElastance->Text = L"Elastance";
			   // 
			   // pnLeftAtriumTop
			   // 
			   this->pnLeftAtriumTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnLeftAtriumTop->Controls->Add(this->lblLeftAtrium);
			   this->pnLeftAtriumTop->Location = System::Drawing::Point(144, 174);
			   this->pnLeftAtriumTop->Name = L"pnLeftAtriumTop";
			   this->pnLeftAtriumTop->Size = System::Drawing::Size(225, 40);
			   this->pnLeftAtriumTop->TabIndex = 109;
			   // 
			   // lblLeftAtrium
			   // 
			   this->lblLeftAtrium->AutoSize = true;
			   this->lblLeftAtrium->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLeftAtrium->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLeftAtrium->ForeColor = System::Drawing::Color::White;
			   this->lblLeftAtrium->Location = System::Drawing::Point(6, 7);
			   this->lblLeftAtrium->Name = L"lblLeftAtrium";
			   this->lblLeftAtrium->Size = System::Drawing::Size(94, 19);
			   this->lblLeftAtrium->TabIndex = 100;
			   this->lblLeftAtrium->Text = L"LEFT ATRIUM";
			   // 
			   // pnRightAtriumTop
			   // 
			   this->pnRightAtriumTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnRightAtriumTop->Controls->Add(this->lblRightAtrium);
			   this->pnRightAtriumTop->Location = System::Drawing::Point(375, 174);
			   this->pnRightAtriumTop->Name = L"pnRightAtriumTop";
			   this->pnRightAtriumTop->Size = System::Drawing::Size(217, 40);
			   this->pnRightAtriumTop->TabIndex = 110;
			   // 
			   // lblRightAtrium
			   // 
			   this->lblRightAtrium->AutoSize = true;
			   this->lblRightAtrium->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRightAtrium->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRightAtrium->ForeColor = System::Drawing::Color::White;
			   this->lblRightAtrium->Location = System::Drawing::Point(5, 7);
			   this->lblRightAtrium->Name = L"lblRightAtrium";
			   this->lblRightAtrium->Size = System::Drawing::Size(106, 19);
			   this->lblRightAtrium->TabIndex = 100;
			   this->lblRightAtrium->Text = L"RIGHT ATRIUM";
			   // 
			   // pnLeftVentricleTop
			   // 
			   this->pnLeftVentricleTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnLeftVentricleTop->Controls->Add(this->lblLeftVentricle);
			   this->pnLeftVentricleTop->Location = System::Drawing::Point(597, 174);
			   this->pnLeftVentricleTop->Name = L"pnLeftVentricleTop";
			   this->pnLeftVentricleTop->Size = System::Drawing::Size(218, 40);
			   this->pnLeftVentricleTop->TabIndex = 111;
			   // 
			   // lblLeftVentricle
			   // 
			   this->lblLeftVentricle->AutoSize = true;
			   this->lblLeftVentricle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLeftVentricle->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblLeftVentricle->ForeColor = System::Drawing::Color::White;
			   this->lblLeftVentricle->Location = System::Drawing::Point(5, 7);
			   this->lblLeftVentricle->Name = L"lblLeftVentricle";
			   this->lblLeftVentricle->Size = System::Drawing::Size(116, 19);
			   this->lblLeftVentricle->TabIndex = 100;
			   this->lblLeftVentricle->Text = L"LEFT VENTRICLE";
			   // 
			   // pnRightVentricleTop
			   // 
			   this->pnRightVentricleTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnRightVentricleTop->Controls->Add(this->lblRightVentricle);
			   this->pnRightVentricleTop->Location = System::Drawing::Point(820, 174);
			   this->pnRightVentricleTop->Name = L"pnRightVentricleTop";
			   this->pnRightVentricleTop->Size = System::Drawing::Size(221, 40);
			   this->pnRightVentricleTop->TabIndex = 112;
			   // 
			   // lblRightVentricle
			   // 
			   this->lblRightVentricle->AutoSize = true;
			   this->lblRightVentricle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRightVentricle->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblRightVentricle->ForeColor = System::Drawing::Color::White;
			   this->lblRightVentricle->Location = System::Drawing::Point(6, 7);
			   this->lblRightVentricle->Name = L"lblRightVentricle";
			   this->lblRightVentricle->Size = System::Drawing::Size(128, 19);
			   this->lblRightVentricle->TabIndex = 100;
			   this->lblRightVentricle->Text = L"RIGHT VENTRICLE";
			   // 
			   // HeartForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->ClientSize = System::Drawing::Size(1224, 755);
			   this->Controls->Add(this->lblUnitFlowRate);
			   this->Controls->Add(this->lblNumFlowRate);
			   this->Controls->Add(this->lblFlowRate);
			   this->Controls->Add(this->pnRightVentricle);
			   this->Controls->Add(this->pnLeftVentricle);
			   this->Controls->Add(this->pnRightAtrium);
			   this->Controls->Add(this->pnParameters);
			   this->Controls->Add(this->pnPreset);
			   this->Controls->Add(this->picVis);
			   this->Controls->Add(this->cmdBack);
			   this->Controls->Add(this->pnOxygen);
			   this->Controls->Add(this->pnCVS);
			   this->Controls->Add(this->pnLeftAtrium);
			   this->Controls->Add(this->pnLeftAtriumTop);
			   this->Controls->Add(this->pnRightAtriumTop);
			   this->Controls->Add(this->pnLeftVentricleTop);
			   this->Controls->Add(this->pnRightVentricleTop);
			   this->Name = L"HeartForm";
			   this->Text = L"HeartForm";
			   this->pnCVS->ResumeLayout(false);
			   this->pnCVS->PerformLayout();
			   this->pnPreset->ResumeLayout(false);
			   this->pnPreset->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picVis))->EndInit();
			   this->pnOxygen->ResumeLayout(false);
			   this->pnOxygen->PerformLayout();
			   this->pnLeftAtrium->ResumeLayout(false);
			   this->pnLeftAtrium->PerformLayout();
			   this->pnParameters->ResumeLayout(false);
			   this->pnParameters->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCoeff2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCoeff1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDensity))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRVEnd))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLVEnd))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAtrialKey))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRadius0))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxElas))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinElas))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDuration))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStrokeVolume))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHeartRate))->EndInit();
			   this->pnRightVentricle->ResumeLayout(false);
			   this->pnRightVentricle->PerformLayout();
			   this->pnLeftVentricle->ResumeLayout(false);
			   this->pnLeftVentricle->PerformLayout();
			   this->pnRightAtrium->ResumeLayout(false);
			   this->pnRightAtrium->PerformLayout();
			   this->pnLeftAtriumTop->ResumeLayout(false);
			   this->pnLeftAtriumTop->PerformLayout();
			   this->pnRightAtriumTop->ResumeLayout(false);
			   this->pnRightAtriumTop->PerformLayout();
			   this->pnLeftVentricleTop->ResumeLayout(false);
			   this->pnLeftVentricleTop->PerformLayout();
			   this->pnRightVentricleTop->ResumeLayout(false);
			   this->pnRightVentricleTop->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	public:
		Decimal GetHeartRate();
		Decimal GetStrokeVolume();
		Decimal GetDuration();
		Decimal GetMinElastance();
		Decimal GetMaxElastance();
		Decimal GetRadiusAtZeroPressure();
		Decimal GetAtrialKeytime();
		Decimal GetLVEndSystolicElastance();
		Decimal GetRVEndSystolicElastance();
		Decimal GetDensity();
		Decimal GetCoefficient1();
		Decimal GetCoefficient2();
		System::Void UpdateOxygen(double oxygen);
		System::Void UpdateFlowRate(double new_flow_rate);
		System::Void UpdateLAElastance(double new_elastance);
		System::Void UpdateLAPressure(double new_pressure);
		System::Void UpdateLARadius(double new_radius);
		System::Void UpdateRAElastance(double new_elastance);
		System::Void UpdateRAPressure(double new_pressure);
		System::Void UpdateRARadius(double new_radius);
		System::Void UpdateLVInertance(double new_inertance);
		System::Void UpdateLVPressureTotal(double new_pressure);
		System::Void UpdateLVRadius(double new_radius);
		System::Void UpdateRVInertance(double new_inertance);
		System::Void UpdateRVPressureTotal(double new_pressure);
		System::Void UpdateRVRadius(double new_radius);

	private: System::Void cmdHeartRate_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->ResetCycleDuration();
		human_parent_ptr->heart->ResetHeartRate();
		numDuration->Value = (Decimal)human_parent_ptr->heart->GetCycleDuration();
		numHeartRate->Value = (Decimal)human_parent_ptr->heart->GetHeartRate();
	}
	private: System::Void cmdStrokeVolume_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->ResetStrokeVolume();
		numStrokeVolume->Value = (Decimal)human_parent_ptr->heart->GetStrokeVolume();
	}
	private: System::Void cmdDuration_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->ResetCycleDuration();
		human_parent_ptr->heart->ResetHeartRate();
		numDuration->Value = (Decimal)human_parent_ptr->heart->GetCycleDuration();
		numHeartRate->Value = (Decimal)human_parent_ptr->heart->GetHeartRate();
	}
	private: System::Void cmdMinElas_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_atrium->ResetMinimumElastance();
		human_parent_ptr->heart->right_atrium->ResetMinimumElastance();
		numMinElas->Value = (Decimal)human_parent_ptr->heart->left_atrium->GetMinimumElastance();
	}
	private: System::Void cmdMaxElas_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_atrium->ResetMaximumElastance();
		human_parent_ptr->heart->right_atrium->ResetMaximumElastance();
		numMaxElas->Value = (Decimal)human_parent_ptr->heart->left_atrium->GetMaximumElastance();
	}
	private: System::Void cmdRadius0_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_atrium->ResetZeroPressureRadius();
		human_parent_ptr->heart->right_atrium->ResetZeroPressureRadius();
		numRadius0->Value = (Decimal)human_parent_ptr->heart->left_atrium->GetZeroPressureRadius();
	}
	private: System::Void cmdAtrialKey_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_atrium->ResetElastanceKeytimeInCycle();
		human_parent_ptr->heart->right_atrium->ResetElastanceKeytimeInCycle();
		numAtrialKey->Value = (Decimal)human_parent_ptr->heart->left_atrium->GetElastanceKeytimeInCycle();
	}
	private: System::Void cmdLVEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_ventricle->ResetEndSystolicElastance();
		numLVEnd->Value = (Decimal)human_parent_ptr->heart->left_ventricle->GetEndSystolicElastance();
	}
	private: System::Void cmdRVEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->right_ventricle->ResetEndSystolicElastance();
		numRVEnd->Value = (Decimal)human_parent_ptr->heart->right_ventricle->GetEndSystolicElastance();
	}
	private: System::Void cmdDensity_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_ventricle->ResetBloodDensity();
		human_parent_ptr->heart->right_ventricle->ResetBloodDensity();
		numDensity->Value = (Decimal)human_parent_ptr->heart->left_ventricle->GetBloodDensity();
	}
	private: System::Void cmdCoeff1_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_ventricle->ResetScalingCoefficient();
		numCoeff1->Value = (Decimal)human_parent_ptr->heart->left_ventricle->GetScalingCoefficient();
	}
	private: System::Void cmdCoeff2_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->right_ventricle->ResetScalingCoefficient();
		numCoeff2->Value = (Decimal)human_parent_ptr->heart->right_ventricle->GetScalingCoefficient();
	}
	private: System::Void cmdBack_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
		parent_form->BringToFront();
	}
	private: System::Void numHeartRate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->SetHeartRate((double)numHeartRate->Value);
		numDuration->Value = (Decimal)human_parent_ptr->heart->GetCycleDuration();
	}
	private: System::Void numStrokeVolume_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->SetStrokeVolume((double)numStrokeVolume->Value);
	}
	private: System::Void numDuration_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->SetCycleDuration((double)numDuration->Value);
		numHeartRate->Value = (Decimal)human_parent_ptr->heart->GetHeartRate();
	}
	private: System::Void numMinElas_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_atrium->SetMinimumElastance((double)numMinElas->Value);
		human_parent_ptr->heart->right_atrium->SetMinimumElastance((double)numMinElas->Value);
	}
	private: System::Void numMaxElas_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_atrium->SetMaximumElastance((double)numMaxElas->Value);
		human_parent_ptr->heart->right_atrium->SetMaximumElastance((double)numMaxElas->Value);
	}
	private: System::Void numRadius0_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_atrium->SetZeroPressureRadius((double)numRadius0->Value);
		human_parent_ptr->heart->right_atrium->SetZeroPressureRadius((double)numRadius0->Value);
	}
	private: System::Void numAtrialKey_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_atrium->SetElastanceKeytimeInCycle((double)numAtrialKey->Value);
		human_parent_ptr->heart->right_atrium->SetElastanceKeytimeInCycle((double)numAtrialKey->Value);
	}
	private: System::Void numLVEnd_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_ventricle->SetEndSystolicElastance((double)numLVEnd->Value);
	}
	private: System::Void numRVEnd_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->right_ventricle->SetEndSystolicElastance((double)numRVEnd->Value);
	}
	private: System::Void numDensity_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_ventricle->SetBloodDensity((double)numDensity->Value);
		human_parent_ptr->heart->right_ventricle->SetBloodDensity((double)numDensity->Value);
	}
	private: System::Void numCoeff1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->left_ventricle->SetScalingCoefficient((double)numCoeff1->Value);
	}
	private: System::Void numCoeff2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->heart->right_ventricle->SetScalingCoefficient((double)numCoeff2->Value);
	}
	};
}
