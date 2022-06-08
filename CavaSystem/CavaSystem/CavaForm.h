#pragma once
#include "TracheaForm.h"
#include "LungForm.h"
#include "HeartForm.h"
#include "BloodForm.h"
#include "Human.h"
#include "Utils.h"

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
			clearOldDebugLogs();
			InitializeComponent();

			Gender gender = Gender::female;
			if(chMale->Checked)
				gender = Gender::male;
			human_ptr = new Human((int)numAge->Value, gender, (double)numHeight->Value, (double)numWeight->Value, (double)numTemp->Value);


			trachea_form = gcnew TracheaForm(this, human_ptr);
			lung_form = gcnew LungForm(this, human_ptr);
			heart_form = gcnew HeartForm(this, human_ptr);
			blood_form = gcnew BloodForm(this, human_ptr);
		}
	private: System::Windows::Forms::Label^ label1;

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chData;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(1,
				4));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(2,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint3 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(3,
				6));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint4 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(4,
				6));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint5 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(5,
				5));
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
			this->lblCVS->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCVS->ForeColor = System::Drawing::SystemColors::Window;
			this->lblCVS->Location = System::Drawing::Point(464, 17);
			this->lblCVS->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCVS->Name = L"lblCVS";
			this->lblCVS->Size = System::Drawing::Size(590, 33);
			this->lblCVS->TabIndex = 0;
			this->lblCVS->Text = L"THE HUMAN CARDIOVASCULAR SYSTEM";
			// 
			// cmdRevive
			// 
			this->cmdRevive->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->cmdRevive->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdRevive->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdRevive->Location = System::Drawing::Point(236, 154);
			this->cmdRevive->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmdRevive->Name = L"cmdRevive";
			this->cmdRevive->Size = System::Drawing::Size(130, 58);
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
			this->cmdComa->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdComa->Location = System::Drawing::Point(375, 154);
			this->cmdComa->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmdComa->Name = L"cmdComa";
			this->cmdComa->Size = System::Drawing::Size(130, 58);
			this->cmdComa->TabIndex = 2;
			this->cmdComa->Text = L"Coma";
			this->cmdComa->UseVisualStyleBackColor = false;
			this->cmdComa->Click += gcnew System::EventHandler(this, &CavaForm::cmdComa_Click);
			// 
			// cmdTrachea
			// 
			this->cmdTrachea->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdTrachea->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdTrachea->Location = System::Drawing::Point(236, 311);
			this->cmdTrachea->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmdTrachea->Name = L"cmdTrachea";
			this->cmdTrachea->Size = System::Drawing::Size(270, 58);
			this->cmdTrachea->TabIndex = 4;
			this->cmdTrachea->Text = L"Trachea";
			this->cmdTrachea->UseVisualStyleBackColor = true;
			this->cmdTrachea->Click += gcnew System::EventHandler(this, &CavaForm::cmdTrachea_Click);
			// 
			// cmdLung
			// 
			this->cmdLung->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdLung->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdLung->Location = System::Drawing::Point(236, 391);
			this->cmdLung->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmdLung->Name = L"cmdLung";
			this->cmdLung->Size = System::Drawing::Size(270, 58);
			this->cmdLung->TabIndex = 5;
			this->cmdLung->Text = L"Lung";
			this->cmdLung->UseVisualStyleBackColor = true;
			this->cmdLung->Click += gcnew System::EventHandler(this, &CavaForm::cmdLung_Click);
			// 
			// cmdHeart
			// 
			this->cmdHeart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdHeart->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdHeart->Location = System::Drawing::Point(236, 472);
			this->cmdHeart->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmdHeart->Name = L"cmdHeart";
			this->cmdHeart->Size = System::Drawing::Size(270, 58);
			this->cmdHeart->TabIndex = 6;
			this->cmdHeart->Text = L"Heart";
			this->cmdHeart->UseVisualStyleBackColor = true;
			this->cmdHeart->Click += gcnew System::EventHandler(this, &CavaForm::cmdHeart_Click);
			// 
			// cmdBlood
			// 
			this->cmdBlood->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdBlood->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdBlood->Location = System::Drawing::Point(236, 557);
			this->cmdBlood->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmdBlood->Name = L"cmdBlood";
			this->cmdBlood->Size = System::Drawing::Size(270, 58);
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
			this->panHuman->Location = System::Drawing::Point(566, 154);
			this->panHuman->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panHuman->Name = L"panHuman";
			this->panHuman->Size = System::Drawing::Size(433, 542);
			this->panHuman->TabIndex = 12;
			// 
			// chMale
			// 
			this->chMale->AutoSize = true;
			this->chMale->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chMale->Location = System::Drawing::Point(238, 475);
			this->chMale->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chMale->Name = L"chMale";
			this->chMale->Size = System::Drawing::Size(92, 33);
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
			this->chFemale->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chFemale->Location = System::Drawing::Point(238, 443);
			this->chFemale->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chFemale->Name = L"chFemale";
			this->chFemale->Size = System::Drawing::Size(112, 33);
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
			this->lblHuman->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHuman->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->lblHuman->Location = System::Drawing::Point(20, 34);
			this->lblHuman->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblHuman->Name = L"lblHuman";
			this->lblHuman->Size = System::Drawing::Size(342, 37);
			this->lblHuman->TabIndex = 20;
			this->lblHuman->Text = L"Human Characteristics";
			// 
			// numWeight
			// 
			this->numWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->numWeight->DecimalPlaces = 2;
			this->numWeight->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numWeight->ForeColor = System::Drawing::Color::White;
			this->numWeight->Location = System::Drawing::Point(238, 197);
			this->numWeight->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numWeight->Name = L"numWeight";
			this->numWeight->Size = System::Drawing::Size(132, 33);
			this->numWeight->TabIndex = 20;
			this->numWeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numWeight->ValueChanged += gcnew System::EventHandler(this, &CavaForm::numWeight_ValueChanged);
			// 
			// numAge
			// 
			this->numAge->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->numAge->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numAge->ForeColor = System::Drawing::Color::White;
			this->numAge->Location = System::Drawing::Point(238, 115);
			this->numAge->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->numAge->Name = L"numAge";
			this->numAge->Size = System::Drawing::Size(132, 33);
			this->numAge->TabIndex = 19;
			this->numAge->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->numAge->ValueChanged += gcnew System::EventHandler(this, &CavaForm::numAge_ValueChanged);
			// 
			// numHeight
			// 
			this->numHeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->numHeight->DecimalPlaces = 2;
			this->numHeight->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numHeight->ForeColor = System::Drawing::Color::White;
			this->numHeight->Location = System::Drawing::Point(238, 278);
			this->numHeight->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numHeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 250, 0, 0, 0 });
			this->numHeight->Name = L"numHeight";
			this->numHeight->Size = System::Drawing::Size(132, 33);
			this->numHeight->TabIndex = 24;
			this->numHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 158, 0, 0, 0 });
			this->numHeight->ValueChanged += gcnew System::EventHandler(this, &CavaForm::numHeight_ValueChanged);
			// 
			// lblAge
			// 
			this->lblAge->AutoSize = true;
			this->lblAge->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblAge->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAge->Location = System::Drawing::Point(20, 117);
			this->lblAge->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(56, 29);
			this->lblAge->TabIndex = 9;
			this->lblAge->Text = L"Age";
			// 
			// lblWeight
			// 
			this->lblWeight->AutoSize = true;
			this->lblWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblWeight->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWeight->Location = System::Drawing::Point(20, 198);
			this->lblWeight->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblWeight->Name = L"lblWeight";
			this->lblWeight->Size = System::Drawing::Size(88, 29);
			this->lblWeight->TabIndex = 17;
			this->lblWeight->Text = L"Weight";
			// 
			// numTemp
			// 
			this->numTemp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->numTemp->DecimalPlaces = 2;
			this->numTemp->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTemp->ForeColor = System::Drawing::Color::White;
			this->numTemp->Location = System::Drawing::Point(238, 363);
			this->numTemp->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numTemp->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numTemp->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->numTemp->Name = L"numTemp";
			this->numTemp->Size = System::Drawing::Size(132, 33);
			this->numTemp->TabIndex = 23;
			this->numTemp->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 37, 0, 0, 0 });
			this->numTemp->ValueChanged += gcnew System::EventHandler(this, &CavaForm::numTemp_ValueChanged);
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->Location = System::Drawing::Point(21, 449);
			this->lblGender->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(94, 29);
			this->lblGender->TabIndex = 15;
			this->lblGender->Text = L"Gender";
			// 
			// lblTemp
			// 
			this->lblTemp->AutoSize = true;
			this->lblTemp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblTemp->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTemp->Location = System::Drawing::Point(21, 365);
			this->lblTemp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTemp->Name = L"lblTemp";
			this->lblTemp->Size = System::Drawing::Size(204, 29);
			this->lblTemp->TabIndex = 18;
			this->lblTemp->Text = L"Body temperature";
			// 
			// lblHeight
			// 
			this->lblHeight->AutoSize = true;
			this->lblHeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->lblHeight->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHeight->Location = System::Drawing::Point(20, 280);
			this->lblHeight->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblHeight->Name = L"lblHeight";
			this->lblHeight->Size = System::Drawing::Size(83, 29);
			this->lblHeight->TabIndex = 16;
			this->lblHeight->Text = L"Height";
			// 
			// pnCVS
			// 
			this->pnCVS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->pnCVS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pnCVS->Location = System::Drawing::Point(0, 0);
			this->pnCVS->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pnCVS->Name = L"pnCVS";
			this->pnCVS->Size = System::Drawing::Size(1439, 72);
			this->pnCVS->TabIndex = 13;
			// 
			// pcVis
			// 
			this->pcVis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcVis.Image")));
			this->pcVis->Location = System::Drawing::Point(18, 154);
			this->pcVis->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pcVis->Name = L"pcVis";
			this->pcVis->Size = System::Drawing::Size(195, 542);
			this->pcVis->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pcVis->TabIndex = 14;
			this->pcVis->TabStop = false;
			// 
			// cmdExit
			// 
			this->cmdExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->cmdExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmdExit->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdExit->Location = System::Drawing::Point(1309, 667);
			this->cmdExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmdExit->Name = L"cmdExit";
			this->cmdExit->Size = System::Drawing::Size(130, 58);
			this->cmdExit->TabIndex = 15;
			this->cmdExit->Text = L"EXIT";
			this->cmdExit->UseVisualStyleBackColor = false;
			this->cmdExit->Click += gcnew System::EventHandler(this, &CavaForm::cmdExit_Click);
			// 
			// cavaTimer
			// 
			this->cavaTimer->Enabled = true;
			this->cavaTimer->Interval = 1;
			this->cavaTimer->Tick += gcnew System::EventHandler(this, &CavaForm::cavatimer_Tick);
			// 
			// chData
			// 
			this->chData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->chData->BackSecondaryColor = System::Drawing::Color::Black;
			this->chData->BorderlineColor = System::Drawing::Color::Transparent;
			this->chData->BorderSkin->PageColor = System::Drawing::Color::Black;
			this->chData->CausesValidation = false;
			chartArea1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"chArea";
			this->chData->ChartAreas->Add(chartArea1);
			this->chData->ImeMode = System::Windows::Forms::ImeMode::On;
			legend1->BackColor = System::Drawing::Color::DimGray;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"lgLegend";
			legend1->TitleFont = (gcnew System::Drawing::Font(L"Louis George Café Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chData->Legends->Add(legend1);
			this->chData->Location = System::Drawing::Point(1007, 154);
			this->chData->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chData->Name = L"chData";
			this->chData->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chData->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(3) {
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
						static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(33))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
							static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(47)))
			};
			this->chData->RightToLeft = System::Windows::Forms::RightToLeft::No;
			series1->ChartArea = L"chArea";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Font = (gcnew System::Drawing::Font(L"Louis George Café Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->LabelBackColor = System::Drawing::Color::Transparent;
			series1->LabelBorderColor = System::Drawing::Color::Transparent;
			series1->Legend = L"lgLegend";
			series1->Name = L"CavaValues (Placeholder/Non-Functional)";
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			series1->Points->Add(dataPoint3);
			series1->Points->Add(dataPoint4);
			series1->Points->Add(dataPoint5);
			this->chData->Series->Add(series1);
			this->chData->Size = System::Drawing::Size(432, 462);
			this->chData->TabIndex = 16;
			this->chData->Text = L"chData";
			// 
			// CavaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->ClientSize = System::Drawing::Size(1481, 760);
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
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

private: System::Void cavatimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	timer_intern++;
	if (timer_intern >= 1000)
		timer_intern = 0;

	double time_since_frame = cavaTimer->Interval / 1000.0; //ms to s
	double oxygen = 100.0;

	human_ptr->CardiovascularSystem(time_since_frame, &oxygen);
	//Update trachea
	trachea_form->UpdateFlowRate(std::ceil(human_ptr->trachea->GetFlowRate() * 100.0) / 100.0);
	trachea_form->UpdateOxygen(std::ceil(human_ptr->trachea->GetOxygen() * 100.0) / 100.0);
	//Update lung
	lung_form->UpdateOxygenFlow(std::ceil(human_ptr->lung->GetOxygenFlow() * 100.0) / 100.0);
	lung_form->UpdatePressure(std::ceil(human_ptr->lung->GetPressure() * 100.0) / 100.0);
	//Update heart
	heart_form->UpdateOxygen(std::ceil(human_ptr->heart->GetOxygen() * 100.0) / 100.0);
    heart_form->UpdateFlowRate(std::ceil(human_ptr->heart->GetFlowRate() * 100.0) / 100.0);
	heart_form->UpdateLAElastance(std::ceil(human_ptr->heart->left_atrium->GetElastance() * 100.0) / 100.0);
	heart_form->UpdateLAPressure(std::ceil(human_ptr->heart->left_atrium->GetPressure() * 100.0) / 100.0);
	heart_form->UpdateLARadius(std::ceil(human_ptr->heart->left_atrium->GetRadius() * 100.0) / 100.0);
	heart_form->UpdateRAElastance(std::ceil(human_ptr->heart->right_atrium->GetElastance() * 100.0) / 100.0);
	heart_form->UpdateRAPressure(std::ceil(human_ptr->heart->right_atrium->GetPressure() * 100.0) / 100.0);
	heart_form->UpdateRARadius(std::ceil(human_ptr->heart->right_atrium->GetRadius() * 100.0) / 100.0);
	heart_form->UpdateLVInertance(std::ceil(human_ptr->heart->left_ventricle->GetInertance() * 100.0) / 100.0);
	heart_form->UpdateLVPressureTotal(std::ceil(human_ptr->heart->left_ventricle->GetPressure() * 100.0) / 100.0);
	heart_form->UpdateLVRadius(std::ceil(human_ptr->heart->left_ventricle->GetRadius() * 100.0) / 100.0);
	heart_form->UpdateRVInertance(std::ceil(human_ptr->heart->right_ventricle->GetInertance() * 100.0) / 100.0);
	heart_form->UpdateRVPressureTotal(std::ceil(human_ptr->heart->right_ventricle->GetPressure() * 100.0) / 100.0);
	heart_form->UpdateRVRadius(std::ceil(human_ptr->heart->right_ventricle->GetRadius() * 100.0) / 100.0);
	//Update vascular system
	blood_form->UpdateOxygen(std::ceil(human_ptr->blood_vessel->GetOxygen() * 100.0) / 100.0);
	blood_form->UpdateDiastolicPressure(std::ceil(human_ptr->blood_vessel->GetDiastolicPressure() * 100.0) / 100.0);
	blood_form->UpdateSystolicPressure(std::ceil(human_ptr->blood_vessel->GetSystolicPressure() * 100.0) / 100.00);
	blood_form->UpdatePartialPressureVessel(std::ceil(human_ptr->blood_vessel->GetPartialPressure()* 100.0) / 100.0);
	blood_form->UpdateVelocity(std::ceil(human_ptr->blood_vessel->GetVelocity() * 100.0) / 100.0);
	blood_form->UpdateFlowRate(std::ceil(human_ptr->blood_vessel->GetOxygenFlow() * 100.0) / 100.0);
	blood_form->UpdateResistance(std::ceil(human_ptr->blood_vessel->GetResistance() * 100.0) / 100.0);
	blood_form->UpdateInertance(std::ceil(human_ptr->blood_vessel->GetInertance() * 100.0) / 100.0);
	blood_form->UpdateCompliance(std::ceil(human_ptr->blood_vessel->GetCompliance() * 100.0) / 100.0);
	blood_form->UpdateElastance(std::ceil(human_ptr->blood_vessel->GetElastance() * 100.0) / 100.0);
	blood_form->UpdatePartialPressureTissue(std::ceil(human_ptr->blood_vessel->GetPartialPressureTissue() * 100.0) / 100.0);
	blood_form->UpdateConsumptionRate(std::ceil(human_ptr->blood_vessel->GetOxygenConsumptionTissue() * 100.0) / 100.0);
}



};

}
