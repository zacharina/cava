#pragma once
#include "TracheaForm.h"
#include "LungForm.h"
#include "HeartForm.h"
#include "BloodForm.h"
#include "Human.h"

namespace CavaSystem {

	using namespace System;
	using namespace System::ComponentModel; 
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CavaForm : public System::Windows::Forms::Form
	{
	public:
		CavaForm()
		{
			InitializeComponent();
			Gender gender = Gender::female;
			if(chMale)
				gender = Gender::male;
			human_ptr = new Human((int)numAge->Value, gender, (double)numHeight->Value, (double)numWeight->Value, (double)numTemp->Value);

			trachea_form = gcnew TracheaForm(this);
			lung_form = gcnew LungForm(this);
			heart_form = gcnew HeartForm(this);
			blood_form = gcnew BloodForm(this);

		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chData;
	public:


	public:
		bool exit_cava = false;

	protected:
		~CavaForm()
		{
			delete human_ptr;
			delete trachea_form;
			delete lung_form;
			delete heart_form;
			delete blood_form;
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Panel^ panHuman;
	private: System::Windows::Forms::Panel^ pnCVS;
	private: System::Windows::Forms::Label^ lblCVS;
	private: System::Windows::Forms::Label^ lblHuman;
	private: System::Windows::Forms::Label^ lblAge;
	private: System::Windows::Forms::Label^ lblWeight;
	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::Label^ lblTemp;
	private: System::Windows::Forms::Label^ lblHeight;
	private: System::Windows::Forms::Button^ cmdRevive;
	private: System::Windows::Forms::Button^ cmdComa;
	private: System::Windows::Forms::Button^ cmdTrachea;
	private: System::Windows::Forms::Button^ cmdLung;
	private: System::Windows::Forms::Button^ cmdHeart;
	private: System::Windows::Forms::Button^ cmdBlood;
	private: System::Windows::Forms::Button^ cmdExit;
	private: System::Windows::Forms::NumericUpDown^ numWeight;
	private: System::Windows::Forms::NumericUpDown^ numAge;
	private: System::Windows::Forms::NumericUpDown^ numHeight;
	private: System::Windows::Forms::NumericUpDown^ numTemp;
	private: System::Windows::Forms::CheckBox^ chMale;
	private: System::Windows::Forms::CheckBox^ chFemale;
	private: System::Windows::Forms::Timer^ cavaTimer;
	private: System::Windows::Forms::PictureBox^ pcVis;
	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CavaForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->lblCVS = (gcnew System::Windows::Forms::Label());
			this->cmdRevive = (gcnew System::Windows::Forms::Button());
			this->cmdComa = (gcnew System::Windows::Forms::Button());
			this->cmdTrachea = (gcnew System::Windows::Forms::Button());
			this->cmdLung = (gcnew System::Windows::Forms::Button());
			this->cmdHeart = (gcnew System::Windows::Forms::Button());
			this->cmdBlood = (gcnew System::Windows::Forms::Button());
			this->panHuman = (gcnew System::Windows::Forms::Panel());
			this->chMale = (gcnew System::Windows::Forms::CheckBox());
			this->chFemale = (gcnew System::Windows::Forms::CheckBox());
			this->lblHuman = (gcnew System::Windows::Forms::Label());
			this->numWeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->numAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->numHeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblAge = (gcnew System::Windows::Forms::Label());
			this->lblWeight = (gcnew System::Windows::Forms::Label());
			this->numTemp = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->lblTemp = (gcnew System::Windows::Forms::Label());
			this->lblHeight = (gcnew System::Windows::Forms::Label());
			this->pnCVS = (gcnew System::Windows::Forms::Panel());
			this->pcVis = (gcnew System::Windows::Forms::PictureBox());
			this->cmdExit = (gcnew System::Windows::Forms::Button());
			this->cavaTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->chData = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panHuman->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAge))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTemp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcVis))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chData))->BeginInit();
			this->SuspendLayout();
			// 
			// lblCVS
			// 
			this->lblCVS->AutoSize = true;
			this->lblCVS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->lblCVS->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCVS->ForeColor = System::Drawing::SystemColors::Window;
			this->lblCVS->Location = System::Drawing::Point(309, 11);
			this->lblCVS->Name = L"lblCVS";
			this->lblCVS->Size = System::Drawing::Size(330, 23);
			this->lblCVS->TabIndex = 0;
			this->lblCVS->Text = L"THE HUMAN CARDIOVASCULAR SYSTEM";
			// 
			// cmdRevive
			// 
			this->cmdRevive->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->cmdRevive->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdRevive->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdRevive->Location = System::Drawing::Point(157, 100);
			this->cmdRevive->Name = L"cmdRevive";
			this->cmdRevive->Size = System::Drawing::Size(87, 38);
			this->cmdRevive->TabIndex = 1;
			this->cmdRevive->Text = L"Revive";
			this->cmdRevive->UseVisualStyleBackColor = false;
			this->cmdRevive->Click += gcnew System::EventHandler(this, &CavaForm::cmdRevive_Click);
			// 
			// cmdComa
			// 
			this->cmdComa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->cmdComa->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdComa->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdComa->Location = System::Drawing::Point(250, 100);
			this->cmdComa->Name = L"cmdComa";
			this->cmdComa->Size = System::Drawing::Size(87, 38);
			this->cmdComa->TabIndex = 2;
			this->cmdComa->Text = L"Coma";
			this->cmdComa->UseVisualStyleBackColor = false;
			this->cmdComa->Click += gcnew System::EventHandler(this, &CavaForm::cmdComa_Click);
			// 
			// cmdTrachea
			// 
			this->cmdTrachea->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdTrachea->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdTrachea->Location = System::Drawing::Point(157, 202);
			this->cmdTrachea->Name = L"cmdTrachea";
			this->cmdTrachea->Size = System::Drawing::Size(180, 38);
			this->cmdTrachea->TabIndex = 4;
			this->cmdTrachea->Text = L"Trachea";
			this->cmdTrachea->UseVisualStyleBackColor = true;
			this->cmdTrachea->Click += gcnew System::EventHandler(this, &CavaForm::cmdTrachea_Click);
			// 
			// cmdLung
			// 
			this->cmdLung->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdLung->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdLung->Location = System::Drawing::Point(157, 254);
			this->cmdLung->Name = L"cmdLung";
			this->cmdLung->Size = System::Drawing::Size(180, 38);
			this->cmdLung->TabIndex = 5;
			this->cmdLung->Text = L"Lung";
			this->cmdLung->UseVisualStyleBackColor = true;
			this->cmdLung->Click += gcnew System::EventHandler(this, &CavaForm::cmdLung_Click);
			// 
			// cmdHeart
			// 
			this->cmdHeart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdHeart->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdHeart->Location = System::Drawing::Point(157, 307);
			this->cmdHeart->Name = L"cmdHeart";
			this->cmdHeart->Size = System::Drawing::Size(180, 38);
			this->cmdHeart->TabIndex = 6;
			this->cmdHeart->Text = L"Heart";
			this->cmdHeart->UseVisualStyleBackColor = true;
			this->cmdHeart->Click += gcnew System::EventHandler(this, &CavaForm::cmdHeart_Click);
			// 
			// cmdBlood
			// 
			this->cmdBlood->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdBlood->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdBlood->Location = System::Drawing::Point(157, 362);
			this->cmdBlood->Name = L"cmdBlood";
			this->cmdBlood->Size = System::Drawing::Size(180, 38);
			this->cmdBlood->TabIndex = 7;
			this->cmdBlood->Text = L"Blood + Tissue";
			this->cmdBlood->UseVisualStyleBackColor = true;
			this->cmdBlood->Click += gcnew System::EventHandler(this, &CavaForm::cmdBlood_Click);
			// 
			// panHuman
			// 
			this->panHuman->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panHuman->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panHuman->Controls->Add(this->chMale);
			this->panHuman->Controls->Add(this->chFemale);
			this->panHuman->Controls->Add(this->lblHuman);
			this->panHuman->Controls->Add(this->numWeight);
			this->panHuman->Controls->Add(this->numAge);
			this->panHuman->Controls->Add(this->numHeight);
			this->panHuman->Controls->Add(this->lblAge);
			this->panHuman->Controls->Add(this->lblWeight);
			this->panHuman->Controls->Add(this->numTemp);
			this->panHuman->Controls->Add(this->lblGender);
			this->panHuman->Controls->Add(this->lblTemp);
			this->panHuman->Controls->Add(this->lblHeight);
			this->panHuman->Location = System::Drawing::Point(377, 100);
			this->panHuman->Name = L"panHuman";
			this->panHuman->Size = System::Drawing::Size(248, 352);
			this->panHuman->TabIndex = 12;
			// 
			// chMale
			// 
			this->chMale->AutoSize = true;
			this->chMale->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chMale->Location = System::Drawing::Point(159, 309);
			this->chMale->Name = L"chMale";
			this->chMale->Size = System::Drawing::Size(62, 23);
			this->chMale->TabIndex = 26;
			this->chMale->Text = L"male";
			this->chMale->UseVisualStyleBackColor = true;
			this->chMale->Click += gcnew System::EventHandler(this, &CavaForm::chMale_Click);
			// 
			// chFemale
			// 
			this->chFemale->AutoSize = true;
			this->chFemale->Checked = true;
			this->chFemale->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chFemale->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chFemale->Location = System::Drawing::Point(159, 288);
			this->chFemale->Name = L"chFemale";
			this->chFemale->Size = System::Drawing::Size(74, 23);
			this->chFemale->TabIndex = 25;
			this->chFemale->Text = L"female";
			this->chFemale->UseVisualStyleBackColor = true;
			this->chFemale->Click += gcnew System::EventHandler(this, &CavaForm::chFemale_Click);
			// 
			// lblHuman
			// 
			this->lblHuman->AutoSize = true;
			this->lblHuman->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblHuman->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHuman->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->lblHuman->Location = System::Drawing::Point(13, 22);
			this->lblHuman->Name = L"lblHuman";
			this->lblHuman->Size = System::Drawing::Size(212, 25);
			this->lblHuman->TabIndex = 20;
			this->lblHuman->Text = L"Human Characteristics";
			// 
			// numWeight
			// 
			this->numWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->numWeight->DecimalPlaces = 2;
			this->numWeight->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numWeight->ForeColor = System::Drawing::Color::White;
			this->numWeight->Location = System::Drawing::Point(159, 128);
			this->numWeight->Name = L"numWeight";
			this->numWeight->Size = System::Drawing::Size(62, 26);
			this->numWeight->TabIndex = 20;
			this->numWeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numWeight->ValueChanged += gcnew System::EventHandler(this, &CavaForm::numWeight_ValueChanged);
			// 
			// numAge
			// 
			this->numAge->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->numAge->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numAge->ForeColor = System::Drawing::Color::White;
			this->numAge->Location = System::Drawing::Point(159, 75);
			this->numAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->numAge->Name = L"numAge";
			this->numAge->Size = System::Drawing::Size(62, 26);
			this->numAge->TabIndex = 19;
			this->numAge->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->numAge->ValueChanged += gcnew System::EventHandler(this, &CavaForm::numAge_ValueChanged);
			// 
			// numHeight
			// 
			this->numHeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->numHeight->DecimalPlaces = 2;
			this->numHeight->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numHeight->ForeColor = System::Drawing::Color::White;
			this->numHeight->Location = System::Drawing::Point(159, 181);
			this->numHeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 250, 0, 0, 0 });
			this->numHeight->Name = L"numHeight";
			this->numHeight->Size = System::Drawing::Size(62, 26);
			this->numHeight->TabIndex = 24;
			this->numHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 158, 0, 0, 0 });
			this->numHeight->ValueChanged += gcnew System::EventHandler(this, &CavaForm::numHeight_ValueChanged);
			// 
			// lblAge
			// 
			this->lblAge->AutoSize = true;
			this->lblAge->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblAge->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAge->Location = System::Drawing::Point(13, 76);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(35, 19);
			this->lblAge->TabIndex = 9;
			this->lblAge->Text = L"Age";
			// 
			// lblWeight
			// 
			this->lblWeight->AutoSize = true;
			this->lblWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblWeight->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWeight->Location = System::Drawing::Point(13, 129);
			this->lblWeight->Name = L"lblWeight";
			this->lblWeight->Size = System::Drawing::Size(55, 19);
			this->lblWeight->TabIndex = 17;
			this->lblWeight->Text = L"Weight";
			// 
			// numTemp
			// 
			this->numTemp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->numTemp->DecimalPlaces = 2;
			this->numTemp->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTemp->ForeColor = System::Drawing::Color::White;
			this->numTemp->Location = System::Drawing::Point(159, 236);
			this->numTemp->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numTemp->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->numTemp->Name = L"numTemp";
			this->numTemp->Size = System::Drawing::Size(62, 26);
			this->numTemp->TabIndex = 23;
			this->numTemp->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 37, 0, 0, 0 });
			this->numTemp->ValueChanged += gcnew System::EventHandler(this, &CavaForm::numTemp_ValueChanged);
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->Location = System::Drawing::Point(14, 292);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(60, 19);
			this->lblGender->TabIndex = 15;
			this->lblGender->Text = L"Gender";
			// 
			// lblTemp
			// 
			this->lblTemp->AutoSize = true;
			this->lblTemp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblTemp->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTemp->Location = System::Drawing::Point(14, 237);
			this->lblTemp->Name = L"lblTemp";
			this->lblTemp->Size = System::Drawing::Size(132, 19);
			this->lblTemp->TabIndex = 18;
			this->lblTemp->Text = L"Body temperature";
			// 
			// lblHeight
			// 
			this->lblHeight->AutoSize = true;
			this->lblHeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblHeight->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHeight->Location = System::Drawing::Point(13, 182);
			this->lblHeight->Name = L"lblHeight";
			this->lblHeight->Size = System::Drawing::Size(51, 19);
			this->lblHeight->TabIndex = 16;
			this->lblHeight->Text = L"Height";
			// 
			// pnCVS
			// 
			this->pnCVS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->pnCVS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pnCVS->Location = System::Drawing::Point(0, 0);
			this->pnCVS->Name = L"pnCVS";
			this->pnCVS->Size = System::Drawing::Size(944, 47);
			this->pnCVS->TabIndex = 13;
			// 
			// pcVis
			// 
			this->pcVis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcVis.Image")));
			this->pcVis->Location = System::Drawing::Point(12, 100);
			this->pcVis->Name = L"pcVis";
			this->pcVis->Size = System::Drawing::Size(130, 352);
			this->pcVis->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pcVis->TabIndex = 14;
			this->pcVis->TabStop = false;
			// 
			// cmdExit
			// 
			this->cmdExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->cmdExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdExit->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdExit->Location = System::Drawing::Point(845, 451);
			this->cmdExit->Name = L"cmdExit";
			this->cmdExit->Size = System::Drawing::Size(87, 38);
			this->cmdExit->TabIndex = 15;
			this->cmdExit->Text = L"EXIT";
			this->cmdExit->UseVisualStyleBackColor = false;
			this->cmdExit->Click += gcnew System::EventHandler(this, &CavaForm::cmdExit_Click);
			// 
			// cavaTimer
			// 
			this->cavaTimer->Enabled = true;
			this->cavaTimer->Interval = 1;
			this->cavaTimer->Tick += gcnew System::EventHandler(this, &CavaForm::timer1_Tick);
			// 
			// chData
			// 
			this->chData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->chData->BackSecondaryColor = System::Drawing::Color::Black;
			this->chData->BorderlineColor = System::Drawing::Color::Transparent;
			this->chData->BorderSkin->PageColor = System::Drawing::Color::Black;
			chartArea3->BackColor = System::Drawing::Color::Transparent;
			chartArea3->Name = L"chArea";
			this->chData->ChartAreas->Add(chartArea3);
			legend3->BackColor = System::Drawing::Color::DimGray;
			legend3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend3->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend3->IsTextAutoFit = false;
			legend3->Name = L"lgLegend";
			legend3->TitleFont = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chData->Legends->Add(legend3);
			this->chData->Location = System::Drawing::Point(644, 100);
			this->chData->Name = L"chData";
			this->chData->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chData->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(3) {
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
						static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(33))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
							static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(47)))
			};
			this->chData->RightToLeft = System::Windows::Forms::RightToLeft::No;
			series3->ChartArea = L"chArea";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Font = (gcnew System::Drawing::Font(L"Louis George Caf� Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series3->LabelBackColor = System::Drawing::Color::Transparent;
			series3->LabelBorderColor = System::Drawing::Color::Transparent;
			series3->Legend = L"lgLegend";
			series3->Name = L"CavaValues";
			this->chData->Series->Add(series3);
			this->chData->Size = System::Drawing::Size(288, 300);
			this->chData->TabIndex = 16;
			this->chData->Text = L"chData";
			// 
			// CavaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->ClientSize = System::Drawing::Size(944, 501);
			this->Controls->Add(this->chData);
			this->Controls->Add(this->cmdExit);
			this->Controls->Add(this->pcVis);
			this->Controls->Add(this->cmdBlood);
			this->Controls->Add(this->cmdHeart);
			this->Controls->Add(this->cmdLung);
			this->Controls->Add(this->cmdTrachea);
			this->Controls->Add(this->cmdComa);
			this->Controls->Add(this->cmdRevive);
			this->Controls->Add(this->lblCVS);
			this->Controls->Add(this->pnCVS);
			this->Controls->Add(this->panHuman);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Name = L"CavaForm";
			this->Text = L"Form1";
			this->panHuman->ResumeLayout(false);
			this->panHuman->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAge))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTemp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcVis))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: Human* human_ptr = nullptr;
		public: TracheaForm^ trachea_form = nullptr;
		public: LungForm^ lung_form = nullptr;
		public: HeartForm^ heart_form = nullptr;
		public: BloodForm^ blood_form = nullptr;

		public: double timer_intern = 0.0;

private: System::Void cmdTrachea_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hide();
	trachea_form->ShowDialog();
}
private: System::Void cmdLung_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hide();
	lung_form->ShowDialog();
}
private: System::Void cmdHeart_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hide();
	heart_form->ShowDialog();
}
private: System::Void cmdBlood_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hide();
	blood_form->ShowDialog();
}

private: System::Void chFemale_Click(System::Object^ sender, System::EventArgs^ e) {
	chMale->Checked = false;
}

private: System::Void chMale_Click(System::Object^ sender, System::EventArgs^ e) {
	chFemale->Checked = false;
}

private: System::Void cmdRevive_Click(System::Object^ sender, System::EventArgs^ e) {
	human_ptr->alive = true;
}

private: System::Void cmdComa_Click(System::Object^ sender, System::EventArgs^ e) {
	human_ptr->alive = false;
}

private: System::Void numAge_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_ptr->_characteristics.age = (int)numAge->Value;
}

private: System::Void numWeight_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_ptr->_characteristics.weight = (double)numWeight->Value;
}

private: System::Void numHeight_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_ptr->_characteristics.height = (double)numHeight->Value;
}

private: System::Void numTemp_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	human_ptr->_characteristics.temperature = (double)numTemp->Value;
}

private: System::Void cmdExit_Click(System::Object^ sender, System::EventArgs^ e) {
	exit_cava = true;
	Close();
	Application::Exit();
}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	timer_intern++;
	if (timer_intern >= 1000)
		timer_intern = 0;

	double time_since_frame = cavaTimer->Interval / 1000.0;
	double oxygen = 100.0;
	human_ptr->CardiovascularSystem(time_since_frame, &oxygen);
	//Update trachea
	human_ptr->trachea->TrachealDiameter((double)trachea_form->GetTrachealDiameter());
	human_ptr->trachea->ViscosityOfAir((double)trachea_form->GetViscosityOfAir());
	human_ptr->trachea->MeanFlowSpeed((double)trachea_form->GetMeanFlowSpeed());
	human_ptr->trachea->RespiratoryRate((double)trachea_form->GetRespiratoryRate());
	human_ptr->trachea->LengthFemale((double)trachea_form->GetFemaleLength());
	human_ptr->trachea->LengthMale((double)trachea_form->GetMaleLength());
	human_ptr->trachea->RespiratoryRate((double)trachea_form->GetRespiratoryRate());
	human_ptr->trachea->block_percentage = ((double)trachea_form->GetBlockPercentage());
	trachea_form->UpdateFlowRate(std::ceil(human_ptr->trachea->flow_rate * 100.0) / 100.0);
	trachea_form->UpdateOxygen(std::ceil(human_ptr->trachea->oxygen * 100.0) / 100.0);
	//Update lung
	human_ptr->lung->AreaOfThrottle((double)lung_form->GetAreaOfThrottle());
	human_ptr->lung->UpstreamPressure((double)lung_form->GetUpstreamPressure());
	human_ptr->lung->DownstreamPressure((double)lung_form->GetDownstreamPressure());
	human_ptr->lung->CriticalPressureRatio((double)lung_form->GetCriticalPressureRatio());
	human_ptr->lung->GasConstant((double)lung_form->GetGasConstant());
	human_ptr->lung->Volume((double)lung_form->GetLungVolume());
	human_ptr->lung->MassOfAir((double)lung_form->GetMassOfAir());
	human_ptr->lung->AirMassFlow((double)lung_form->GetAirMassFlow());
	human_ptr->lung->AtmosphericDensity((double)lung_form->GetAtmosphericDensity());
	human_ptr->lung->RespiratoryComplianceInflow((double)lung_form->GetRespiratoryComplianceInflow());
	human_ptr->lung->RespiratoryComplianceOutflow((double)lung_form->GetRespiratoryComplianceOutflow());
	human_ptr->lung->PressureSummand((double)lung_form->GetCoefficient());
	//lung_form->UpdateOxygenFlow(std::ceil(human_ptr->lung->oxygen * 100.0) / 100.0);
	lung_form->UpdatePressure(std::ceil(human_ptr->lung->pressure * 100.0) / 100.0);
	//Update heart
	human_ptr->heart->AorticValveFlowRate((double)heart_form->GetAortic());
	human_ptr->heart->MitralValveFlowRate((double)heart_form->GetMitral());
	human_ptr->heart->PulmonaryValveFlowRate((double)heart_form->GetPulmonary());
	human_ptr->heart->TricuspidValveFlowRate((double)heart_form->GetTriscupid());
	human_ptr->heart->HeartRate((double)heart_form->GetHeartRate());
	human_ptr->heart->StrokeVolume((double)heart_form->GetStrokeVolume());
	human_ptr->heart->CycleDuration((double)heart_form->GetDuration());
	human_ptr->heart->VolumeAtriumLeft((double)heart_form->GetLAVolume());
	human_ptr->heart->VolumeAtriumRight((double)heart_form->GetRAVolume());
	human_ptr->heart->VolumeVentricleLeft((double)heart_form->GetLVVolume());
	human_ptr->heart->VolumeVentricleLeft((double)heart_form->GetRVVolume());
	human_ptr->heart->left_atrium->MinimumElastance((double)heart_form->GetMinElastance());
	human_ptr->heart->left_atrium->MaximumElastance((double)heart_form->GetMaxElastance());
	human_ptr->heart->right_atrium->MinimumElastance((double)heart_form->GetMinElastance());
	human_ptr->heart->right_atrium->MaximumElastance((double)heart_form->GetMaxElastance());
	human_ptr->heart->left_atrium->ZeroPressureVolume((double)heart_form->GetVolumeAtZeroPressure());
	human_ptr->heart->right_atrium->ZeroPressureVolume((double)heart_form->GetVolumeAtZeroPressure());
	human_ptr->heart->left_atrium->KeytimeInCycle((double)heart_form->GetAtrialKeytime());
	human_ptr->heart->right_atrium->KeytimeInCycle((double)heart_form->GetAtrialKeytime());
	human_ptr->heart->left_ventricle->EndSystolicElastance((double)heart_form->GetLVEndSystolicElastance());
	human_ptr->heart->right_ventricle->EndSystolicElastance((double)heart_form->GetRVEndSystolicElastance());
	human_ptr->heart->left_ventricle->BloodDensity((double)heart_form->GetDensity());
	human_ptr->heart->right_ventricle->BloodDensity((double)heart_form->GetDensity());
	human_ptr->heart->RadiusSummandLV((double)heart_form->GetCoefficient1());
	human_ptr->heart->RadiusSummandRV((double)heart_form->GetCoefficient2());
	//heart_form->UpdateOxygen(std::ceil(human_ptr->heart->oxygen * 100.0) / 100.0);
	heart_form->UpdateFlowRate(std::ceil(human_ptr->heart->flow_rate * 100.0) / 100.0);
	heart_form->UpdateLAElastance(std::ceil(human_ptr->heart->left_atrium->elastance * 100.0) / 100.0);
	heart_form->UpdateLAPressure(std::ceil(human_ptr->heart->left_atrium->pressure * 100.0) / 100.0);
	heart_form->UpdateLARadius(std::ceil(human_ptr->heart->left_atrium->radius * 100.0) / 100.0);
	heart_form->UpdateRAElastance(std::ceil(human_ptr->heart->right_atrium->elastance * 100.0) / 100.0);
	heart_form->UpdateRAPressure(std::ceil(human_ptr->heart->right_atrium->pressure * 100.0) / 100.0);
	heart_form->UpdateRARadius(std::ceil(human_ptr->heart->right_atrium->radius * 100.0) / 100.0);
	heart_form->UpdateLVInertance(std::ceil(human_ptr->heart->left_ventricle->inflow_inertance * 100.0) / 100.0);
	heart_form->UpdateLVPressureTotal(std::ceil(human_ptr->heart->left_ventricle->pressure * 100.0) / 100.0);
	heart_form->UpdateLVRadius(std::ceil(human_ptr->heart->left_ventricle->radius * 100.0) / 100.0);
	heart_form->UpdateRVInertance(std::ceil(human_ptr->heart->right_ventricle->inflow_inertance * 100.0) / 100.0);
	heart_form->UpdateRVPressureTotal(std::ceil(human_ptr->heart->right_ventricle->pressure * 100.0) / 100.0);
	heart_form->UpdateRVRadius(std::ceil(human_ptr->heart->right_ventricle->radius * 100.0) / 100.0);
	//Update blood vessel
	human_ptr->blood_vessel->StartVelocity((double)blood_form->GetStartVelocity());
	human_ptr->blood_vessel->NumberOfVessels((double)blood_form->GetNumberOfVessels());
	human_ptr->blood_vessel->VesselLength((double)blood_form->GetVesselLength());
	human_ptr->blood_vessel->VesselThickness((double)blood_form->GetVesselThickness());
	human_ptr->blood_vessel->BloodDensity((double)blood_form->GetBloodDensity());
	human_ptr->blood_vessel->InitialSystolicPressure((double)blood_form->GetInitialSystolicPressure());
	human_ptr->blood_vessel->InitialDiastolicPressure((double)blood_form->GetInitialDiastolicPressure());
	human_ptr->blood_vessel->OxygenBindingCapacity((double)blood_form->GetOxygenBindingCapacity());
	human_ptr->blood_vessel->HemoglobinConcentration((double)blood_form->GetHemoglobinConcentration());
	human_ptr->blood_vessel->HemoglobinOxygenSaturation((double)blood_form->GetOxygenHemoglobinSaturation() * 0.01); //from % to comma number
	human_ptr->blood_vessel->RBCVelocity((double)blood_form->GetRBCVelocity());
	human_ptr->blood_vessel->TissueRadius((double)blood_form->GetTissueRadius());
	human_ptr->blood_vessel->VesselRadius((double)blood_form->GetVesselRadius());
	human_ptr->blood_vessel->MetabolicRate((double)blood_form->GetMetabolicRate());
	human_ptr->blood_vessel->MaxConsumption((double)blood_form->GetMaxConsumption());
	//blood_form->UpdateOxygen(std::ceil(human_ptr->blood_vessel->oxygen * 100.0) / 100.0);
	blood_form->UpdateDiastolicPressure(std::ceil(human_ptr->blood_vessel->diastolic_pressure * 100.0) / 100.0);
	blood_form->UpdateSystolicPressure(std::ceil(human_ptr->blood_vessel->systolic_pressure * 100.0) / 100.00);
	blood_form->UpdatePartialPressureVessel(std::ceil(human_ptr->blood_vessel->partial_pressure * 100.0) / 100.0);
	blood_form->UpdateVelocity(std::ceil(human_ptr->blood_vessel->velocity * 100.0) / 100.0);
	blood_form->UpdateFlowRate(std::ceil(human_ptr->blood_vessel->oxygen_flow * 100.0) / 100.0);
	blood_form->UpdateResistance(std::ceil(human_ptr->blood_vessel->resistance * 100.0) / 100.0);
	blood_form->UpdateInertance(std::ceil(human_ptr->blood_vessel->inertance * 100.0) / 100.0);
	blood_form->UpdateCompliance(std::ceil(human_ptr->blood_vessel->compliance * 100.0) / 100.0);
	blood_form->UpdatePartialPressureTissue(std::ceil(human_ptr->blood_vessel->partial_pressure_tissue * 100.0) / 100.0);
	blood_form->UpdateConsumptionRate(std::ceil(human_ptr->blood_vessel->oxygen_consumption_tissue * 100.0) / 100.0);
}

};
}