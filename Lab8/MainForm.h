#pragma once
#include "MainForm.h"
#include<msclr/marshal_cppstd.h>
#include "Project.h"
#include "Human.h"
#include "Trainee.h"
#include "Worker.h"
#include "Customer.h"
#include "Manager.h"
#include "MyException.h"
#include "Vacancy.h"
namespace Lab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		int proj_count = 1;
	private: System::Windows::Forms::Label^ workTask;
	public:

	private: System::Windows::Forms::Label^ workId;
	public:

	private: System::Windows::Forms::Label^ workerSal;

	private: System::Windows::Forms::Label^ workerJob;

	private: System::Windows::Forms::Label^ workerName;

	private: System::Windows::Forms::Button^ workerFind;

	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::TextBox^ workerId;

	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
		   int id_count = 0;
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ MainTab;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ Register;

	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ trTime;

	private: System::Windows::Forms::Label^ trId;

	private: System::Windows::Forms::Label^ trSalary;

	private: System::Windows::Forms::Label^ trJob;

	private: System::Windows::Forms::Label^ trName;
	private: System::Windows::Forms::Button^ FindTr;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ trIdFind;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::Label^ custId;

	private: System::Windows::Forms::Label^ custEmail;

	private: System::Windows::Forms::Label^ custSalary;

	private: System::Windows::Forms::Label^ custComp;

	private: System::Windows::Forms::Label^ custName;
private: System::Windows::Forms::Button^ CustFindBtn;


	private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ custIdFind;

	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ projEmp;

private: System::Windows::Forms::Label^ projId;

private: System::Windows::Forms::Label^ projTime;

private: System::Windows::Forms::Label^ projTheme;

private: System::Windows::Forms::Label^ projName;

private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ projCost;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ changeSalary;

private: System::Windows::Forms::Button^ hire;

private: System::Windows::Forms::TextBox^ hireId;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Button^ deleteWorker;

private: System::Windows::Forms::TextBox^ salaryNum;

private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ salaryId;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ deleteId;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ numOfEmp;
private: System::Windows::Forms::TextBox^ projPrice;


private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Button^ dropTask;

private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::TextBox^ workProjId;

private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Button^ setParam;

private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::TextBox^ custProjId;
private: System::Windows::Forms::Button^ addWork;
private: System::Windows::Forms::TextBox^ textBox8;




	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->MainTab = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->projCost = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->projEmp = (gcnew System::Windows::Forms::Label());
			this->projId = (gcnew System::Windows::Forms::Label());
			this->projTime = (gcnew System::Windows::Forms::Label());
			this->projTheme = (gcnew System::Windows::Forms::Label());
			this->projName = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->custId = (gcnew System::Windows::Forms::Label());
			this->custEmail = (gcnew System::Windows::Forms::Label());
			this->custSalary = (gcnew System::Windows::Forms::Label());
			this->custComp = (gcnew System::Windows::Forms::Label());
			this->custName = (gcnew System::Windows::Forms::Label());
			this->CustFindBtn = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->custIdFind = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->custProjId = (gcnew System::Windows::Forms::TextBox());
			this->addWork = (gcnew System::Windows::Forms::Button());
			this->workProjId = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->setParam = (gcnew System::Windows::Forms::Button());
			this->numOfEmp = (gcnew System::Windows::Forms::TextBox());
			this->projPrice = (gcnew System::Windows::Forms::TextBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->dropTask = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->deleteId = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->salaryNum = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->salaryId = (gcnew System::Windows::Forms::TextBox());
			this->hireId = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->deleteWorker = (gcnew System::Windows::Forms::Button());
			this->changeSalary = (gcnew System::Windows::Forms::Button());
			this->hire = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->workTask = (gcnew System::Windows::Forms::Label());
			this->workId = (gcnew System::Windows::Forms::Label());
			this->workerSal = (gcnew System::Windows::Forms::Label());
			this->workerJob = (gcnew System::Windows::Forms::Label());
			this->workerName = (gcnew System::Windows::Forms::Label());
			this->workerFind = (gcnew System::Windows::Forms::Button());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->workerId = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->trTime = (gcnew System::Windows::Forms::Label());
			this->trId = (gcnew System::Windows::Forms::Label());
			this->trSalary = (gcnew System::Windows::Forms::Label());
			this->trJob = (gcnew System::Windows::Forms::Label());
			this->trName = (gcnew System::Windows::Forms::Label());
			this->FindTr = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->trIdFind = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->MainTab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainTab
			// 
			this->MainTab->Controls->Add(this->tabPage1);
			this->MainTab->Controls->Add(this->tabPage2);
			this->MainTab->Controls->Add(this->tabPage3);
			this->MainTab->Controls->Add(this->tabPage4);
			this->MainTab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainTab->Location = System::Drawing::Point(12, 12);
			this->MainTab->Name = L"MainTab";
			this->MainTab->SelectedIndex = 0;
			this->MainTab->Size = System::Drawing::Size(837, 510);
			this->MainTab->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl3);
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(829, 479);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Замовник";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Location = System::Drawing::Point(6, 6);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(817, 467);
			this->tabControl3->TabIndex = 13;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->groupBox1);
			this->tabPage10->Controls->Add(this->groupBox2);
			this->tabPage10->Controls->Add(this->button1);
			this->tabPage10->Controls->Add(this->label1);
			this->tabPage10->Location = System::Drawing::Point(4, 27);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(809, 436);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"Заповнення даних";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(6, 70);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(381, 277);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Дані замовника";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(173, 212);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(183, 30);
			this->textBox4->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(173, 155);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 30);
			this->textBox3->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(173, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 30);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(173, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 30);
			this->textBox1->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ел. пошта: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Бюджет:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Компанія:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ім\'я: ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(413, 70);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(381, 277);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Дані проекту";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(205, 158);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(150, 30);
			this->textBox7->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(205, 106);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(150, 30);
			this->textBox6->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(205, 52);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(150, 30);
			this->textBox5->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 158);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(196, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Терміни виконання:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Тематика:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Назва: ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(311, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 42);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Відправити дані";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(32, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 22);
			this->label1->TabIndex = 11;
			this->label1->Text = L"*Заповніть дані замовника та проекту";
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->projCost);
			this->tabPage11->Controls->Add(this->label25);
			this->tabPage11->Controls->Add(this->projEmp);
			this->tabPage11->Controls->Add(this->projId);
			this->tabPage11->Controls->Add(this->projTime);
			this->tabPage11->Controls->Add(this->projTheme);
			this->tabPage11->Controls->Add(this->projName);
			this->tabPage11->Controls->Add(this->label42);
			this->tabPage11->Controls->Add(this->label43);
			this->tabPage11->Controls->Add(this->label44);
			this->tabPage11->Controls->Add(this->label45);
			this->tabPage11->Controls->Add(this->label46);
			this->tabPage11->Controls->Add(this->label47);
			this->tabPage11->Controls->Add(this->custId);
			this->tabPage11->Controls->Add(this->custEmail);
			this->tabPage11->Controls->Add(this->custSalary);
			this->tabPage11->Controls->Add(this->custComp);
			this->tabPage11->Controls->Add(this->custName);
			this->tabPage11->Controls->Add(this->CustFindBtn);
			this->tabPage11->Controls->Add(this->label30);
			this->tabPage11->Controls->Add(this->custIdFind);
			this->tabPage11->Controls->Add(this->label31);
			this->tabPage11->Controls->Add(this->label32);
			this->tabPage11->Controls->Add(this->label33);
			this->tabPage11->Controls->Add(this->label34);
			this->tabPage11->Controls->Add(this->label35);
			this->tabPage11->Controls->Add(this->label36);
			this->tabPage11->Location = System::Drawing::Point(4, 27);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(809, 436);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"Перегляд даних";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// projCost
			// 
			this->projCost->AutoSize = true;
			this->projCost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->projCost->Location = System::Drawing::Point(609, 296);
			this->projCost->Name = L"projCost";
			this->projCost->Size = System::Drawing::Size(0, 25);
			this->projCost->TabIndex = 56;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(426, 296);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(99, 25);
			this->label25->TabIndex = 55;
			this->label25->Text = L"Вартість:";
			// 
			// projEmp
			// 
			this->projEmp->AutoSize = true;
			this->projEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->projEmp->Location = System::Drawing::Point(609, 397);
			this->projEmp->Name = L"projEmp";
			this->projEmp->Size = System::Drawing::Size(0, 25);
			this->projEmp->TabIndex = 54;
			// 
			// projId
			// 
			this->projId->AutoSize = true;
			this->projId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->projId->Location = System::Drawing::Point(609, 347);
			this->projId->Name = L"projId";
			this->projId->Size = System::Drawing::Size(0, 25);
			this->projId->TabIndex = 53;
			// 
			// projTime
			// 
			this->projTime->AutoSize = true;
			this->projTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->projTime->Location = System::Drawing::Point(609, 236);
			this->projTime->Name = L"projTime";
			this->projTime->Size = System::Drawing::Size(0, 25);
			this->projTime->TabIndex = 52;
			// 
			// projTheme
			// 
			this->projTheme->AutoSize = true;
			this->projTheme->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->projTheme->Location = System::Drawing::Point(609, 179);
			this->projTheme->Name = L"projTheme";
			this->projTheme->Size = System::Drawing::Size(0, 25);
			this->projTheme->TabIndex = 51;
			// 
			// projName
			// 
			this->projName->AutoSize = true;
			this->projName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->projName->Location = System::Drawing::Point(609, 123);
			this->projName->Name = L"projName";
			this->projName->Size = System::Drawing::Size(0, 25);
			this->projName->TabIndex = 50;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(426, 397);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(150, 25);
			this->label42->TabIndex = 49;
			this->label42->Text = L"К-сть робочих:";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(426, 347);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(42, 25);
			this->label43->TabIndex = 48;
			this->label43->Text = L"ID: ";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(426, 236);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(95, 25);
			this->label44->TabIndex = 47;
			this->label44->Text = L"Терміни:";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(426, 179);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(111, 25);
			this->label45->TabIndex = 46;
			this->label45->Text = L"Тематика:";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->Location = System::Drawing::Point(426, 123);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(72, 25);
			this->label46->TabIndex = 45;
			this->label46->Text = L"Назва:";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->Location = System::Drawing::Point(426, 65);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(169, 25);
			this->label47->TabIndex = 44;
			this->label47->Text = L"Дані про проект:";
			// 
			// custId
			// 
			this->custId->AutoSize = true;
			this->custId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->custId->Location = System::Drawing::Point(248, 347);
			this->custId->Name = L"custId";
			this->custId->Size = System::Drawing::Size(0, 25);
			this->custId->TabIndex = 43;
			// 
			// custEmail
			// 
			this->custEmail->AutoSize = true;
			this->custEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->custEmail->Location = System::Drawing::Point(248, 296);
			this->custEmail->Name = L"custEmail";
			this->custEmail->Size = System::Drawing::Size(0, 25);
			this->custEmail->TabIndex = 42;
			// 
			// custSalary
			// 
			this->custSalary->AutoSize = true;
			this->custSalary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->custSalary->Location = System::Drawing::Point(248, 236);
			this->custSalary->Name = L"custSalary";
			this->custSalary->Size = System::Drawing::Size(0, 25);
			this->custSalary->TabIndex = 41;
			// 
			// custComp
			// 
			this->custComp->AutoSize = true;
			this->custComp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->custComp->Location = System::Drawing::Point(248, 179);
			this->custComp->Name = L"custComp";
			this->custComp->Size = System::Drawing::Size(0, 25);
			this->custComp->TabIndex = 40;
			// 
			// custName
			// 
			this->custName->AutoSize = true;
			this->custName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->custName->Location = System::Drawing::Point(248, 123);
			this->custName->Name = L"custName";
			this->custName->Size = System::Drawing::Size(0, 25);
			this->custName->TabIndex = 39;
			// 
			// CustFindBtn
			// 
			this->CustFindBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->CustFindBtn->FlatAppearance->BorderSize = 2;
			this->CustFindBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CustFindBtn->Location = System::Drawing::Point(516, 10);
			this->CustFindBtn->Name = L"CustFindBtn";
			this->CustFindBtn->Size = System::Drawing::Size(169, 42);
			this->CustFindBtn->TabIndex = 38;
			this->CustFindBtn->Text = L"Знайти";
			this->CustFindBtn->UseVisualStyleBackColor = false;
			this->CustFindBtn->Click += gcnew System::EventHandler(this, &MainForm::CustFindBtn_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(65, 17);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(154, 25);
			this->label30->TabIndex = 37;
			this->label30->Text = L"Введіть ваш ID:";
			// 
			// custIdFind
			// 
			this->custIdFind->Location = System::Drawing::Point(253, 19);
			this->custIdFind->Name = L"custIdFind";
			this->custIdFind->Size = System::Drawing::Size(100, 24);
			this->custIdFind->TabIndex = 36;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(65, 296);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(113, 25);
			this->label31->TabIndex = 35;
			this->label31->Text = L"Ел. пошта:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(65, 347);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(42, 25);
			this->label32->TabIndex = 34;
			this->label32->Text = L"ID: ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(65, 236);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(97, 25);
			this->label33->TabIndex = 33;
			this->label33->Text = L"Бюджет:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(65, 179);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(105, 25);
			this->label34->TabIndex = 32;
			this->label34->Text = L"Компанія:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(65, 123);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(60, 25);
			this->label35->TabIndex = 31;
			this->label35->Text = L"Ім\'я: ";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(65, 65);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(204, 25);
			this->label36->TabIndex = 30;
			this->label36->Text = L"Дані про замовника:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(829, 479);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Менеджер";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Controls->Add(this->tabPage9);
			this->tabControl2->Location = System::Drawing::Point(6, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(817, 462);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->button2);
			this->tabPage7->Controls->Add(this->label48);
			this->tabPage7->Controls->Add(this->label41);
			this->tabPage7->Controls->Add(this->label40);
			this->tabPage7->Controls->Add(this->listBox3);
			this->tabPage7->Controls->Add(this->listBox2);
			this->tabPage7->Controls->Add(this->listBox1);
			this->tabPage7->Location = System::Drawing::Point(4, 27);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(809, 431);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Перегляд даних";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(290, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(232, 53);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Завантажити дані";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->Location = System::Drawing::Point(626, 46);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(110, 20);
			this->label48->TabIndex = 5;
			this->label48->Text = L"Працівники:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(362, 46);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(88, 20);
			this->label41->TabIndex = 4;
			this->label41->Text = L"Стажери:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(72, 46);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(107, 20);
			this->label40->TabIndex = 3;
			this->label40->Text = L"Замовники:";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 18;
			this->listBox3->Location = System::Drawing::Point(562, 70);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(232, 220);
			this->listBox3->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Location = System::Drawing::Point(290, 70);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(232, 220);
			this->listBox2->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(17, 70);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(232, 220);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->textBox8);
			this->tabPage8->Controls->Add(this->label55);
			this->tabPage8->Controls->Add(this->label54);
			this->tabPage8->Controls->Add(this->custProjId);
			this->tabPage8->Controls->Add(this->addWork);
			this->tabPage8->Controls->Add(this->workProjId);
			this->tabPage8->Controls->Add(this->label53);
			this->tabPage8->Controls->Add(this->label52);
			this->tabPage8->Controls->Add(this->label51);
			this->tabPage8->Controls->Add(this->setParam);
			this->tabPage8->Controls->Add(this->numOfEmp);
			this->tabPage8->Controls->Add(this->projPrice);
			this->tabPage8->Controls->Add(this->label50);
			this->tabPage8->Controls->Add(this->dropTask);
			this->tabPage8->Controls->Add(this->richTextBox1);
			this->tabPage8->Controls->Add(this->label49);
			this->tabPage8->Location = System::Drawing::Point(4, 27);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(809, 431);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Керування проектом";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(393, 10);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(51, 24);
			this->textBox8->TabIndex = 15;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->Location = System::Drawing::Point(472, 92);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(129, 20);
			this->label55->TabIndex = 14;
			this->label55->Text = L"ID працівника:";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->Location = System::Drawing::Point(472, 49);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(126, 20);
			this->label54->TabIndex = 13;
			this->label54->Text = L"ID замовника:";
			// 
			// custProjId
			// 
			this->custProjId->Location = System::Drawing::Point(641, 47);
			this->custProjId->Name = L"custProjId";
			this->custProjId->Size = System::Drawing::Size(131, 24);
			this->custProjId->TabIndex = 12;
			// 
			// addWork
			// 
			this->addWork->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->addWork->FlatAppearance->BorderSize = 2;
			this->addWork->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addWork->Location = System::Drawing::Point(532, 145);
			this->addWork->Name = L"addWork";
			this->addWork->Size = System::Drawing::Size(174, 38);
			this->addWork->TabIndex = 11;
			this->addWork->Text = L"Добавити";
			this->addWork->UseVisualStyleBackColor = false;
			this->addWork->Click += gcnew System::EventHandler(this, &MainForm::addWork_Click);
			// 
			// workProjId
			// 
			this->workProjId->Location = System::Drawing::Point(641, 92);
			this->workProjId->Name = L"workProjId";
			this->workProjId->Size = System::Drawing::Size(131, 24);
			this->workProjId->TabIndex = 10;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->Location = System::Drawing::Point(450, 12);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(289, 20);
			this->label53->TabIndex = 9;
			this->label53->Text = L"Добавлення робочого на проект:";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->Location = System::Drawing::Point(16, 94);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(161, 20);
			this->label52->TabIndex = 8;
			this->label52->Text = L"Вартість проекту:";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->Location = System::Drawing::Point(16, 49);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(255, 20);
			this->label51->TabIndex = 7;
			this->label51->Text = L"К-сть працівників на проекті:";
			// 
			// setParam
			// 
			this->setParam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->setParam->FlatAppearance->BorderSize = 2;
			this->setParam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->setParam->Location = System::Drawing::Point(20, 127);
			this->setParam->Name = L"setParam";
			this->setParam->Size = System::Drawing::Size(212, 40);
			this->setParam->TabIndex = 6;
			this->setParam->Text = L"Задати параметри";
			this->setParam->UseVisualStyleBackColor = false;
			this->setParam->Click += gcnew System::EventHandler(this, &MainForm::setParam_Click);
			// 
			// numOfEmp
			// 
			this->numOfEmp->Location = System::Drawing::Point(297, 47);
			this->numOfEmp->Name = L"numOfEmp";
			this->numOfEmp->Size = System::Drawing::Size(93, 24);
			this->numOfEmp->TabIndex = 5;
			// 
			// projPrice
			// 
			this->projPrice->Location = System::Drawing::Point(256, 94);
			this->projPrice->Name = L"projPrice";
			this->projPrice->Size = System::Drawing::Size(134, 24);
			this->projPrice->TabIndex = 4;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->Location = System::Drawing::Point(16, 12);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(371, 20);
			this->label50->TabIndex = 3;
			this->label50->Text = L"Задання параметрів проекту:  ID власника";
			// 
			// dropTask
			// 
			this->dropTask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->dropTask->FlatAppearance->BorderSize = 2;
			this->dropTask->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dropTask->Location = System::Drawing::Point(20, 362);
			this->dropTask->Name = L"dropTask";
			this->dropTask->Size = System::Drawing::Size(257, 39);
			this->dropTask->TabIndex = 2;
			this->dropTask->Text = L"Розподілити завдання";
			this->dropTask->UseVisualStyleBackColor = false;
			this->dropTask->Click += gcnew System::EventHandler(this, &MainForm::dropTask_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 207);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(797, 135);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->Location = System::Drawing::Point(16, 184);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(307, 20);
			this->label49->TabIndex = 0;
			this->label49->Text = L"Введіть завдання для працівників:";
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->deleteId);
			this->tabPage9->Controls->Add(this->label39);
			this->tabPage9->Controls->Add(this->label38);
			this->tabPage9->Controls->Add(this->salaryNum);
			this->tabPage9->Controls->Add(this->label37);
			this->tabPage9->Controls->Add(this->label29);
			this->tabPage9->Controls->Add(this->salaryId);
			this->tabPage9->Controls->Add(this->hireId);
			this->tabPage9->Controls->Add(this->label28);
			this->tabPage9->Controls->Add(this->label27);
			this->tabPage9->Controls->Add(this->label26);
			this->tabPage9->Controls->Add(this->deleteWorker);
			this->tabPage9->Controls->Add(this->changeSalary);
			this->tabPage9->Controls->Add(this->hire);
			this->tabPage9->Location = System::Drawing::Point(4, 27);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(809, 431);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = L"Керування працівниками";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// deleteId
			// 
			this->deleteId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteId->Location = System::Drawing::Point(309, 292);
			this->deleteId->Name = L"deleteId";
			this->deleteId->Size = System::Drawing::Size(100, 27);
			this->deleteId->TabIndex = 13;
			// 
			// label39
			// 
			this->label39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label39->Location = System::Drawing::Point(0, 257);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(809, 10);
			this->label39->TabIndex = 12;
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label38->Location = System::Drawing::Point(0, 93);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(809, 10);
			this->label38->TabIndex = 11;
			// 
			// salaryNum
			// 
			this->salaryNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->salaryNum->Location = System::Drawing::Point(599, 171);
			this->salaryNum->Name = L"salaryNum";
			this->salaryNum->Size = System::Drawing::Size(100, 27);
			this->salaryNum->TabIndex = 10;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(595, 122);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(141, 20);
			this->label37->TabIndex = 9;
			this->label37->Text = L"Нова зарплата:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(413, 122);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(31, 20);
			this->label29->TabIndex = 8;
			this->label29->Text = L"ID:";
			// 
			// salaryId
			// 
			this->salaryId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->salaryId->Location = System::Drawing::Point(385, 171);
			this->salaryId->Name = L"salaryId";
			this->salaryId->Size = System::Drawing::Size(100, 27);
			this->salaryId->TabIndex = 7;
			// 
			// hireId
			// 
			this->hireId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hireId->Location = System::Drawing::Point(496, 13);
			this->hireId->Name = L"hireId";
			this->hireId->Size = System::Drawing::Size(100, 27);
			this->hireId->TabIndex = 6;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(6, 295);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(243, 20);
			this->label28->TabIndex = 5;
			this->label28->Text = L"Видалити працівника по ID:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(6, 122);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(307, 20);
			this->label27->TabIndex = 4;
			this->label27->Text = L"Змінити зарплату працівнику по ID:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(6, 13);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(463, 20);
			this->label26->TabIndex = 3;
			this->label26->Text = L"Найняти працівника зі стажерів - введіть ID стажера:";
			// 
			// deleteWorker
			// 
			this->deleteWorker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->deleteWorker->FlatAppearance->BorderSize = 2;
			this->deleteWorker->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteWorker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteWorker->Location = System::Drawing::Point(66, 351);
			this->deleteWorker->Name = L"deleteWorker";
			this->deleteWorker->Size = System::Drawing::Size(181, 48);
			this->deleteWorker->TabIndex = 2;
			this->deleteWorker->Text = L"Видалити";
			this->deleteWorker->UseVisualStyleBackColor = false;
			this->deleteWorker->Click += gcnew System::EventHandler(this, &MainForm::deleteWorker_Click);
			// 
			// changeSalary
			// 
			this->changeSalary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->changeSalary->FlatAppearance->BorderSize = 2;
			this->changeSalary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->changeSalary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changeSalary->Location = System::Drawing::Point(66, 175);
			this->changeSalary->Name = L"changeSalary";
			this->changeSalary->Size = System::Drawing::Size(181, 44);
			this->changeSalary->TabIndex = 1;
			this->changeSalary->Text = L"Змінити";
			this->changeSalary->UseVisualStyleBackColor = false;
			this->changeSalary->Click += gcnew System::EventHandler(this, &MainForm::changeSalary_Click);
			// 
			// hire
			// 
			this->hire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->hire->FlatAppearance->BorderSize = 2;
			this->hire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hire->Location = System::Drawing::Point(642, 13);
			this->hire->Name = L"hire";
			this->hire->Size = System::Drawing::Size(136, 43);
			this->hire->TabIndex = 0;
			this->hire->Text = L"Найняти";
			this->hire->UseVisualStyleBackColor = false;
			this->hire->Click += gcnew System::EventHandler(this, &MainForm::hire_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->workTask);
			this->tabPage3->Controls->Add(this->workId);
			this->tabPage3->Controls->Add(this->workerSal);
			this->tabPage3->Controls->Add(this->workerJob);
			this->tabPage3->Controls->Add(this->workerName);
			this->tabPage3->Controls->Add(this->workerFind);
			this->tabPage3->Controls->Add(this->label61);
			this->tabPage3->Controls->Add(this->workerId);
			this->tabPage3->Controls->Add(this->label62);
			this->tabPage3->Controls->Add(this->label63);
			this->tabPage3->Controls->Add(this->label64);
			this->tabPage3->Controls->Add(this->label65);
			this->tabPage3->Controls->Add(this->label66);
			this->tabPage3->Controls->Add(this->label67);
			this->tabPage3->Location = System::Drawing::Point(4, 27);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(829, 479);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Працівник";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// workTask
			// 
			this->workTask->AutoSize = true;
			this->workTask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->workTask->Location = System::Drawing::Point(237, 337);
			this->workTask->Name = L"workTask";
			this->workTask->Size = System::Drawing::Size(0, 25);
			this->workTask->TabIndex = 43;
			// 
			// workId
			// 
			this->workId->AutoSize = true;
			this->workId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->workId->Location = System::Drawing::Point(237, 286);
			this->workId->Name = L"workId";
			this->workId->Size = System::Drawing::Size(0, 25);
			this->workId->TabIndex = 42;
			// 
			// workerSal
			// 
			this->workerSal->AutoSize = true;
			this->workerSal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->workerSal->Location = System::Drawing::Point(237, 226);
			this->workerSal->Name = L"workerSal";
			this->workerSal->Size = System::Drawing::Size(0, 25);
			this->workerSal->TabIndex = 41;
			// 
			// workerJob
			// 
			this->workerJob->AutoSize = true;
			this->workerJob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->workerJob->Location = System::Drawing::Point(237, 169);
			this->workerJob->Name = L"workerJob";
			this->workerJob->Size = System::Drawing::Size(0, 25);
			this->workerJob->TabIndex = 40;
			// 
			// workerName
			// 
			this->workerName->AutoSize = true;
			this->workerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->workerName->Location = System::Drawing::Point(237, 113);
			this->workerName->Name = L"workerName";
			this->workerName->Size = System::Drawing::Size(0, 25);
			this->workerName->TabIndex = 39;
			// 
			// workerFind
			// 
			this->workerFind->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->workerFind->FlatAppearance->BorderSize = 2;
			this->workerFind->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->workerFind->Location = System::Drawing::Point(498, 133);
			this->workerFind->Name = L"workerFind";
			this->workerFind->Size = System::Drawing::Size(169, 42);
			this->workerFind->TabIndex = 38;
			this->workerFind->Text = L"Знайти";
			this->workerFind->UseVisualStyleBackColor = false;
			this->workerFind->Click += gcnew System::EventHandler(this, &MainForm::workerFind_Click);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label61->Location = System::Drawing::Point(433, 70);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(154, 25);
			this->label61->TabIndex = 37;
			this->label61->Text = L"Введіть ваш ID:";
			// 
			// workerId
			// 
			this->workerId->Location = System::Drawing::Point(607, 72);
			this->workerId->Name = L"workerId";
			this->workerId->Size = System::Drawing::Size(100, 24);
			this->workerId->TabIndex = 36;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label62->Location = System::Drawing::Point(54, 337);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(106, 25);
			this->label62->TabIndex = 35;
			this->label62->Text = L"Завдання:";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label63->Location = System::Drawing::Point(54, 286);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(42, 25);
			this->label63->TabIndex = 34;
			this->label63->Text = L"ID: ";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label64->Location = System::Drawing::Point(54, 226);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(107, 25);
			this->label64->TabIndex = 33;
			this->label64->Text = L"Зарплата:";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label65->Location = System::Drawing::Point(54, 169);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(143, 25);
			this->label65->TabIndex = 32;
			this->label65->Text = L"Місце роботи:";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label66->Location = System::Drawing::Point(54, 113);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(60, 25);
			this->label66->TabIndex = 31;
			this->label66->Text = L"Ім\'я: ";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label67->Location = System::Drawing::Point(54, 55);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(203, 25);
			this->label67->TabIndex = 30;
			this->label67->Text = L"Дані про працівника:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl1);
			this->tabPage4->Location = System::Drawing::Point(4, 27);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(829, 479);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Стажер";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(6, 6);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(817, 459);
			this->tabControl1->TabIndex = 15;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->label16);
			this->tabPage5->Controls->Add(this->label15);
			this->tabPage5->Controls->Add(this->label14);
			this->tabPage5->Controls->Add(this->label10);
			this->tabPage5->Controls->Add(this->label2);
			this->tabPage5->Controls->Add(this->Register);
			this->tabPage5->Controls->Add(this->groupBox3);
			this->tabPage5->Location = System::Drawing::Point(4, 27);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(809, 428);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Реєстрація";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(511, 220);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(74, 25);
			this->label17->TabIndex = 19;
			this->label17->Text = L"Відділ:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(511, 168);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(75, 25);
			this->label16->TabIndex = 18;
			this->label16->Text = L"label16";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(511, 280);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 25);
			this->label15->TabIndex = 17;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(511, 109);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 25);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Компанія:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(511, 32);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(183, 25);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Дані про вакансію:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(23, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 22);
			this->label2->TabIndex = 12;
			this->label2->Text = L"*Заповніть дані стажера";
			// 
			// Register
			// 
			this->Register->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->Register->FlatAppearance->BorderSize = 2;
			this->Register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Register->Location = System::Drawing::Point(140, 317);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(198, 42);
			this->Register->TabIndex = 14;
			this->Register->Text = L"Зареєструватись";
			this->Register->UseVisualStyleBackColor = false;
			this->Register->Click += gcnew System::EventHandler(this, &MainForm::Register_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(27, 57);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(417, 223);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Дані стажера";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(213, 155);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(183, 30);
			this->textBox9->TabIndex = 8;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(213, 103);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(183, 30);
			this->textBox10->TabIndex = 7;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(213, 52);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(183, 30);
			this->textBox11->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(6, 158);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(180, 25);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Бажана зарплата:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(6, 106);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 25);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Місце роботи:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(6, 55);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 25);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Ім\'я: ";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->trTime);
			this->tabPage6->Controls->Add(this->trId);
			this->tabPage6->Controls->Add(this->trSalary);
			this->tabPage6->Controls->Add(this->trJob);
			this->tabPage6->Controls->Add(this->trName);
			this->tabPage6->Controls->Add(this->FindTr);
			this->tabPage6->Controls->Add(this->label24);
			this->tabPage6->Controls->Add(this->trIdFind);
			this->tabPage6->Controls->Add(this->label23);
			this->tabPage6->Controls->Add(this->label22);
			this->tabPage6->Controls->Add(this->label21);
			this->tabPage6->Controls->Add(this->label20);
			this->tabPage6->Controls->Add(this->label18);
			this->tabPage6->Controls->Add(this->label19);
			this->tabPage6->Location = System::Drawing::Point(4, 27);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(809, 428);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Переглянути інформацію";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// trTime
			// 
			this->trTime->AutoSize = true;
			this->trTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trTime->Location = System::Drawing::Point(219, 320);
			this->trTime->Name = L"trTime";
			this->trTime->Size = System::Drawing::Size(0, 25);
			this->trTime->TabIndex = 29;
			// 
			// trId
			// 
			this->trId->AutoSize = true;
			this->trId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trId->Location = System::Drawing::Point(219, 269);
			this->trId->Name = L"trId";
			this->trId->Size = System::Drawing::Size(0, 25);
			this->trId->TabIndex = 28;
			// 
			// trSalary
			// 
			this->trSalary->AutoSize = true;
			this->trSalary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trSalary->Location = System::Drawing::Point(219, 209);
			this->trSalary->Name = L"trSalary";
			this->trSalary->Size = System::Drawing::Size(0, 25);
			this->trSalary->TabIndex = 27;
			// 
			// trJob
			// 
			this->trJob->AutoSize = true;
			this->trJob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trJob->Location = System::Drawing::Point(219, 152);
			this->trJob->Name = L"trJob";
			this->trJob->Size = System::Drawing::Size(0, 25);
			this->trJob->TabIndex = 26;
			// 
			// trName
			// 
			this->trName->AutoSize = true;
			this->trName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trName->Location = System::Drawing::Point(219, 96);
			this->trName->Name = L"trName";
			this->trName->Size = System::Drawing::Size(0, 25);
			this->trName->TabIndex = 25;
			// 
			// FindTr
			// 
			this->FindTr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->FindTr->FlatAppearance->BorderSize = 2;
			this->FindTr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FindTr->Location = System::Drawing::Point(480, 116);
			this->FindTr->Name = L"FindTr";
			this->FindTr->Size = System::Drawing::Size(169, 42);
			this->FindTr->TabIndex = 24;
			this->FindTr->Text = L"Знайти";
			this->FindTr->UseVisualStyleBackColor = false;
			this->FindTr->Click += gcnew System::EventHandler(this, &MainForm::FindTr_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(415, 53);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(154, 25);
			this->label24->TabIndex = 23;
			this->label24->Text = L"Введіть ваш ID:";
			// 
			// trIdFind
			// 
			this->trIdFind->Location = System::Drawing::Point(589, 55);
			this->trIdFind->Name = L"trIdFind";
			this->trIdFind->Size = System::Drawing::Size(100, 24);
			this->trIdFind->TabIndex = 22;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(36, 320);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(167, 25);
			this->label23->TabIndex = 21;
			this->label23->Text = L"Час стажування:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(36, 269);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 25);
			this->label22->TabIndex = 20;
			this->label22->Text = L"ID: ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(36, 209);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(107, 25);
			this->label21->TabIndex = 19;
			this->label21->Text = L"Зарплата:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(36, 152);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(143, 25);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Місце роботи:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(36, 96);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(60, 25);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Ім\'я: ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(36, 38);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(184, 25);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Дані про стажера:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(861, 534);
			this->Controls->Add(this->MainTab);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->MainTab->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Register_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void FindTr_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CustFindBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void hire_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void changeSalary_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void deleteWorker_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void setParam_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void addWork_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dropTask_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void workerFind_Click(System::Object^ sender, System::EventArgs^ e);
};
}
