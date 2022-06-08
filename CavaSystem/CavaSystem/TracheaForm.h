#pragma once

#include <cstdio>
#include <cstring>
#include <string>
#include "Human.h"

namespace CavaSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class TracheaForm : public System::Windows::Forms::Form
	{
	public:
		TracheaForm(Form^ form, Human* human_ptr)
		{
			InitializeComponent();
			parent_form = form;
			human_parent_ptr = human_ptr;
		}

	protected:
		~TracheaForm()
		{
			parent_form = nullptr;
			human_parent_ptr = nullptr;
			if (components)
			{
				delete components;
			}
		}

	private: Human* human_parent_ptr = nullptr;

	private: Form^ parent_form;

	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ pnCVS;
	private: System::Windows::Forms::Panel^ pnOx;
	private: System::Windows::Forms::Panel^ pnPreset;
	private: System::Windows::Forms::Panel^ pnOxValues;
	private: System::Windows::Forms::Panel^ pnParameters;
	private: System::Windows::Forms::Label^ lblCVS;
	private: System::Windows::Forms::Label^ lblOxygen;
	private: System::Windows::Forms::Label^ lblPreset;
	private: System::Windows::Forms::Label^ lblResRate;
	private: System::Windows::Forms::Label^ lblFlowRate;
	private: System::Windows::Forms::Label^ lblBlock;
	private: System::Windows::Forms::Label^ lblMeanFlow;
	private: System::Windows::Forms::Label^ lblVis;
	private: System::Windows::Forms::Label^ lblTracheal;
	private: System::Windows::Forms::Label^ lblNumResRate;
	private: System::Windows::Forms::Label^ lblNumVis1;
	private: System::Windows::Forms::Label^ blNumVis2;
	private: System::Windows::Forms::Label^ lblNumVis3;
	private: System::Windows::Forms::Label^ lblNumVIs4;
	private: System::Windows::Forms::Label^ lblNumMeanFlow1;
	private: System::Windows::Forms::Label^ lblNumMeanFlow2;
	private: System::Windows::Forms::Label^ lblNumTracheal;
	private: System::Windows::Forms::Label^ lblNumFlowRate;
	private: System::Windows::Forms::Label^ lblNumOxygen;
	private: System::Windows::Forms::Label^ lblUnitFlowRate;
	private: System::Windows::Forms::Label^ lblUnitBlock;
	private: System::Windows::Forms::Label^ lbUnitOxygen;
	private: System::Windows::Forms::Label^ lblUnitOxygen;
	private: System::Windows::Forms::NumericUpDown^ numResRate;
	private: System::Windows::Forms::NumericUpDown^ numVis;
	private: System::Windows::Forms::NumericUpDown^ numSpeed;
	private: System::Windows::Forms::NumericUpDown^ numDiameter;
	private: System::Windows::Forms::NumericUpDown^ numBlock;
	private: System::Windows::Forms::Button^ cmdBack;
	private: System::Windows::Forms::Button^ cmdResetVis;
	private: System::Windows::Forms::Button^ cmdResetFlow;
	private: System::Windows::Forms::Button^ cmdResetDiameter;
	private: System::Windows::Forms::Button^ cmdBlock;
	private: System::Windows::Forms::Button^ cmdResetResRate;
	private: System::Windows::Forms::NumericUpDown^ numThickness;
	private: System::Windows::Forms::Button^ cmdThickness;
	private: System::Windows::Forms::Label^ lblUnitThickness;
	private: System::Windows::Forms::Label^ lblThickness;
	private: System::Windows::Forms::PictureBox^ picVis;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TracheaForm::typeid));
			   this->pnCVS = (gcnew System::Windows::Forms::Panel());
			   this->lblCVS = (gcnew System::Windows::Forms::Label());
			   this->cmdBack = (gcnew System::Windows::Forms::Button());
			   this->lblOxygen = (gcnew System::Windows::Forms::Label());
			   this->pnOx = (gcnew System::Windows::Forms::Panel());
			   this->lbUnitOxygen = (gcnew System::Windows::Forms::Label());
			   this->lblNumOxygen = (gcnew System::Windows::Forms::Label());
			   this->pnPreset = (gcnew System::Windows::Forms::Panel());
			   this->lblPreset = (gcnew System::Windows::Forms::Label());
			   this->pnParameters = (gcnew System::Windows::Forms::Panel());
			   this->numThickness = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdThickness = (gcnew System::Windows::Forms::Button());
			   this->lblUnitThickness = (gcnew System::Windows::Forms::Label());
			   this->lblThickness = (gcnew System::Windows::Forms::Label());
			   this->numBlock = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdBlock = (gcnew System::Windows::Forms::Button());
			   this->lblUnitBlock = (gcnew System::Windows::Forms::Label());
			   this->lblBlock = (gcnew System::Windows::Forms::Label());
			   this->lblNumVIs4 = (gcnew System::Windows::Forms::Label());
			   this->lblNumVis3 = (gcnew System::Windows::Forms::Label());
			   this->blNumVis2 = (gcnew System::Windows::Forms::Label());
			   this->lblNumMeanFlow2 = (gcnew System::Windows::Forms::Label());
			   this->numResRate = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdResetResRate = (gcnew System::Windows::Forms::Button());
			   this->lblNumResRate = (gcnew System::Windows::Forms::Label());
			   this->lblResRate = (gcnew System::Windows::Forms::Label());
			   this->numVis = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numSpeed = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numDiameter = (gcnew System::Windows::Forms::NumericUpDown());
			   this->cmdResetVis = (gcnew System::Windows::Forms::Button());
			   this->cmdResetFlow = (gcnew System::Windows::Forms::Button());
			   this->cmdResetDiameter = (gcnew System::Windows::Forms::Button());
			   this->lblNumVis1 = (gcnew System::Windows::Forms::Label());
			   this->lblNumMeanFlow1 = (gcnew System::Windows::Forms::Label());
			   this->lblNumTracheal = (gcnew System::Windows::Forms::Label());
			   this->lblMeanFlow = (gcnew System::Windows::Forms::Label());
			   this->lblVis = (gcnew System::Windows::Forms::Label());
			   this->lblTracheal = (gcnew System::Windows::Forms::Label());
			   this->picVis = (gcnew System::Windows::Forms::PictureBox());
			   this->pnOxValues = (gcnew System::Windows::Forms::Panel());
			   this->lblUnitFlowRate = (gcnew System::Windows::Forms::Label());
			   this->lblNumFlowRate = (gcnew System::Windows::Forms::Label());
			   this->lblFlowRate = (gcnew System::Windows::Forms::Label());
			   this->pnCVS->SuspendLayout();
			   this->pnOx->SuspendLayout();
			   this->pnPreset->SuspendLayout();
			   this->pnParameters->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numThickness))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBlock))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numResRate))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numVis))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSpeed))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDiameter))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picVis))->BeginInit();
			   this->pnOxValues->SuspendLayout();
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
			   this->pnCVS->Size = System::Drawing::Size(944, 47);
			   this->pnCVS->TabIndex = 14;
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
			   this->cmdBack->TabIndex = 15;
			   this->cmdBack->Text = L"CLOSE";
			   this->cmdBack->UseVisualStyleBackColor = false;
			   this->cmdBack->Click += gcnew System::EventHandler(this, &TracheaForm::cmdBack_Click);
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
			   // pnOx
			   // 
			   this->pnOx->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->pnOx->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnOx->Controls->Add(this->lbUnitOxygen);
			   this->pnOx->Controls->Add(this->lblNumOxygen);
			   this->pnOx->Controls->Add(this->lblOxygen);
			   this->pnOx->Location = System::Drawing::Point(144, 100);
			   this->pnOx->Name = L"pnOx";
			   this->pnOx->Size = System::Drawing::Size(800, 28);
			   this->pnOx->TabIndex = 20;
			   // 
			   // lbUnitOxygen
			   // 
			   this->lbUnitOxygen->AutoSize = true;
			   this->lbUnitOxygen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lbUnitOxygen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbUnitOxygen->ForeColor = System::Drawing::Color::White;
			   this->lbUnitOxygen->Location = System::Drawing::Point(156, 4);
			   this->lbUnitOxygen->Name = L"lbUnitOxygen";
			   this->lbUnitOxygen->Size = System::Drawing::Size(19, 19);
			   this->lbUnitOxygen->TabIndex = 46;
			   this->lbUnitOxygen->Text = L"%";
			   // 
			   // lblNumOxygen
			   // 
			   this->lblNumOxygen->AutoSize = true;
			   this->lblNumOxygen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lblNumOxygen->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumOxygen->ForeColor = System::Drawing::Color::White;
			   this->lblNumOxygen->Location = System::Drawing::Point(118, 4);
			   this->lblNumOxygen->Name = L"lblNumOxygen";
			   this->lblNumOxygen->Size = System::Drawing::Size(34, 19);
			   this->lblNumOxygen->TabIndex = 45;
			   this->lblNumOxygen->Text = L"100";
			   // 
			   // pnPreset
			   // 
			   this->pnPreset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->pnPreset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pnPreset->Controls->Add(this->lblPreset);
			   this->pnPreset->Location = System::Drawing::Point(144, 214);
			   this->pnPreset->Name = L"pnPreset";
			   this->pnPreset->Size = System::Drawing::Size(800, 28);
			   this->pnPreset->TabIndex = 23;
			   // 
			   // lblPreset
			   // 
			   this->lblPreset->AutoSize = true;
			   this->lblPreset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(47)));
			   this->lblPreset->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblPreset->ForeColor = System::Drawing::Color::White;
			   this->lblPreset->Location = System::Drawing::Point(3, 4);
			   this->lblPreset->Name = L"lblPreset";
			   this->lblPreset->Size = System::Drawing::Size(137, 19);
			   this->lblPreset->TabIndex = 18;
			   this->lblPreset->Text = L"Preset Parameters";
			   // 
			   // pnParameters
			   // 
			   this->pnParameters->AutoScroll = true;
			   this->pnParameters->AutoSize = true;
			   this->pnParameters->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnParameters->Controls->Add(this->numThickness);
			   this->pnParameters->Controls->Add(this->cmdThickness);
			   this->pnParameters->Controls->Add(this->lblUnitThickness);
			   this->pnParameters->Controls->Add(this->lblThickness);
			   this->pnParameters->Controls->Add(this->numBlock);
			   this->pnParameters->Controls->Add(this->cmdBlock);
			   this->pnParameters->Controls->Add(this->lblUnitBlock);
			   this->pnParameters->Controls->Add(this->lblBlock);
			   this->pnParameters->Controls->Add(this->lblNumVIs4);
			   this->pnParameters->Controls->Add(this->lblNumVis3);
			   this->pnParameters->Controls->Add(this->blNumVis2);
			   this->pnParameters->Controls->Add(this->lblNumMeanFlow2);
			   this->pnParameters->Controls->Add(this->numResRate);
			   this->pnParameters->Controls->Add(this->cmdResetResRate);
			   this->pnParameters->Controls->Add(this->lblNumResRate);
			   this->pnParameters->Controls->Add(this->lblResRate);
			   this->pnParameters->Controls->Add(this->numVis);
			   this->pnParameters->Controls->Add(this->numSpeed);
			   this->pnParameters->Controls->Add(this->numDiameter);
			   this->pnParameters->Controls->Add(this->cmdResetVis);
			   this->pnParameters->Controls->Add(this->cmdResetFlow);
			   this->pnParameters->Controls->Add(this->cmdResetDiameter);
			   this->pnParameters->Controls->Add(this->lblNumVis1);
			   this->pnParameters->Controls->Add(this->lblNumMeanFlow1);
			   this->pnParameters->Controls->Add(this->lblNumTracheal);
			   this->pnParameters->Controls->Add(this->lblMeanFlow);
			   this->pnParameters->Controls->Add(this->lblVis);
			   this->pnParameters->Controls->Add(this->lblTracheal);
			   this->pnParameters->Location = System::Drawing::Point(144, 248);
			   this->pnParameters->Name = L"pnParameters";
			   this->pnParameters->Size = System::Drawing::Size(799, 204);
			   this->pnParameters->TabIndex = 45;
			   // 
			   // numThickness
			   // 
			   this->numThickness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numThickness->DecimalPlaces = 2;
			   this->numThickness->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->numThickness->ForeColor = System::Drawing::Color::White;
			   this->numThickness->Location = System::Drawing::Point(177, 174);
			   this->numThickness->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numThickness->Name = L"numThickness";
			   this->numThickness->Size = System::Drawing::Size(134, 26);
			   this->numThickness->TabIndex = 93;
			   this->numThickness->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numThickness->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			   this->numThickness->ValueChanged += gcnew System::EventHandler(this, &TracheaForm::numThickness_ValueChanged);
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
			   this->cmdThickness->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->cmdThickness->Location = System::Drawing::Point(403, 175);
			   this->cmdThickness->Name = L"cmdThickness";
			   this->cmdThickness->Size = System::Drawing::Size(59, 22);
			   this->cmdThickness->TabIndex = 92;
			   this->cmdThickness->Text = L"Reset";
			   this->cmdThickness->UseVisualStyleBackColor = false;
			   // 
			   // lblUnitThickness
			   // 
			   this->lblUnitThickness->AutoSize = true;
			   this->lblUnitThickness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitThickness->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lblUnitThickness->ForeColor = System::Drawing::Color::White;
			   this->lblUnitThickness->Location = System::Drawing::Point(324, 175);
			   this->lblUnitThickness->Name = L"lblUnitThickness";
			   this->lblUnitThickness->Size = System::Drawing::Size(37, 19);
			   this->lblUnitThickness->TabIndex = 91;
			   this->lblUnitThickness->Text = L"mm";
			   // 
			   // lblThickness
			   // 
			   this->lblThickness->AutoSize = true;
			   this->lblThickness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblThickness->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblThickness->ForeColor = System::Drawing::Color::White;
			   this->lblThickness->Location = System::Drawing::Point(12, 175);
			   this->lblThickness->Name = L"lblThickness";
			   this->lblThickness->Size = System::Drawing::Size(114, 19);
			   this->lblThickness->TabIndex = 90;
			   this->lblThickness->Text = L"Outer Thickness";
			   // 
			   // numBlock
			   // 
			   this->numBlock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numBlock->DecimalPlaces = 2;
			   this->numBlock->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numBlock->ForeColor = System::Drawing::Color::White;
			   this->numBlock->Location = System::Drawing::Point(177, 13);
			   this->numBlock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numBlock->Name = L"numBlock";
			   this->numBlock->Size = System::Drawing::Size(134, 26);
			   this->numBlock->TabIndex = 81;
			   this->numBlock->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numBlock->ValueChanged += gcnew System::EventHandler(this, &TracheaForm::numBlock_ValueChanged);
			   // 
			   // cmdBlock
			   // 
			   this->cmdBlock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdBlock->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdBlock->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdBlock->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdBlock->ForeColor = System::Drawing::Color::White;
			   this->cmdBlock->Location = System::Drawing::Point(403, 13);
			   this->cmdBlock->Name = L"cmdBlock";
			   this->cmdBlock->Size = System::Drawing::Size(59, 23);
			   this->cmdBlock->TabIndex = 80;
			   this->cmdBlock->Text = L"Reset";
			   this->cmdBlock->UseVisualStyleBackColor = false;
			   this->cmdBlock->Click += gcnew System::EventHandler(this, &TracheaForm::cmdBlock_Click);
			   // 
			   // lblUnitBlock
			   // 
			   this->lblUnitBlock->AutoSize = true;
			   this->lblUnitBlock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitBlock->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitBlock->ForeColor = System::Drawing::Color::White;
			   this->lblUnitBlock->Location = System::Drawing::Point(321, 16);
			   this->lblUnitBlock->Name = L"lblUnitBlock";
			   this->lblUnitBlock->Size = System::Drawing::Size(19, 19);
			   this->lblUnitBlock->TabIndex = 79;
			   this->lblUnitBlock->Text = L"%";
			   // 
			   // lblBlock
			   // 
			   this->lblBlock->AutoSize = true;
			   this->lblBlock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblBlock->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblBlock->ForeColor = System::Drawing::Color::White;
			   this->lblBlock->Location = System::Drawing::Point(12, 14);
			   this->lblBlock->Name = L"lblBlock";
			   this->lblBlock->Size = System::Drawing::Size(123, 19);
			   this->lblBlock->TabIndex = 78;
			   this->lblBlock->Text = L"Block Percentage";
			   // 
			   // lblNumVIs4
			   // 
			   this->lblNumVIs4->AutoSize = true;
			   this->lblNumVIs4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumVIs4->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumVIs4->ForeColor = System::Drawing::Color::White;
			   this->lblNumVIs4->Location = System::Drawing::Point(372, 109);
			   this->lblNumVIs4->Name = L"lblNumVIs4";
			   this->lblNumVIs4->Size = System::Drawing::Size(15, 13);
			   this->lblNumVIs4->TabIndex = 77;
			   this->lblNumVIs4->Text = L"-1";
			   // 
			   // lblNumVis3
			   // 
			   this->lblNumVis3->AutoSize = true;
			   this->lblNumVis3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumVis3->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumVis3->ForeColor = System::Drawing::Color::White;
			   this->lblNumVis3->Location = System::Drawing::Point(349, 110);
			   this->lblNumVis3->Name = L"lblNumVis3";
			   this->lblNumVis3->Size = System::Drawing::Size(25, 19);
			   this->lblNumVis3->TabIndex = 76;
			   this->lblNumVis3->Text = L"· s";
			   // 
			   // blNumVis2
			   // 
			   this->blNumVis2->AutoSize = true;
			   this->blNumVis2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->blNumVis2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->blNumVis2->ForeColor = System::Drawing::Color::White;
			   this->blNumVis2->Location = System::Drawing::Point(339, 110);
			   this->blNumVis2->Name = L"blNumVis2";
			   this->blNumVis2->Size = System::Drawing::Size(12, 13);
			   this->blNumVis2->TabIndex = 75;
			   this->blNumVis2->Text = L"2";
			   // 
			   // lblNumMeanFlow2
			   // 
			   this->lblNumMeanFlow2->AutoSize = true;
			   this->lblNumMeanFlow2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumMeanFlow2->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumMeanFlow2->ForeColor = System::Drawing::Color::White;
			   this->lblNumMeanFlow2->Location = System::Drawing::Point(347, 77);
			   this->lblNumMeanFlow2->Name = L"lblNumMeanFlow2";
			   this->lblNumMeanFlow2->Size = System::Drawing::Size(15, 13);
			   this->lblNumMeanFlow2->TabIndex = 74;
			   this->lblNumMeanFlow2->Text = L"-1";
			   // 
			   // numResRate
			   // 
			   this->numResRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numResRate->DecimalPlaces = 2;
			   this->numResRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numResRate->ForeColor = System::Drawing::Color::White;
			   this->numResRate->Location = System::Drawing::Point(177, 141);
			   this->numResRate->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numResRate->Name = L"numResRate";
			   this->numResRate->Size = System::Drawing::Size(134, 26);
			   this->numResRate->TabIndex = 72;
			   this->numResRate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numResRate->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			   this->numResRate->ValueChanged += gcnew System::EventHandler(this, &TracheaForm::numResRate_ValueChanged);
			   // 
			   // cmdResetResRate
			   // 
			   this->cmdResetResRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetResRate->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetResRate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetResRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetResRate->ForeColor = System::Drawing::Color::White;
			   this->cmdResetResRate->Location = System::Drawing::Point(403, 142);
			   this->cmdResetResRate->Name = L"cmdResetResRate";
			   this->cmdResetResRate->Size = System::Drawing::Size(59, 22);
			   this->cmdResetResRate->TabIndex = 71;
			   this->cmdResetResRate->Text = L"Reset";
			   this->cmdResetResRate->UseVisualStyleBackColor = false;
			   this->cmdResetResRate->Click += gcnew System::EventHandler(this, &TracheaForm::cmdResetResRate_Click);
			   // 
			   // lblNumResRate
			   // 
			   this->lblNumResRate->AutoSize = true;
			   this->lblNumResRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumResRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumResRate->ForeColor = System::Drawing::Color::White;
			   this->lblNumResRate->Location = System::Drawing::Point(324, 142);
			   this->lblNumResRate->Name = L"lblNumResRate";
			   this->lblNumResRate->Size = System::Drawing::Size(41, 19);
			   this->lblNumResRate->TabIndex = 70;
			   this->lblNumResRate->Text = L"bpm";
			   // 
			   // lblResRate
			   // 
			   this->lblResRate->AutoSize = true;
			   this->lblResRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblResRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblResRate->ForeColor = System::Drawing::Color::White;
			   this->lblResRate->Location = System::Drawing::Point(12, 142);
			   this->lblResRate->Name = L"lblResRate";
			   this->lblResRate->Size = System::Drawing::Size(121, 19);
			   this->lblResRate->TabIndex = 69;
			   this->lblResRate->Text = L"Respiratory Rate";
			   // 
			   // numVis
			   // 
			   this->numVis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numVis->DecimalPlaces = 8;
			   this->numVis->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numVis->ForeColor = System::Drawing::Color::White;
			   this->numVis->Location = System::Drawing::Point(177, 109);
			   this->numVis->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numVis->Name = L"numVis";
			   this->numVis->Size = System::Drawing::Size(134, 26);
			   this->numVis->TabIndex = 63;
			   this->numVis->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numVis->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 146, 0, 0, 458752 });
			   this->numVis->ValueChanged += gcnew System::EventHandler(this, &TracheaForm::numVis_ValueChanged);
			   // 
			   // numSpeed
			   // 
			   this->numSpeed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numSpeed->DecimalPlaces = 5;
			   this->numSpeed->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numSpeed->ForeColor = System::Drawing::Color::White;
			   this->numSpeed->Location = System::Drawing::Point(177, 77);
			   this->numSpeed->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numSpeed->Name = L"numSpeed";
			   this->numSpeed->Size = System::Drawing::Size(134, 26);
			   this->numSpeed->TabIndex = 62;
			   this->numSpeed->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numSpeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 34, 0, 0, 65536 });
			   this->numSpeed->ValueChanged += gcnew System::EventHandler(this, &TracheaForm::numSpeed_ValueChanged);
			   // 
			   // numDiameter
			   // 
			   this->numDiameter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->numDiameter->DecimalPlaces = 2;
			   this->numDiameter->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->numDiameter->ForeColor = System::Drawing::Color::White;
			   this->numDiameter->Location = System::Drawing::Point(177, 45);
			   this->numDiameter->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			   this->numDiameter->Name = L"numDiameter";
			   this->numDiameter->Size = System::Drawing::Size(134, 26);
			   this->numDiameter->TabIndex = 60;
			   this->numDiameter->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			   this->numDiameter->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			   this->numDiameter->ValueChanged += gcnew System::EventHandler(this, &TracheaForm::numDiameter_ValueChanged);
			   // 
			   // cmdResetVis
			   // 
			   this->cmdResetVis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetVis->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetVis->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetVis->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetVis->ForeColor = System::Drawing::Color::White;
			   this->cmdResetVis->Location = System::Drawing::Point(403, 110);
			   this->cmdResetVis->Name = L"cmdResetVis";
			   this->cmdResetVis->Size = System::Drawing::Size(59, 22);
			   this->cmdResetVis->TabIndex = 58;
			   this->cmdResetVis->Text = L"Reset";
			   this->cmdResetVis->UseVisualStyleBackColor = false;
			   this->cmdResetVis->Click += gcnew System::EventHandler(this, &TracheaForm::cmdResetVis_Click);
			   // 
			   // cmdResetFlow
			   // 
			   this->cmdResetFlow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetFlow->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetFlow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetFlow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetFlow->ForeColor = System::Drawing::Color::White;
			   this->cmdResetFlow->Location = System::Drawing::Point(403, 78);
			   this->cmdResetFlow->Name = L"cmdResetFlow";
			   this->cmdResetFlow->Size = System::Drawing::Size(59, 22);
			   this->cmdResetFlow->TabIndex = 57;
			   this->cmdResetFlow->Text = L"Reset";
			   this->cmdResetFlow->UseVisualStyleBackColor = false;
			   this->cmdResetFlow->Click += gcnew System::EventHandler(this, &TracheaForm::cmdResetFlow_Click);
			   // 
			   // cmdResetDiameter
			   // 
			   this->cmdResetDiameter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->cmdResetDiameter->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cmdResetDiameter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->cmdResetDiameter->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cmdResetDiameter->ForeColor = System::Drawing::Color::White;
			   this->cmdResetDiameter->Location = System::Drawing::Point(403, 46);
			   this->cmdResetDiameter->Name = L"cmdResetDiameter";
			   this->cmdResetDiameter->Size = System::Drawing::Size(59, 23);
			   this->cmdResetDiameter->TabIndex = 55;
			   this->cmdResetDiameter->Text = L"Reset";
			   this->cmdResetDiameter->UseVisualStyleBackColor = false;
			   this->cmdResetDiameter->Click += gcnew System::EventHandler(this, &TracheaForm::cmdResetDiameter_Click);
			   // 
			   // lblNumVis1
			   // 
			   this->lblNumVis1->AutoSize = true;
			   this->lblNumVis1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumVis1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumVis1->ForeColor = System::Drawing::Color::White;
			   this->lblNumVis1->Location = System::Drawing::Point(321, 110);
			   this->lblNumVis1->Name = L"lblNumVis1";
			   this->lblNumVis1->Size = System::Drawing::Size(23, 19);
			   this->lblNumVis1->TabIndex = 53;
			   this->lblNumVis1->Text = L"m";
			   // 
			   // lblNumMeanFlow1
			   // 
			   this->lblNumMeanFlow1->AutoSize = true;
			   this->lblNumMeanFlow1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumMeanFlow1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumMeanFlow1->ForeColor = System::Drawing::Color::White;
			   this->lblNumMeanFlow1->Location = System::Drawing::Point(321, 78);
			   this->lblNumMeanFlow1->Name = L"lblNumMeanFlow1";
			   this->lblNumMeanFlow1->Size = System::Drawing::Size(30, 19);
			   this->lblNumMeanFlow1->TabIndex = 52;
			   this->lblNumMeanFlow1->Text = L"ms";
			   // 
			   // lblNumTracheal
			   // 
			   this->lblNumTracheal->AutoSize = true;
			   this->lblNumTracheal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumTracheal->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumTracheal->ForeColor = System::Drawing::Color::White;
			   this->lblNumTracheal->Location = System::Drawing::Point(321, 46);
			   this->lblNumTracheal->Name = L"lblNumTracheal";
			   this->lblNumTracheal->Size = System::Drawing::Size(37, 19);
			   this->lblNumTracheal->TabIndex = 50;
			   this->lblNumTracheal->Text = L"mm";
			   // 
			   // lblMeanFlow
			   // 
			   this->lblMeanFlow->AutoSize = true;
			   this->lblMeanFlow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblMeanFlow->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMeanFlow->ForeColor = System::Drawing::Color::White;
			   this->lblMeanFlow->Location = System::Drawing::Point(12, 78);
			   this->lblMeanFlow->Name = L"lblMeanFlow";
			   this->lblMeanFlow->Size = System::Drawing::Size(126, 19);
			   this->lblMeanFlow->TabIndex = 48;
			   this->lblMeanFlow->Text = L"Mean Flow Speed";
			   // 
			   // lblVis
			   // 
			   this->lblVis->AutoSize = true;
			   this->lblVis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblVis->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblVis->ForeColor = System::Drawing::Color::White;
			   this->lblVis->Location = System::Drawing::Point(12, 110);
			   this->lblVis->Name = L"lblVis";
			   this->lblVis->Size = System::Drawing::Size(130, 19);
			   this->lblVis->TabIndex = 47;
			   this->lblVis->Text = L"Viscosity of the Air";
			   // 
			   // lblTracheal
			   // 
			   this->lblTracheal->AutoSize = true;
			   this->lblTracheal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblTracheal->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblTracheal->ForeColor = System::Drawing::Color::White;
			   this->lblTracheal->Location = System::Drawing::Point(12, 46);
			   this->lblTracheal->Name = L"lblTracheal";
			   this->lblTracheal->Size = System::Drawing::Size(133, 19);
			   this->lblTracheal->TabIndex = 45;
			   this->lblTracheal->Text = L"Tracheal Diameter";
			   // 
			   // picVis
			   // 
			   this->picVis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picVis.Image")));
			   this->picVis->Location = System::Drawing::Point(12, 100);
			   this->picVis->Name = L"picVis";
			   this->picVis->Size = System::Drawing::Size(113, 352);
			   this->picVis->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->picVis->TabIndex = 53;
			   this->picVis->TabStop = false;
			   // 
			   // pnOxValues
			   // 
			   this->pnOxValues->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->pnOxValues->Controls->Add(this->lblUnitFlowRate);
			   this->pnOxValues->Controls->Add(this->lblNumFlowRate);
			   this->pnOxValues->Controls->Add(this->lblFlowRate);
			   this->pnOxValues->Location = System::Drawing::Point(144, 134);
			   this->pnOxValues->Name = L"pnOxValues";
			   this->pnOxValues->Size = System::Drawing::Size(800, 74);
			   this->pnOxValues->TabIndex = 54;
			   // 
			   // lblUnitFlowRate
			   // 
			   this->lblUnitFlowRate->AutoSize = true;
			   this->lblUnitFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblUnitFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUnitFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblUnitFlowRate->Location = System::Drawing::Point(236, 12);
			   this->lblUnitFlowRate->Name = L"lblUnitFlowRate";
			   this->lblUnitFlowRate->Size = System::Drawing::Size(46, 19);
			   this->lblUnitFlowRate->TabIndex = 50;
			   this->lblUnitFlowRate->Text = L"L/min";
			   this->lblUnitFlowRate->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // lblNumFlowRate
			   // 
			   this->lblNumFlowRate->AutoSize = true;
			   this->lblNumFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblNumFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblNumFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblNumFlowRate->Location = System::Drawing::Point(137, 12);
			   this->lblNumFlowRate->Name = L"lblNumFlowRate";
			   this->lblNumFlowRate->Size = System::Drawing::Size(53, 19);
			   this->lblNumFlowRate->TabIndex = 49;
			   this->lblNumFlowRate->Text = L"880.43";
			   this->lblNumFlowRate->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // lblFlowRate
			   // 
			   this->lblFlowRate->AutoSize = true;
			   this->lblFlowRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->lblFlowRate->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblFlowRate->ForeColor = System::Drawing::Color::White;
			   this->lblFlowRate->Location = System::Drawing::Point(12, 12);
			   this->lblFlowRate->Name = L"lblFlowRate";
			   this->lblFlowRate->Size = System::Drawing::Size(73, 19);
			   this->lblFlowRate->TabIndex = 48;
			   this->lblFlowRate->Text = L"Flow Rate";
			   // 
			   // TracheaForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->ClientSize = System::Drawing::Size(1153, 473);
			   this->Controls->Add(this->pnOxValues);
			   this->Controls->Add(this->picVis);
			   this->Controls->Add(this->pnParameters);
			   this->Controls->Add(this->pnPreset);
			   this->Controls->Add(this->cmdBack);
			   this->Controls->Add(this->pnCVS);
			   this->Controls->Add(this->pnOx);
			   this->Name = L"TracheaForm";
			   this->Text = L"HumanForm";
			   this->pnCVS->ResumeLayout(false);
			   this->pnCVS->PerformLayout();
			   this->pnOx->ResumeLayout(false);
			   this->pnOx->PerformLayout();
			   this->pnPreset->ResumeLayout(false);
			   this->pnPreset->PerformLayout();
			   this->pnParameters->ResumeLayout(false);
			   this->pnParameters->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numThickness))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBlock))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numResRate))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numVis))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSpeed))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDiameter))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picVis))->EndInit();
			   this->pnOxValues->ResumeLayout(false);
			   this->pnOxValues->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	public:
		Decimal GetTrachealDiameter();
		Decimal GetMeanFlowSpeed();
		Decimal GetViscosityOfAir();
		Decimal GetRespiratoryRate();
		Decimal GetBlockPercentage();
		Decimal GetOuterThickness();
		System::Void UpdateFlowRate(double new_flow_rate);
		System::Void UpdateOxygen(double oxygen);

	private: System::Void cmdBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		parent_form->BringToFront();
	}

	private: System::Void cmdBlock_Click(System::Object^ sender, System::EventArgs^ e) {
		numBlock->Value = 0;
	}
	private: System::Void cmdResetDiameter_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->ResetTrachealDiameter();
		numDiameter->Value = (Decimal)human_parent_ptr->trachea->GetTrachealDiameter();
	}
	private: System::Void cmdResetFlow_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->ResetMeanFlowSpeed();
		numSpeed->Value = (Decimal)human_parent_ptr->trachea->GetMeanFlowSpeed();
	}
	private: System::Void cmdResetVis_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->ResetViscosityOfAir();
		numVis->Value = (Decimal)human_parent_ptr->trachea->GetViscosityOfAir();
	}
	private: System::Void cmdResetResRate_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->GetRespiratoryRate();
		numResRate->Value = (Decimal)human_parent_ptr->trachea->GetRespiratoryRate();
	}
	private: System::Void cmdThickness_Click(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->ResetOuterThickness();
		numThickness->Value = (Decimal)human_parent_ptr->trachea->GetOuterThickness();
	}
	private: System::Void numBlock_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->SetBlockPercentage((double)numBlock->Value);
	}
	private: System::Void numDiameter_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->SetTrachealDiameter((double)numDiameter->Value);
	}
	private: System::Void numSpeed_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->SetMeanFlowSpeed((double)numSpeed->Value);
	}
	private: System::Void numVis_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->SetViscosityOfAir((double)numVis->Value);
	}
	private: System::Void numResRate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->SetRespiratoryRate((double)numResRate->Value);
	}
	private: System::Void numThickness_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		human_parent_ptr->trachea->SetOuterThickness((double)numThickness->Value);
	}
	};
}
