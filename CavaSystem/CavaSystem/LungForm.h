#pragma once

#include "Human.h"
#include <string>

namespace CavaSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LungForm : public System::Windows::Forms::Form
	{
	public:
		LungForm(Form^ form, Human* human_ptr)
		{
			InitializeComponent();
			parent_form = form;
			human_parent_ptr = human_ptr;
		}

	protected:
		~LungForm()
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
	private: System::Windows::Forms::Panel^ pnParameters;
	private: System::Windows::Forms::Panel^ pnOxValues;
	private: System::Windows::Forms::Label^ lblParameters;
	private: System::Windows::Forms::Label^ lblCVS;
	private: System::Windows::Forms::Label^ lblOxygen;
	private: System::Windows::Forms::Label^ lblGas;
	private: System::Windows::Forms::Label^ lblLungVol;
	private: System::Windows::Forms::Label^ lblMassAir;
	private: System::Windows::Forms::Label^ lblAtmosDen;
	private: System::Windows::Forms::Label^ lblDownPress;
	private: System::Windows::Forms::Label^ lblCritical;
	private: System::Windows::Forms::Label^ lblUpPress;
	private: System::Windows::Forms::Label^ lblThrottle;
	private: System::Windows::Forms::Label^ lblResCom;
	private: System::Windows::Forms::Label^ lblPressure;
	private: System::Windows::Forms::Label^ lblFlowRate;
	private: System::Windows::Forms::Label^ lblOutflow;
	private: System::Windows::Forms::Label^ lblInflow;
	private: System::Windows::Forms::Label^ lblRespComp;
	private: System::Windows::Forms::Label^ lblMassFlow;
	private: System::Windows::Forms::Label^ lblCoefficient;
	private: System::Windows::Forms::Label^ lblNumAtmosDen1;
	private: System::Windows::Forms::Label^ lblNumAtmosDen2;
	private: System::Windows::Forms::Label^ lblNumMassAir;
	private: System::Windows::Forms::Label^ lblNumLungVol;
	private: System::Windows::Forms::Label^ lblNumGas;
	private: System::Windows::Forms::Label^ lblNumDownPress;
	private: System::Windows::Forms::Label^ lblNumUpPress;
	private: System::Windows::Forms::Label^ lblNumThrottle1;
	private: System::Windows::Forms::Label^ lblNumThrottle2;
	private: System::Windows::Forms::Label^ lblNumOxygen;
	private: System::Windows::Forms::Label^ lblUnitOxygen;
	private: System::Windows::Forms::Label^ lblUnitOutflow1;
	private: System::Windows::Forms::Label^ lblUnitInflow1;
	private: System::Windows::Forms::Label^ lblUnitMassFlow;
	private: System::Windows::Forms::Label^ lblUnitOxygenFlow1;
	private: System::Windows::Forms::Label^ lblUnitOxygenFlow2;
	private: System::Windows::Forms::Label^ lblUnitOxygenFlow3;
	private: System::Windows::Forms::Label^ lblUnitPressure;
	private: System::Windows::Forms::Label^ lblUnitResCom1;
	private: System::Windows::Forms::Label^ lblUnitResCom2;
	private: System::Windows::Forms::Label^ lblUnitResCom3;
	private: System::Windows::Forms::Label^ lblNumResCom;
	private: System::Windows::Forms::Label^ lblNumPressure;
	private: System::Windows::Forms::Label^ lblNumOxygenFlow;
	private: System::Windows::Forms::NumericUpDown^ numAtmosDen;
	private: System::Windows::Forms::NumericUpDown^ numMassAir;
	private: System::Windows::Forms::NumericUpDown^ numLungVol;
	private: System::Windows::Forms::NumericUpDown^ numGas;
	private: System::Windows::Forms::NumericUpDown^ numCritical;
	private: System::Windows::Forms::NumericUpDown^ numDownPress;
	private: System::Windows::Forms::NumericUpDown^ numUpPress;
	private: System::Windows::Forms::NumericUpDown^ numThrottle;
	private: System::Windows::Forms::NumericUpDown^ numOutflow;
	private: System::Windows::Forms::NumericUpDown^ numInflow;
	private: System::Windows::Forms::NumericUpDown^ numMassFlow;
	private: System::Windows::Forms::NumericUpDown^ numCoefficient;
	private: System::Windows::Forms::Button^ cmdResetAtmosDen;
	private: System::Windows::Forms::Button^ cmdBack;
	private: System::Windows::Forms::Button^ cmdResetGas;
	private: System::Windows::Forms::Button^ cmdResetMassAir;
	private: System::Windows::Forms::Button^ cmdResetLungVol;
	private: System::Windows::Forms::Button^ cmdResetCritical;
	private: System::Windows::Forms::Button^ cmdResetDownPress;
	private: System::Windows::Forms::Button^ cmdResetUpPress;
	private: System::Windows::Forms::Button^ cmdResetThrottle;
	private: System::Windows::Forms::Button^ cmdOutflow;
	private: System::Windows::Forms::Button^ cmdInflow;
	private: System::Windows::Forms::Button^ cmdCoefficient;
	private: System::Windows::Forms::Button^ cmdMassFlow;
	private: System::Windows::Forms::PictureBox^ picVis;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Erforderliche Methode für die Designerunterstützung.
		   /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LungForm::typeid));
			   this->pnPreset = (gcnew System::Windows::Forms::Panel());
			   this->lblParameters = (gcnew System::Windows::Forms::Label());
			   this->cmdBack = (gcnew System::Windows::Forms::Button());
			   this->pnCVS = (gcnew System::Windows::Forms::Panel());
			   this->lblCVS = (gcnew System::Windows::Forms::Label());
			   this->pnOxygen = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitOxygen = (gcnew System::Windows::Forms::Label());
			   this->lblNumOxygen = (gcnew System::Windows::Forms::Label());
			   this->lblOxygen = (gcnew System::Windows::Forms::Label());
			   this->picVis = (gcnew System::Windows::Forms::PictureBox());
			   this->pnParameters = (gcnew System::Windows::Forms::Panel());
			   this->lblCoefficient = (gcnew System::Windows::Forms::Label());
			   this->numCoefficient = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdCoefficient = (gcnew System::Windows::Forms::Button());
			   this->lblUnitMassFlow = (gcnew System::Windows::Forms::Label());
			   this->lblMassFlow = (gcnew System::Windows::Forms::Label());
			   this->numMassFlow = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdMassFlow = (gcnew System::Windows::Forms::Button());
			   this->lblUnitOutflow1 = (gcnew System::Windows::Forms::Label());
			   this->lblOutflow = (gcnew System::Windows::Forms::Label());
			   this->lblInflow = (gcnew System::Windows::Forms::Label());
			   this->numOutflow = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdOutflow = (gcnew System::Windows::Forms::Button());
			   this->numInflow = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdInflow = (gcnew System::Windows::Forms::Button());
			   this->lblUnitInflow1 = (gcnew System::Windows::Forms::Label());
			   this->lblRespComp = (gcnew System::Windows::Forms::Label());
			   this->lblNumAtmosDen2 = (gcnew System::Windows::Forms::Label());
			   this->lblNumThrottle2 = (gcnew System::Windows::Forms::Label());
			   this->numAtmosDen = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdResetAtmosDen = (gcnew System::Windows::Forms::Button());
			   this->lblNumAtmosDen1 = (gcnew System::Windows::Forms::Label());
			   this->lblAtmosDen = (gcnew System::Windows::Forms::Label());
			   this->numMassAir = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numLungVol = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdResetMassAir = (gcnew System::Windows::Forms::Button());
			   this->cmdResetLungVol = (gcnew System::Windows::Forms::Button());
			   this->lblNumMassAir = (gcnew System::Windows::Forms::Label());
			   this->lblNumLungVol = (gcnew System::Windows::Forms::Label());
			   this->lblLungVol = (gcnew System::Windows::Forms::Label());
			   this->lblMassAir = (gcnew System::Windows::Forms::Label());
			   this->numGas = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdResetGas = (gcnew System::Windows::Forms::Button());
			   this->lblNumGas = (gcnew System::Windows::Forms::Label());
			   this->lblGas = (gcnew System::Windows::Forms::Label());
			   this->numCritical = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numDownPress = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numUpPress = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numThrottle = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdResetCritical = (gcnew System::Windows::Forms::Button());
			   this->cmdResetDownPress = (gcnew System::Windows::Forms::Button());
			   this->cmdResetUpPress = (gcnew System::Windows::Forms::Button());
			   this->cmdResetThrottle = (gcnew System::Windows::Forms::Button());
			   this->lblNumDownPress = (gcnew System::Windows::Forms::Label());
			   this->lblNumUpPress = (gcnew System::Windows::Forms::Label());
			   this->lblNumThrottle1 = (gcnew System::Windows::Forms::Label());
			   this->lblDownPress = (gcnew System::Windows::Forms::Label());
			   this->lblCritical = (gcnew System::Windows::Forms::Label());
			   this->lblUpPress = (gcnew System::Windows::Forms::Label());
			   this->lblThrottle = (gcnew System::Windows::Forms::Label());
			   this->pnOxValues = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitResCom2 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitResCom1 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitResCom3 = (gcnew System::Windows::Forms::Label());
			   this->lblUnitOxygenFlow2 = (gcnew System::Windows::Forms::Label());
			   this->lblNumResCom = (gcnew System::Windows::Forms::Label());
			   this->lblResCom = (gcnew System::Windows::Forms::Label());
			   this->lblUnitPressure = (gcnew System::Windows::Forms::Label());
			   this->lblUnitOxygenFlow1 = (gcnew System::Windows::Forms::Label());
			   this->lblNumPressure = (gcnew System::Windows::Forms::Label());
			   this->lblPressure = (gcnew System::Windows::Forms::Label());
			   this->lblNumOxygenFlow = (gcnew System::Windows::Forms::Label());
			   this->lblFlowRate = (gcnew System::Windows::Forms::Label());
			   this->lblUnitOxygenFlow3 = (gcnew System::Windows::Forms::Label());
			   this->pnPreset->SuspendLayout();
			   this->pnCVS->SuspendLayout();
			   this->pnOxygen->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picVis))->BeginInit();
			   this->pnParameters->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCoefficient))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMassFlow))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOutflow))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numInflow))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAtmosDen))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMassAir))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLungVol))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numGas))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCritical))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDownPress))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpPress))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numThrottle))->BeginInit();
			   this->pnOxValues->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // pnPreset
			   // 
			   this->pnPreset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->pnPreset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnPreset->Controls->Add(this->lblParameters);
			   this->pnPreset->Location = System::Drawing::Point(144, 285);
			   this->pnPreset->Name = L"pnPreset";
			   this->pnPreset->Size = System::Drawing::Size(791, 28);
			   this->pnPreset->TabIndex = 58;
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
			   this->cmdBack->TabIndex = 51;
			   this->cmdBack->Text = L"CLOSE";
			   this->cmdBack->UseVisualStyleBackColor = false;
			   this->cmdBack->Click += gcnew System::EventHandler(this, &LungForm::cmdBack_Click);
			   // 
			   // pnCVS
			   // 
			   this->pnCVS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(44)));
			   this->pnCVS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnCVS->Controls->Add(this->lblCVS);
			   this->pnCVS->Location = System::Drawing::Point(0, 0);
			   this->pnCVS->Name = L"pnCVS";
			   this->pnCVS->Size = System::Drawing::Size(944, 47);
			   this->pnCVS->TabIndex = 50;
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
			   this->pnOxygen->Location = System::Drawing::Point(144, 100);
			   this->pnOxygen->Name = L"pnOxygen";
			   this->pnOxygen->Size = System::Drawing::Size(791, 28);
			   this->pnOxygen->TabIndex = 55;
			   // 
			   // lblUnitOxygen
			   // 
			   this->lblUnitOxygen->AutoSize = true;
			   this->lblUnitOxygen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lblUnitOxygen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitOxygen->ForeColor = System::Drawing::Color::White;
			   this->lblUnitOxygen->Location = System::Drawing::Point(136, 4);
			   this->lblUnitOxygen->Name = L"lblUnitOxygen";
			   this->lblUnitOxygen->Size = System::Drawing::Size(19, 19);
			   this->lblUnitOxygen->TabIndex = 47;
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
			   this->lblNumOxygen->TabIndex = 46;
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
			   // picVis
			   // 
			   this->picVis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picVis.Image")));
			   this->picVis->Location = System::Drawing::Point(12, 100);
			   this->picVis->Name = L"picVis";
			   this->picVis->Size = System::Drawing::Size(113, 352);
			   this->picVis->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->picVis->TabIndex = 52;
			   this->picVis->TabStop = false;
			   // 
			   // pnParameters
			   // 
			   this->pnParameters->AutoScroll = true;
			   this->pnParameters->AutoSize = true;
			   this->pnParameters->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnParameters->Controls->Add(this->lblCoefficient);
			   this->pnParameters->Controls->Add(this->numCoefficient);
			   this->pnParameters->Controls->Add(this->cmdCoefficient);
			   this->pnParameters->Controls->Add(this->lblUnitMassFlow);
			   this->pnParameters->Controls->Add(this->lblMassFlow);
			   this->pnParameters->Controls->Add(this->numMassFlow);
			   this->pnParameters->Controls->Add(this->cmdMassFlow);
			   this->pnParameters->Controls->Add(this->lblUnitOutflow1);
			   this->pnParameters->Controls->Add(this->lblOutflow);
			   this->pnParameters->Controls->Add(this->lblInflow);
			   this->pnParameters->Controls->Add(this->numOutflow);
			   this->pnParameters->Controls->Add(this->cmdOutflow);
			   this->pnParameters->Controls->Add(this->numInflow);
			   this->pnParameters->Controls->Add(this->cmdInflow);
			   this->pnParameters->Controls->Add(this->lblUnitInflow1);
			   this->pnParameters->Controls->Add(this->lblRespComp);
			   this->pnParameters->Controls->Add(this->lblNumAtmosDen2);
			   this->pnParameters->Controls->Add(this->lblNumThrottle2);
			   this->pnParameters->Controls->Add(this->numAtmosDen);
			   this->pnParameters->Controls->Add(this->cmdResetAtmosDen);
			   this->pnParameters->Controls->Add(this->lblNumAtmosDen1);
			   this->pnParameters->Controls->Add(this->lblAtmosDen);
			   this->pnParameters->Controls->Add(this->numMassAir);
			   this->pnParameters->Controls->Add(this->numLungVol);
			   this->pnParameters->Controls->Add(this->cmdResetMassAir);
			   this->pnParameters->Controls->Add(this->cmdResetLungVol);
			   this->pnParameters->Controls->Add(this->lblNumMassAir);
			   this->pnParameters->Controls->Add(this->lblNumLungVol);
			   this->pnParameters->Controls->Add(this->lblLungVol);
			   this->pnParameters->Controls->Add(this->lblMassAir);
			   this->pnParameters->Controls->Add(this->numGas);
			   this->pnParameters->Controls->Add(this->cmdResetGas);
			   this->pnParameters->Controls->Add(this->lblNumGas);
			   this->pnParameters->Controls->Add(this->lblGas);
			   this->pnParameters->Controls->Add(this->numCritical);
			   this->pnParameters->Controls->Add(this->numDownPress);
			   this->pnParameters->Controls->Add(this->numUpPress);
			   this->pnParameters->Controls->Add(this->numThrottle);
			   this->pnParameters->Controls->Add(this->cmdResetCritical);
			   this->pnParameters->Controls->Add(this->cmdResetDownPress);
			   this->pnParameters->Controls->Add(this->cmdResetUpPress);
			   this->pnParameters->Controls->Add(this->cmdResetThrottle);
			   this->pnParameters->Controls->Add(this->lblNumDownPress);
			   this->pnParameters->Controls->Add(this->lblNumUpPress);
			   this->pnParameters->Controls->Add(this->lblNumThrottle1);
			   this->pnParameters->Controls->Add(this->lblDownPress);
			   this->pnParameters->Controls->Add(this->lblCritical);
			   this->pnParameters->Controls->Add(this->lblUpPress);
			   this->pnParameters->Controls->Add(this->lblThrottle);
			   this->pnParameters->Location = System::Drawing::Point(144, 320);
			   this->pnParameters->Name = L"pnParameters";
			   this->pnParameters->Size = System::Drawing::Size(788, 423);
			   this->pnParameters->TabIndex = 87;
			   // 
			   // lblCoefficient
			   // 
			   this->lblCoefficient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->lblCoefficient->AutoSize = true;
			   this->lblCoefficient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblCoefficient->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCoefficient->ForeColor = System::Drawing::Color::White;
			   this->lblCoefficient->Location = System::Drawing::Point(29, 393);
			   this->lblCoefficient->Name = L"lblCoefficient";
			   this->lblCoefficient->Size = System::Drawing::Size(78, 19);
			   this->lblCoefficient->TabIndex = 129;
			   this->lblCoefficient->Text = L"Coefficient";
			   // 
			   // numCoefficient
			   // 
			   this->numCoefficient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numCoefficient->DecimalPlaces = 2;
			   this->numCoefficient->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numCoefficient->ForeColor = System::Drawing::Color::White;
			   this->numCoefficient->Location = System::Drawing::Point(198, 394);
			   this->numCoefficient->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numCoefficient->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, System::Int32::MinValue });
			   this->numCoefficient->Name = L"numCoefficient";
			   this->numCoefficient->Size = System::Drawing::Size(134, 26);
			   this->numCoefficient->TabIndex = 128;
			   this->numCoefficient->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numCoefficient->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			   this->numCoefficient->ValueChanged += gcnew System::EventHandler(this, &LungForm::numCoefficient_ValueChanged);
			   // 
			   // cmdCoefficient
			   // 
			   this->cmdCoefficient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdCoefficient->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdCoefficient->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdCoefficient->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdCoefficient->ForeColor = System::Drawing::Color::White;
			   this->cmdCoefficient->Location = System::Drawing::Point(415, 393);
			   this->cmdCoefficient->Name = L"cmdCoefficient";
			   this->cmdCoefficient->Size = System::Drawing::Size(59, 22);
			   this->cmdCoefficient->TabIndex = 127;
			   this->cmdCoefficient->Text = L"Reset";
			   this->cmdCoefficient->UseVisualStyleBackColor = false;
			   this->cmdCoefficient->Click += gcnew System::EventHandler(this, &LungForm::cmdCoefficient_Click);
			   // 
			   // lblUnitMassFlow
			   // 
			   this->lblUnitMassFlow->AutoSize = true;
			   this->lblUnitMassFlow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitMassFlow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitMassFlow->ForeColor = System::Drawing::Color::White;
			   this->lblUnitMassFlow->Location = System::Drawing::Point(339, 361);
			   this->lblUnitMassFlow->Name = L"lblUnitMassFlow";
			   this->lblUnitMassFlow->Size = System::Drawing::Size(36, 19);
			   this->lblUnitMassFlow->TabIndex = 126;
			   this->lblUnitMassFlow->Text = L"kg/s";
			   // 
			   // lblMassFlow
			   // 
			   this->lblMassFlow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->lblMassFlow->AutoSize = true;
			   this->lblMassFlow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblMassFlow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMassFlow->ForeColor = System::Drawing::Color::White;
			   this->lblMassFlow->Location = System::Drawing::Point(31, 361);
			   this->lblMassFlow->Name = L"lblMassFlow";
			   this->lblMassFlow->Size = System::Drawing::Size(101, 19);
			   this->lblMassFlow->TabIndex = 125;
			   this->lblMassFlow->Text = L"Air Mass Flow";
			   // 
			   // numMassFlow
			   // 
			   this->numMassFlow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numMassFlow->DecimalPlaces = 2;
			   this->numMassFlow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numMassFlow->ForeColor = System::Drawing::Color::White;
			   this->numMassFlow->Location = System::Drawing::Point(199, 362);
			   this->numMassFlow->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numMassFlow->Name = L"numMassFlow";
			   this->numMassFlow->Size = System::Drawing::Size(134, 26);
			   this->numMassFlow->TabIndex = 124;
			   this->numMassFlow->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numMassFlow->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 131072 });
			   this->numMassFlow->ValueChanged += gcnew System::EventHandler(this, &LungForm::numMassFlow_ValueChanged);
			   // 
			   // cmdMassFlow
			   // 
			   this->cmdMassFlow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdMassFlow->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdMassFlow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdMassFlow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdMassFlow->ForeColor = System::Drawing::Color::White;
			   this->cmdMassFlow->Location = System::Drawing::Point(416, 361);
			   this->cmdMassFlow->Name = L"cmdMassFlow";
			   this->cmdMassFlow->Size = System::Drawing::Size(59, 22);
			   this->cmdMassFlow->TabIndex = 123;
			   this->cmdMassFlow->Text = L"Reset";
			   this->cmdMassFlow->UseVisualStyleBackColor = false;
			   this->cmdMassFlow->Click += gcnew System::EventHandler(this, &LungForm::cmdMassFlow_Click);
			   // 
			   // lblUnitOutflow1
			   // 
			   this->lblUnitOutflow1->AutoSize = true;
			   this->lblUnitOutflow1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitOutflow1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitOutflow1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitOutflow1->Location = System::Drawing::Point(339, 329);
			   this->lblUnitOutflow1->Name = L"lblUnitOutflow1";
			   this->lblUnitOutflow1->Size = System::Drawing::Size(75, 18);
			   this->lblUnitOutflow1->TabIndex = 120;
			   this->lblUnitOutflow1->Text = L"ml/cmH2O";
			   // 
			   // lblOutflow
			   // 
			   this->lblOutflow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->lblOutflow->AutoSize = true;
			   this->lblOutflow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblOutflow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblOutflow->ForeColor = System::Drawing::Color::White;
			   this->lblOutflow->Location = System::Drawing::Point(55, 329);
			   this->lblOutflow->Name = L"lblOutflow";
			   this->lblOutflow->Size = System::Drawing::Size(60, 19);
			   this->lblOutflow->TabIndex = 118;
			   this->lblOutflow->Text = L"Outflow";
			   // 
			   // lblInflow
			   // 
			   this->lblInflow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->lblInflow->AutoSize = true;
			   this->lblInflow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblInflow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblInflow->ForeColor = System::Drawing::Color::White;
			   this->lblInflow->Location = System::Drawing::Point(57, 299);
			   this->lblInflow->Name = L"lblInflow";
			   this->lblInflow->Size = System::Drawing::Size(46, 19);
			   this->lblInflow->TabIndex = 117;
			   this->lblInflow->Text = L"Inflow";
			   // 
			   // numOutflow
			   // 
			   this->numOutflow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numOutflow->DecimalPlaces = 2;
			   this->numOutflow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numOutflow->ForeColor = System::Drawing::Color::White;
			   this->numOutflow->Location = System::Drawing::Point(199, 330);
			   this->numOutflow->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numOutflow->Name = L"numOutflow";
			   this->numOutflow->Size = System::Drawing::Size(134, 26);
			   this->numOutflow->TabIndex = 115;
			   this->numOutflow->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numOutflow->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 44, 0, 0, 0 });
			   this->numOutflow->ValueChanged += gcnew System::EventHandler(this, &LungForm::numOutflow_ValueChanged);
			   // 
			   // cmdOutflow
			   // 
			   this->cmdOutflow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdOutflow->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdOutflow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdOutflow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdOutflow->ForeColor = System::Drawing::Color::White;
			   this->cmdOutflow->Location = System::Drawing::Point(416, 329);
			   this->cmdOutflow->Name = L"cmdOutflow";
			   this->cmdOutflow->Size = System::Drawing::Size(59, 22);
			   this->cmdOutflow->TabIndex = 114;
			   this->cmdOutflow->Text = L"Reset";
			   this->cmdOutflow->UseVisualStyleBackColor = false;
			   this->cmdOutflow->Click += gcnew System::EventHandler(this, &LungForm::cmdOutflow_Click);
			   // 
			   // numInflow
			   // 
			   this->numInflow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numInflow->DecimalPlaces = 2;
			   this->numInflow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numInflow->ForeColor = System::Drawing::Color::White;
			   this->numInflow->Location = System::Drawing::Point(199, 298);
			   this->numInflow->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numInflow->Name = L"numInflow";
			   this->numInflow->Size = System::Drawing::Size(134, 26);
			   this->numInflow->TabIndex = 112;
			   this->numInflow->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numInflow->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 58, 0, 0, 0 });
			   this->numInflow->ValueChanged += gcnew System::EventHandler(this, &LungForm::numInflow_ValueChanged);
			   // 
			   // cmdInflow
			   // 
			   this->cmdInflow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdInflow->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdInflow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdInflow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdInflow->ForeColor = System::Drawing::Color::White;
			   this->cmdInflow->Location = System::Drawing::Point(416, 297);
			   this->cmdInflow->Name = L"cmdInflow";
			   this->cmdInflow->Size = System::Drawing::Size(59, 22);
			   this->cmdInflow->TabIndex = 111;
			   this->cmdInflow->Text = L"Reset";
			   this->cmdInflow->UseVisualStyleBackColor = false;
			   this->cmdInflow->Click += gcnew System::EventHandler(this, &LungForm::cmdInflow_Click);
			   // 
			   // lblUnitInflow1
			   // 
			   this->lblUnitInflow1->AutoSize = true;
			   this->lblUnitInflow1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitInflow1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitInflow1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitInflow1->Location = System::Drawing::Point(339, 299);
			   this->lblUnitInflow1->Name = L"lblUnitInflow1";
			   this->lblUnitInflow1->Size = System::Drawing::Size(75, 18);
			   this->lblUnitInflow1->TabIndex = 110;
			   this->lblUnitInflow1->Text = L"ml/cmH2O";
			   // 
			   // lblRespComp
			   // 
			   this->lblRespComp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->lblRespComp->AutoSize = true;
			   this->lblRespComp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblRespComp->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblRespComp->ForeColor = System::Drawing::Color::White;
			   this->lblRespComp->Location = System::Drawing::Point(11, 271);
			   this->lblRespComp->Name = L"lblRespComp";
			   this->lblRespComp->Size = System::Drawing::Size(181, 19);
			   this->lblRespComp->TabIndex = 109;
			   this->lblRespComp->Text = L"Respiratory Compliances:";
			   // 
			   // lblNumAtmosDen2
			   // 
			   this->lblNumAtmosDen2->AutoSize = true;
			   this->lblNumAtmosDen2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumAtmosDen2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumAtmosDen2->ForeColor = System::Drawing::Color::White;
			   this->lblNumAtmosDen2->Location = System::Drawing::Point(376, 232);
			   this->lblNumAtmosDen2->Name = L"lblNumAtmosDen2";
			   this->lblNumAtmosDen2->Size = System::Drawing::Size(12, 13);
			   this->lblNumAtmosDen2->TabIndex = 106;
			   this->lblNumAtmosDen2->Text = L"3";
			   // 
			   // lblNumThrottle2
			   // 
			   this->lblNumThrottle2->AutoSize = true;
			   this->lblNumThrottle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumThrottle2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumThrottle2->ForeColor = System::Drawing::Color::White;
			   this->lblNumThrottle2->Location = System::Drawing::Point(371, 10);
			   this->lblNumThrottle2->Name = L"lblNumThrottle2";
			   this->lblNumThrottle2->Size = System::Drawing::Size(12, 13);
			   this->lblNumThrottle2->TabIndex = 105;
			   this->lblNumThrottle2->Text = L"2";
			   // 
			   // numAtmosDen
			   // 
			   this->numAtmosDen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numAtmosDen->DecimalPlaces = 2;
			   this->numAtmosDen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numAtmosDen->ForeColor = System::Drawing::Color::White;
			   this->numAtmosDen->Location = System::Drawing::Point(199, 234);
			   this->numAtmosDen->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numAtmosDen->Name = L"numAtmosDen";
			   this->numAtmosDen->Size = System::Drawing::Size(134, 26);
			   this->numAtmosDen->TabIndex = 104;
			   this->numAtmosDen->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numAtmosDen->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 65536 });
			   this->numAtmosDen->ValueChanged += gcnew System::EventHandler(this, &LungForm::numAtmosDen_ValueChanged);
			   // 
			   // cmdResetAtmosDen
			   // 
			   this->cmdResetAtmosDen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetAtmosDen->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetAtmosDen->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetAtmosDen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetAtmosDen->ForeColor = System::Drawing::Color::White;
			   this->cmdResetAtmosDen->Location = System::Drawing::Point(416, 235);
			   this->cmdResetAtmosDen->Name = L"cmdResetAtmosDen";
			   this->cmdResetAtmosDen->Size = System::Drawing::Size(59, 22);
			   this->cmdResetAtmosDen->TabIndex = 103;
			   this->cmdResetAtmosDen->Text = L"Reset";
			   this->cmdResetAtmosDen->UseVisualStyleBackColor = false;
			   this->cmdResetAtmosDen->Click += gcnew System::EventHandler(this, &LungForm::cmdResetAtmosDen_Click);
			   // 
			   // lblNumAtmosDen1
			   // 
			   this->lblNumAtmosDen1->AutoSize = true;
			   this->lblNumAtmosDen1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumAtmosDen1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumAtmosDen1->ForeColor = System::Drawing::Color::White;
			   this->lblNumAtmosDen1->Location = System::Drawing::Point(339, 235);
			   this->lblNumAtmosDen1->Name = L"lblNumAtmosDen1";
			   this->lblNumAtmosDen1->Size = System::Drawing::Size(43, 19);
			   this->lblNumAtmosDen1->TabIndex = 102;
			   this->lblNumAtmosDen1->Text = L"kg/m";
			   // 
			   // lblAtmosDen
			   // 
			   this->lblAtmosDen->AutoSize = true;
			   this->lblAtmosDen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblAtmosDen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblAtmosDen->ForeColor = System::Drawing::Color::White;
			   this->lblAtmosDen->Location = System::Drawing::Point(11, 235);
			   this->lblAtmosDen->Name = L"lblAtmosDen";
			   this->lblAtmosDen->Size = System::Drawing::Size(145, 19);
			   this->lblAtmosDen->TabIndex = 101;
			   this->lblAtmosDen->Text = L"Atmospheric density";
			   // 
			   // numMassAir
			   // 
			   this->numMassAir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numMassAir->DecimalPlaces = 5;
			   this->numMassAir->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numMassAir->ForeColor = System::Drawing::Color::White;
			   this->numMassAir->Location = System::Drawing::Point(199, 202);
			   this->numMassAir->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numMassAir->Name = L"numMassAir";
			   this->numMassAir->Size = System::Drawing::Size(134, 26);
			   this->numMassAir->TabIndex = 100;
			   this->numMassAir->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numMassAir->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 327680 });
			   this->numMassAir->ValueChanged += gcnew System::EventHandler(this, &LungForm::numMassAir_ValueChanged);
			   // 
			   // numLungVol
			   // 
			   this->numLungVol->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numLungVol->DecimalPlaces = 4;
			   this->numLungVol->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numLungVol->ForeColor = System::Drawing::Color::White;
			   this->numLungVol->Location = System::Drawing::Point(199, 170);
			   this->numLungVol->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numLungVol->Name = L"numLungVol";
			   this->numLungVol->Size = System::Drawing::Size(134, 26);
			   this->numLungVol->TabIndex = 99;
			   this->numLungVol->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numLungVol->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3251, 0, 0, 196608 });
			   this->numLungVol->ValueChanged += gcnew System::EventHandler(this, &LungForm::numLungVol_ValueChanged);
			   // 
			   // cmdResetMassAir
			   // 
			   this->cmdResetMassAir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetMassAir->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetMassAir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetMassAir->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetMassAir->ForeColor = System::Drawing::Color::White;
			   this->cmdResetMassAir->Location = System::Drawing::Point(416, 203);
			   this->cmdResetMassAir->Name = L"cmdResetMassAir";
			   this->cmdResetMassAir->Size = System::Drawing::Size(59, 22);
			   this->cmdResetMassAir->TabIndex = 98;
			   this->cmdResetMassAir->Text = L"Reset";
			   this->cmdResetMassAir->UseVisualStyleBackColor = false;
			   this->cmdResetMassAir->Click += gcnew System::EventHandler(this, &LungForm::cmdResetMassAir_Click);
			   // 
			   // cmdResetLungVol
			   // 
			   this->cmdResetLungVol->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetLungVol->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetLungVol->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetLungVol->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetLungVol->ForeColor = System::Drawing::Color::White;
			   this->cmdResetLungVol->Location = System::Drawing::Point(416, 171);
			   this->cmdResetLungVol->Name = L"cmdResetLungVol";
			   this->cmdResetLungVol->Size = System::Drawing::Size(59, 22);
			   this->cmdResetLungVol->TabIndex = 97;
			   this->cmdResetLungVol->Text = L"Reset";
			   this->cmdResetLungVol->UseVisualStyleBackColor = false;
			   this->cmdResetLungVol->Click += gcnew System::EventHandler(this, &LungForm::cmdResetLungVol_Click);
			   // 
			   // lblNumMassAir
			   // 
			   this->lblNumMassAir->AutoSize = true;
			   this->lblNumMassAir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumMassAir->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumMassAir->ForeColor = System::Drawing::Color::White;
			   this->lblNumMassAir->Location = System::Drawing::Point(339, 203);
			   this->lblNumMassAir->Name = L"lblNumMassAir";
			   this->lblNumMassAir->Size = System::Drawing::Size(24, 19);
			   this->lblNumMassAir->TabIndex = 96;
			   this->lblNumMassAir->Text = L"kg";
			   // 
			   // lblNumLungVol
			   // 
			   this->lblNumLungVol->AutoSize = true;
			   this->lblNumLungVol->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumLungVol->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumLungVol->ForeColor = System::Drawing::Color::White;
			   this->lblNumLungVol->Location = System::Drawing::Point(339, 171);
			   this->lblNumLungVol->Name = L"lblNumLungVol";
			   this->lblNumLungVol->Size = System::Drawing::Size(16, 19);
			   this->lblNumLungVol->TabIndex = 95;
			   this->lblNumLungVol->Text = L"L";
			   // 
			   // lblLungVol
			   // 
			   this->lblLungVol->AutoSize = true;
			   this->lblLungVol->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblLungVol->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLungVol->ForeColor = System::Drawing::Color::White;
			   this->lblLungVol->Location = System::Drawing::Point(12, 171);
			   this->lblLungVol->Name = L"lblLungVol";
			   this->lblLungVol->Size = System::Drawing::Size(92, 19);
			   this->lblLungVol->TabIndex = 94;
			   this->lblLungVol->Text = L"Lung volume";
			   // 
			   // lblMassAir
			   // 
			   this->lblMassAir->AutoSize = true;
			   this->lblMassAir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblMassAir->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMassAir->ForeColor = System::Drawing::Color::White;
			   this->lblMassAir->Location = System::Drawing::Point(11, 203);
			   this->lblMassAir->Name = L"lblMassAir";
			   this->lblMassAir->Size = System::Drawing::Size(109, 19);
			   this->lblMassAir->TabIndex = 93;
			   this->lblMassAir->Text = L"Mass of the Air";
			   // 
			   // numGas
			   // 
			   this->numGas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numGas->DecimalPlaces = 2;
			   this->numGas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numGas->ForeColor = System::Drawing::Color::White;
			   this->numGas->Location = System::Drawing::Point(199, 138);
			   this->numGas->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			   this->numGas->Name = L"numGas";
			   this->numGas->Size = System::Drawing::Size(134, 26);
			   this->numGas->TabIndex = 92;
			   this->numGas->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numGas->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 287, 0, 0, 0 });
			   this->numGas->ValueChanged += gcnew System::EventHandler(this, &LungForm::numGas_ValueChanged);
			   // 
			   // cmdResetGas
			   // 
			   this->cmdResetGas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetGas->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetGas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetGas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetGas->ForeColor = System::Drawing::Color::White;
			   this->cmdResetGas->Location = System::Drawing::Point(417, 139);
			   this->cmdResetGas->Name = L"cmdResetGas";
			   this->cmdResetGas->Size = System::Drawing::Size(59, 22);
			   this->cmdResetGas->TabIndex = 91;
			   this->cmdResetGas->Text = L"Reset";
			   this->cmdResetGas->UseVisualStyleBackColor = false;
			   this->cmdResetGas->Click += gcnew System::EventHandler(this, &LungForm::cmdResetGas_Click);
			   // 
			   // lblNumGas
			   // 
			   this->lblNumGas->AutoSize = true;
			   this->lblNumGas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumGas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumGas->ForeColor = System::Drawing::Color::White;
			   this->lblNumGas->Location = System::Drawing::Point(339, 140);
			   this->lblNumGas->Name = L"lblNumGas";
			   this->lblNumGas->Size = System::Drawing::Size(71, 19);
			   this->lblNumGas->TabIndex = 90;
			   this->lblNumGas->Text = L"J/(kg · K)";
			   // 
			   // lblGas
			   // 
			   this->lblGas->AutoSize = true;
			   this->lblGas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblGas->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblGas->ForeColor = System::Drawing::Color::White;
			   this->lblGas->Location = System::Drawing::Point(13, 139);
			   this->lblGas->Name = L"lblGas";
			   this->lblGas->Size = System::Drawing::Size(98, 19);
			   this->lblGas->TabIndex = 89;
			   this->lblGas->Text = L"Gas constant";
			   // 
			   // numCritical
			   // 
			   this->numCritical->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numCritical->DecimalPlaces = 4;
			   this->numCritical->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numCritical->ForeColor = System::Drawing::Color::White;
			   this->numCritical->Location = System::Drawing::Point(199, 106);
			   this->numCritical->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numCritical->Name = L"numCritical";
			   this->numCritical->Size = System::Drawing::Size(134, 26);
			   this->numCritical->TabIndex = 88;
			   this->numCritical->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numCritical->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 528, 0, 0, 196608 });
			   this->numCritical->ValueChanged += gcnew System::EventHandler(this, &LungForm::numCritical_ValueChanged);
			   // 
			   // numDownPress
			   // 
			   this->numDownPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numDownPress->DecimalPlaces = 2;
			   this->numDownPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numDownPress->ForeColor = System::Drawing::Color::White;
			   this->numDownPress->Location = System::Drawing::Point(199, 74);
			   this->numDownPress->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numDownPress->Name = L"numDownPress";
			   this->numDownPress->Size = System::Drawing::Size(134, 26);
			   this->numDownPress->TabIndex = 87;
			   this->numDownPress->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numDownPress->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5574, 0, 0, 131072 });
			   this->numDownPress->ValueChanged += gcnew System::EventHandler(this, &LungForm::numDownPress_ValueChanged);
			   // 
			   // numUpPress
			   // 
			   this->numUpPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numUpPress->DecimalPlaces = 2;
			   this->numUpPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numUpPress->ForeColor = System::Drawing::Color::White;
			   this->numUpPress->Location = System::Drawing::Point(199, 42);
			   this->numUpPress->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			   this->numUpPress->Name = L"numUpPress";
			   this->numUpPress->Size = System::Drawing::Size(134, 26);
			   this->numUpPress->TabIndex = 86;
			   this->numUpPress->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numUpPress->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 14, 0, 0, 0 });
			   this->numUpPress->ValueChanged += gcnew System::EventHandler(this, &LungForm::numUpPress_ValueChanged);
			   // 
			   // numThrottle
			   // 
			   this->numThrottle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numThrottle->DecimalPlaces = 2;
			   this->numThrottle->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numThrottle->ForeColor = System::Drawing::Color::White;
			   this->numThrottle->Location = System::Drawing::Point(199, 10);
			   this->numThrottle->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numThrottle->Name = L"numThrottle";
			   this->numThrottle->Size = System::Drawing::Size(134, 26);
			   this->numThrottle->TabIndex = 85;
			   this->numThrottle->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numThrottle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			   this->numThrottle->ValueChanged += gcnew System::EventHandler(this, &LungForm::numThrottle_ValueChanged);
			   // 
			   // cmdResetCritical
			   // 
			   this->cmdResetCritical->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetCritical->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetCritical->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetCritical->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetCritical->ForeColor = System::Drawing::Color::White;
			   this->cmdResetCritical->Location = System::Drawing::Point(416, 107);
			   this->cmdResetCritical->Name = L"cmdResetCritical";
			   this->cmdResetCritical->Size = System::Drawing::Size(59, 22);
			   this->cmdResetCritical->TabIndex = 84;
			   this->cmdResetCritical->Text = L"Reset";
			   this->cmdResetCritical->UseVisualStyleBackColor = false;
			   this->cmdResetCritical->Click += gcnew System::EventHandler(this, &LungForm::cmdResetCritical_Click);
			   // 
			   // cmdResetDownPress
			   // 
			   this->cmdResetDownPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetDownPress->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetDownPress->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetDownPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->cmdResetDownPress->ForeColor = System::Drawing::Color::White;
			   this->cmdResetDownPress->Location = System::Drawing::Point(416, 75);
			   this->cmdResetDownPress->Name = L"cmdResetDownPress";
			   this->cmdResetDownPress->Size = System::Drawing::Size(59, 22);
			   this->cmdResetDownPress->TabIndex = 83;
			   this->cmdResetDownPress->Text = L"Reset";
			   this->cmdResetDownPress->UseVisualStyleBackColor = false;
			   this->cmdResetDownPress->Click += gcnew System::EventHandler(this, &LungForm::cmdResetDownPress_Click);
			   // 
			   // cmdResetUpPress
			   // 
			   this->cmdResetUpPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetUpPress->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetUpPress->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetUpPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetUpPress->ForeColor = System::Drawing::Color::White;
			   this->cmdResetUpPress->Location = System::Drawing::Point(416, 43);
			   this->cmdResetUpPress->Name = L"cmdResetUpPress";
			   this->cmdResetUpPress->Size = System::Drawing::Size(59, 22);
			   this->cmdResetUpPress->TabIndex = 82;
			   this->cmdResetUpPress->Text = L"Reset";
			   this->cmdResetUpPress->UseVisualStyleBackColor = false;
			   this->cmdResetUpPress->Click += gcnew System::EventHandler(this, &LungForm::cmdResetUpPress_Click);
			   // 
			   // cmdResetThrottle
			   // 
			   this->cmdResetThrottle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetThrottle->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetThrottle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetThrottle->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetThrottle->ForeColor = System::Drawing::Color::White;
			   this->cmdResetThrottle->Location = System::Drawing::Point(416, 11);
			   this->cmdResetThrottle->Name = L"cmdResetThrottle";
			   this->cmdResetThrottle->Size = System::Drawing::Size(59, 23);
			   this->cmdResetThrottle->TabIndex = 81;
			   this->cmdResetThrottle->Text = L"Reset";
			   this->cmdResetThrottle->UseVisualStyleBackColor = false;
			   this->cmdResetThrottle->Click += gcnew System::EventHandler(this, &LungForm::cmdResetThrottle_Click);
			   // 
			   // lblNumDownPress
			   // 
			   this->lblNumDownPress->AutoSize = true;
			   this->lblNumDownPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumDownPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumDownPress->ForeColor = System::Drawing::Color::White;
			   this->lblNumDownPress->Location = System::Drawing::Point(339, 75);
			   this->lblNumDownPress->Name = L"lblNumDownPress";
			   this->lblNumDownPress->Size = System::Drawing::Size(57, 19);
			   this->lblNumDownPress->TabIndex = 79;
			   this->lblNumDownPress->Text = L"cmH20";
			   // 
			   // lblNumUpPress
			   // 
			   this->lblNumUpPress->AutoSize = true;
			   this->lblNumUpPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumUpPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumUpPress->ForeColor = System::Drawing::Color::White;
			   this->lblNumUpPress->Location = System::Drawing::Point(339, 43);
			   this->lblNumUpPress->Name = L"lblNumUpPress";
			   this->lblNumUpPress->Size = System::Drawing::Size(59, 19);
			   this->lblNumUpPress->TabIndex = 78;
			   this->lblNumUpPress->Text = L"cmH2O";
			   // 
			   // lblNumThrottle1
			   // 
			   this->lblNumThrottle1->AutoSize = true;
			   this->lblNumThrottle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumThrottle1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumThrottle1->ForeColor = System::Drawing::Color::White;
			   this->lblNumThrottle1->Location = System::Drawing::Point(339, 11);
			   this->lblNumThrottle1->Name = L"lblNumThrottle1";
			   this->lblNumThrottle1->Size = System::Drawing::Size(37, 19);
			   this->lblNumThrottle1->TabIndex = 77;
			   this->lblNumThrottle1->Text = L"mm";
			   // 
			   // lblDownPress
			   // 
			   this->lblDownPress->AutoSize = true;
			   this->lblDownPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblDownPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblDownPress->ForeColor = System::Drawing::Color::White;
			   this->lblDownPress->Location = System::Drawing::Point(12, 75);
			   this->lblDownPress->Name = L"lblDownPress";
			   this->lblDownPress->Size = System::Drawing::Size(158, 19);
			   this->lblDownPress->TabIndex = 76;
			   this->lblDownPress->Text = L"Downstream Pressure";
			   // 
			   // lblCritical
			   // 
			   this->lblCritical->AutoSize = true;
			   this->lblCritical->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblCritical->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCritical->ForeColor = System::Drawing::Color::White;
			   this->lblCritical->Location = System::Drawing::Point(13, 107);
			   this->lblCritical->Name = L"lblCritical";
			   this->lblCritical->Size = System::Drawing::Size(157, 19);
			   this->lblCritical->TabIndex = 75;
			   this->lblCritical->Text = L"Critical Pressure Ratio";
			   // 
			   // lblUpPress
			   // 
			   this->lblUpPress->AutoSize = true;
			   this->lblUpPress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUpPress->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUpPress->ForeColor = System::Drawing::Color::White;
			   this->lblUpPress->Location = System::Drawing::Point(12, 43);
			   this->lblUpPress->Name = L"lblUpPress";
			   this->lblUpPress->Size = System::Drawing::Size(140, 19);
			   this->lblUpPress->TabIndex = 74;
			   this->lblUpPress->Text = L"Upstream Pressure";
			   // 
			   // lblThrottle
			   // 
			   this->lblThrottle->AutoSize = true;
			   this->lblThrottle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblThrottle->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblThrottle->ForeColor = System::Drawing::Color::White;
			   this->lblThrottle->Location = System::Drawing::Point(12, 13);
			   this->lblThrottle->Name = L"lblThrottle";
			   this->lblThrottle->Size = System::Drawing::Size(112, 19);
			   this->lblThrottle->TabIndex = 73;
			   this->lblThrottle->Text = L"Area of Throttle";
			   // 
			   // pnOxValues
			   // 
			   this->pnOxValues->AutoScroll = true;
			   this->pnOxValues->AutoSize = true;
			   this->pnOxValues->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnOxValues->Controls->Add(this->lblUnitResCom2);
			   this->pnOxValues->Controls->Add(this->lblUnitResCom1);
			   this->pnOxValues->Controls->Add(this->lblUnitResCom3);
			   this->pnOxValues->Controls->Add(this->lblUnitOxygenFlow2);
			   this->pnOxValues->Controls->Add(this->lblNumResCom);
			   this->pnOxValues->Controls->Add(this->lblResCom);
			   this->pnOxValues->Controls->Add(this->lblUnitPressure);
			   this->pnOxValues->Controls->Add(this->lblUnitOxygenFlow1);
			   this->pnOxValues->Controls->Add(this->lblNumPressure);
			   this->pnOxValues->Controls->Add(this->lblPressure);
			   this->pnOxValues->Controls->Add(this->lblNumOxygenFlow);
			   this->pnOxValues->Controls->Add(this->lblFlowRate);
			   this->pnOxValues->Controls->Add(this->lblUnitOxygenFlow3);
			   this->pnOxValues->Location = System::Drawing::Point(144, 134);
			   this->pnOxValues->Name = L"pnOxValues";
			   this->pnOxValues->Size = System::Drawing::Size(788, 145);
			   this->pnOxValues->TabIndex = 91;
			   // 
			   // lblUnitResCom2
			   // 
			   this->lblUnitResCom2->AutoSize = true;
			   this->lblUnitResCom2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitResCom2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitResCom2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitResCom2->Location = System::Drawing::Point(343, 104);
			   this->lblUnitResCom2->Name = L"lblUnitResCom2";
			   this->lblUnitResCom2->Size = System::Drawing::Size(12, 13);
			   this->lblUnitResCom2->TabIndex = 106;
			   this->lblUnitResCom2->Text = L"3";
			   // 
			   // lblUnitResCom1
			   // 
			   this->lblUnitResCom1->AutoSize = true;
			   this->lblUnitResCom1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitResCom1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitResCom1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitResCom1->Location = System::Drawing::Point(326, 105);
			   this->lblUnitResCom1->Name = L"lblUnitResCom1";
			   this->lblUnitResCom1->Size = System::Drawing::Size(23, 19);
			   this->lblUnitResCom1->TabIndex = 105;
			   this->lblUnitResCom1->Text = L"m";
			   // 
			   // lblUnitResCom3
			   // 
			   this->lblUnitResCom3->AutoSize = true;
			   this->lblUnitResCom3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitResCom3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitResCom3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitResCom3->Location = System::Drawing::Point(350, 105);
			   this->lblUnitResCom3->Name = L"lblUnitResCom3";
			   this->lblUnitResCom3->Size = System::Drawing::Size(21, 19);
			   this->lblUnitResCom3->TabIndex = 107;
			   this->lblUnitResCom3->Text = L"/s";
			   // 
			   // lblUnitOxygenFlow2
			   // 
			   this->lblUnitOxygenFlow2->AutoSize = true;
			   this->lblUnitOxygenFlow2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitOxygenFlow2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitOxygenFlow2->ForeColor = System::Drawing::Color::White;
			   this->lblUnitOxygenFlow2->Location = System::Drawing::Point(263, 11);
			   this->lblUnitOxygenFlow2->Name = L"lblUnitOxygenFlow2";
			   this->lblUnitOxygenFlow2->Size = System::Drawing::Size(12, 13);
			   this->lblUnitOxygenFlow2->TabIndex = 103;
			   this->lblUnitOxygenFlow2->Text = L"3";
			   // 
			   // lblNumResCom
			   // 
			   this->lblNumResCom->AutoSize = true;
			   this->lblNumResCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumResCom->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumResCom->ForeColor = System::Drawing::Color::White;
			   this->lblNumResCom->Location = System::Drawing::Point(219, 105);
			   this->lblNumResCom->Name = L"lblNumResCom";
			   this->lblNumResCom->Size = System::Drawing::Size(74, 19);
			   this->lblNumResCom->TabIndex = 101;
			   this->lblNumResCom->Text = L"5ml/mdld";
			   // 
			   // lblResCom
			   // 
			   this->lblResCom->AutoSize = true;
			   this->lblResCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblResCom->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblResCom->ForeColor = System::Drawing::Color::White;
			   this->lblResCom->Location = System::Drawing::Point(13, 104);
			   this->lblResCom->Name = L"lblResCom";
			   this->lblResCom->Size = System::Drawing::Size(170, 19);
			   this->lblResCom->TabIndex = 100;
			   this->lblResCom->Text = L"Respiratory Compliance";
			   // 
			   // lblUnitPressure
			   // 
			   this->lblUnitPressure->AutoSize = true;
			   this->lblUnitPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitPressure->ForeColor = System::Drawing::Color::White;
			   this->lblUnitPressure->Location = System::Drawing::Point(247, 43);
			   this->lblUnitPressure->Name = L"lblUnitPressure";
			   this->lblUnitPressure->Size = System::Drawing::Size(55, 19);
			   this->lblUnitPressure->TabIndex = 99;
			   this->lblUnitPressure->Text = L"mmHg";
			   // 
			   // lblUnitOxygenFlow1
			   // 
			   this->lblUnitOxygenFlow1->AutoSize = true;
			   this->lblUnitOxygenFlow1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitOxygenFlow1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitOxygenFlow1->ForeColor = System::Drawing::Color::White;
			   this->lblUnitOxygenFlow1->Location = System::Drawing::Point(246, 11);
			   this->lblUnitOxygenFlow1->Name = L"lblUnitOxygenFlow1";
			   this->lblUnitOxygenFlow1->Size = System::Drawing::Size(23, 19);
			   this->lblUnitOxygenFlow1->TabIndex = 98;
			   this->lblUnitOxygenFlow1->Text = L"m";
			   // 
			   // lblNumPressure
			   // 
			   this->lblNumPressure->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->lblNumPressure->AutoSize = true;
			   this->lblNumPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumPressure->ForeColor = System::Drawing::Color::White;
			   this->lblNumPressure->Location = System::Drawing::Point(159, 43);
			   this->lblNumPressure->Name = L"lblNumPressure";
			   this->lblNumPressure->Size = System::Drawing::Size(50, 19);
			   this->lblNumPressure->TabIndex = 96;
			   this->lblNumPressure->Text = L"120,33";
			   // 
			   // lblPressure
			   // 
			   this->lblPressure->AutoSize = true;
			   this->lblPressure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblPressure->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblPressure->ForeColor = System::Drawing::Color::White;
			   this->lblPressure->Location = System::Drawing::Point(13, 43);
			   this->lblPressure->Name = L"lblPressure";
			   this->lblPressure->Size = System::Drawing::Size(68, 19);
			   this->lblPressure->TabIndex = 95;
			   this->lblPressure->Text = L"Pressure";
			   // 
			   // lblNumOxygenFlow
			   // 
			   this->lblNumOxygenFlow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->lblNumOxygenFlow->AutoSize = true;
			   this->lblNumOxygenFlow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumOxygenFlow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblNumOxygenFlow->ForeColor = System::Drawing::Color::White;
			   this->lblNumOxygenFlow->Location = System::Drawing::Point(159, 11);
			   this->lblNumOxygenFlow->Name = L"lblNumOxygenFlow";
			   this->lblNumOxygenFlow->Size = System::Drawing::Size(39, 19);
			   this->lblNumOxygenFlow->TabIndex = 94;
			   this->lblNumOxygenFlow->Text = L"2,00";
			   // 
			   // lblFlowRate
			   // 
			   this->lblFlowRate->AutoSize = true;
			   this->lblFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblFlowRate->Location = System::Drawing::Point(12, 11);
			   this->lblFlowRate->Name = L"lblFlowRate";
			   this->lblFlowRate->Size = System::Drawing::Size(92, 19);
			   this->lblFlowRate->TabIndex = 92;
			   this->lblFlowRate->Text = L"Oxygen Flow";
			   // 
			   // lblUnitOxygenFlow3
			   // 
			   this->lblUnitOxygenFlow3->AutoSize = true;
			   this->lblUnitOxygenFlow3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitOxygenFlow3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitOxygenFlow3->ForeColor = System::Drawing::Color::White;
			   this->lblUnitOxygenFlow3->Location = System::Drawing::Point(272, 11);
			   this->lblUnitOxygenFlow3->Name = L"lblUnitOxygenFlow3";
			   this->lblUnitOxygenFlow3->Size = System::Drawing::Size(21, 19);
			   this->lblUnitOxygenFlow3->TabIndex = 104;
			   this->lblUnitOxygenFlow3->Text = L"/s";
			   // 
			   // LungForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->ClientSize = System::Drawing::Size(1241, 760);
			   this->Controls->Add(this->pnParameters);
			   this->Controls->Add(this->pnPreset);
			   this->Controls->Add(this->picVis);
			   this->Controls->Add(this->cmdBack);
			   this->Controls->Add(this->pnCVS);
			   this->Controls->Add(this->pnOxygen);
			   this->Controls->Add(this->pnOxValues);
			   this->Name = L"LungForm";
			   this->Text = L"LungForm";
			   this->pnPreset->ResumeLayout(false);
			   this->pnPreset->PerformLayout();
			   this->pnCVS->ResumeLayout(false);
			   this->pnCVS->PerformLayout();
			   this->pnOxygen->ResumeLayout(false);
			   this->pnOxygen->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picVis))->EndInit();
			   this->pnParameters->ResumeLayout(false);
			   this->pnParameters->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCoefficient))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMassFlow))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOutflow))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numInflow))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAtmosDen))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMassAir))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLungVol))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numGas))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCritical))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDownPress))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpPress))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numThrottle))->EndInit();
			   this->pnOxValues->ResumeLayout(false);
			   this->pnOxValues->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	public:
		Decimal GetAreaOfThrottle();
		Decimal GetUpstreamPressure();
		Decimal GetDownstreamPressure();
		Decimal GetCriticalPressureRatio();
		Decimal GetGasConstant();
		Decimal GetLungVolume();
		Decimal GetMassOfAir();
		Decimal GetAirMassFlow();
		Decimal GetAtmosphericDensity();
		Decimal GetRespiratoryComplianceInflow();
		Decimal GetRespiratoryComplianceOutflow();
		Decimal GetCoefficient();
		System::Void UpdateOxygenFlow(double new_oxygen_flow);
		System::Void UpdatePressure(double new_pressure);

	private: System::Void cmdBack_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
		parent_form->BringToFront();
	}
	private: System::Void cmdResetThrottle_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetAreaOfThrottle();
		numThrottle->Value = (Decimal)human_parent_ptr->lung->GetAreaOfThrottle();
	}
	private: System::Void cmdResetUpPress_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetUpstreamPressure();
		numUpPress->Value = (Decimal)human_parent_ptr->lung->GetUpstreamPressure();
	}
	private: System::Void cmdResetDownPress_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetDownstreamPressure();
		numDownPress->Value = (Decimal)human_parent_ptr->lung->GetDownstreamPressure();
	}
	private: System::Void cmdResetCritical_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetCriticalPressureRatio();
		numCritical->Value = (Decimal)human_parent_ptr->lung->GetCriticalPressureRatio();
	}
	private: System::Void cmdResetGas_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetGasConstant();
		numGas->Value = (Decimal)human_parent_ptr->lung->GetGasConstant();
	}
	private: System::Void cmdResetLungVol_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetVolume();
		numLungVol->Value = (Decimal)human_parent_ptr->lung->GetVolume();
	}
	private: System::Void cmdResetMassAir_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetMassOfAir();
		numMassAir->Value = (Decimal)human_parent_ptr->lung->GetMassOfAir();
	}
	private: System::Void cmdResetAtmosDen_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetAtmosphericDensity();
		numAtmosDen->Value = (Decimal)human_parent_ptr->lung->GetAtmosphericDensity();
	}
	private: System::Void cmdInflow_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetRespiratoryComplianceInflow();
		numInflow->Value = (Decimal)human_parent_ptr->lung->GetRespiratoryComplianceInflow();
	}
	private: System::Void cmdOutflow_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetRespiratoryComplianceOutflow();
		numOutflow->Value = (Decimal)human_parent_ptr->lung->GetRespiratoryComplianceOutflow();
	}
	private: System::Void cmdMassFlow_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetAirMassFlow();
		numMassFlow->Value = (Decimal)human_parent_ptr->lung->GetAirMassFlow();
	}
	private: System::Void cmdCoefficient_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->ResetPressureSummand();
		numMassFlow->Value = (Decimal)human_parent_ptr->lung->GetPressureSummand();
	}
	private: System::Void numThrottle_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetAreaOfThrottle((double)numThrottle->Value);
	}
	private: System::Void numUpPress_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetUpstreamPressure((double)numUpPress->Value);
	}
	private: System::Void numDownPress_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetDownstreamPressure((double)numDownPress->Value);
	}
	private: System::Void numCritical_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetCriticalPressureRatio((double)numCritical->Value);
	}
	private: System::Void numGas_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetGasConstant((double)numGas->Value);
	}
	private: System::Void numLungVol_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetVolume((double)numLungVol->Value);
	}
	private: System::Void numMassAir_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetMassOfAir((double)numMassAir->Value);
	}
	private: System::Void numAtmosDen_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetAtmosphericDensity((double)numAtmosDen->Value);
	}
	private: System::Void numInflow_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetRespiratoryComplianceInflow((double)numInflow->Value);
	}
	private: System::Void numOutflow_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetRespiratoryComplianceOutflow((double)numOutflow->Value);
	}
	private: System::Void numMassFlow_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetAirMassFlow((double)numMassFlow->Value);
	}
	private: System::Void numCoefficient_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->lung->SetPressureSummand((double)numCoefficient->Value);
	}
	};
}
