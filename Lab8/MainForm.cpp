#include "MainForm.h"


using namespace System;
using namespace System::Windows::Forms; [STAThread]
void main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab8::MainForm form; //назва створеного проекту
	Application::Run(% form); //запуск форми 
}
vector<Trainee*> new_trainee;
vector<Customer<Project>*> new_customers;
vector<Worker*> new_workers;
Manager* manager;
System::Void Lab8::MainForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	id_count++;
	Customer<Project>* customer = new Customer<Project>(msclr::interop::marshal_as<string>(textBox1->Text), System::Int32::Parse(textBox3->Text));;
	customer->add_cust_info(msclr::interop::marshal_as<string>(textBox2->Text), msclr::interop::marshal_as<string>(textBox4->Text));
	customer->set_id(id_count);
	customer->create_project();
	id_count++;
	customer->set_proj_param(msclr::interop::marshal_as<string>(textBox5->Text), msclr::interop::marshal_as<string>(textBox6->Text), System::Int32::Parse(textBox7->Text), id_count);
	new_customers.push_back(customer);
	button1->Enabled = false;
	label1->Text = "Дані успішно відправлені!";
	MessageBox::Show(this, "Дані успішно відправлені", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
System::Void Lab8::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	id_count++;
	manager = new Manager("taras", 20000);
	manager->add_manager_info(10, id_count);
	label16->Text = msclr::interop::marshal_as<String^>(Vacancy::show_company());
	label15->Text = msclr::interop::marshal_as<String^>(Vacancy::show_job());
}
System::Void Lab8::MainForm::Register_Click(System::Object^ sender, System::EventArgs^ e) {
	id_count++;
	Trainee* trainee = new Trainee(msclr::interop::marshal_as<string>(textBox11->Text), msclr::interop::marshal_as<string>(textBox10->Text), System::Int32::Parse(textBox9->Text));
	trainee->set_id(id_count);
	new_trainee.push_back(trainee);
	label2->Text = "Дані успішно відправлені!";
	MessageBox::Show(this, "Дані успішно відправлені", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
System::Void Lab8::MainForm::FindTr_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < new_trainee.size(); i++) {
		if (new_trainee[i]->get_id() == System::Int32::Parse(trIdFind->Text)) {
			vector<string> info = new_trainee[i]->show_info();
			trName->Text = msclr::interop::marshal_as<String^>(info[0]);
			trJob->Text = msclr::interop::marshal_as<String^>(info[1]);
			trSalary->Text = msclr::interop::marshal_as<String^>(info[2]);
			trId->Text = msclr::interop::marshal_as<String^>(info[3]);
			trTime->Text = msclr::interop::marshal_as<String^>(info[4]);
		}
	}
}
System::Void Lab8::MainForm::CustFindBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < new_customers.size(); i++) {
		if (new_customers[i]->get_id() == System::Int32::Parse(custIdFind->Text)) {
			vector<string> info = new_customers[i]->show_info();
			custName->Text = msclr::interop::marshal_as<String^>(info[0]);
			custComp->Text = msclr::interop::marshal_as<String^>(info[1]);
			custSalary->Text = msclr::interop::marshal_as<String^>(info[2]);
			custEmail->Text = msclr::interop::marshal_as<String^>(info[3]);
			custId->Text = msclr::interop::marshal_as<String^>(info[4]);
			info = new_customers[i]->get_project()->get_info();
			projName->Text = msclr::interop::marshal_as<String^>(info[0]);
			projTheme->Text = msclr::interop::marshal_as<String^>(info[1]);
			projTime->Text = msclr::interop::marshal_as<String^>(info[2]);
			projCost->Text = msclr::interop::marshal_as<String^>(info[3]);
			projId->Text = msclr::interop::marshal_as<String^>(info[4]);
			projEmp->Text = msclr::interop::marshal_as<String^>(info[5]);
		}
	}
}
System::Void Lab8::MainForm::hire_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < new_trainee.size(); i++) {
		if (new_trainee[i]->get_id() == System::Int32::Parse(hireId->Text)) {
			Worker* worker = new Worker(*new_trainee[i]);
			new_workers.push_back(worker);
			delete new_trainee[i];
			new_trainee.erase(new_trainee.begin() + i);
			MessageBox::Show(this, "Працівника успішно добавлено", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
System::Void Lab8::MainForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	listBox2->Items->Clear();
	listBox3->Items->Clear();
	for (int i = 0; i < new_customers.size(); i++) {
		listBox1->Items->Add("Ім'я: " + msclr::interop::marshal_as<String^>(new_customers[i]->get_name()) + "  ID: " + System::Convert::ToString(new_customers[i]->get_id()));
	}
	for (int i = 0; i < new_trainee.size(); i++) {
		listBox2->Items->Add("Ім'я: " + msclr::interop::marshal_as<String^>(new_trainee[i]->get_name()) + "  ID: " + System::Convert::ToString(new_trainee[i]->get_id()));
	}
	for (int i = 0; i < new_workers.size(); i++) {
		listBox3->Items->Add("Ім'я: " + msclr::interop::marshal_as<String^>(new_workers[i]->get_name()) + "  ID: " + System::Convert::ToString(new_workers[i]->get_id()));
	}
}
System::Void Lab8::MainForm::changeSalary_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < new_workers.size(); i++) {
		if (new_workers[i]->get_id() == System::Int32::Parse(salaryId->Text)) {
			new_workers[i]->set_salary(System::Int32::Parse(salaryNum->Text));
			MessageBox::Show(this, "Зарплата змінена", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
System::Void Lab8::MainForm::deleteWorker_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < new_workers.size(); i++) {
		if (new_workers[i]->get_id() == System::Int32::Parse(deleteId->Text)) {
			manager->delete_by_id(System::Int32::Parse(deleteId->Text));
			delete new_workers[i];
			new_workers.erase(new_workers.begin() + i);
			
			MessageBox::Show(this, "Працівник видалений", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
System::Void Lab8::MainForm::setParam_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < new_customers.size(); i++) {
		if (new_customers[i]->get_id() == System::Int32::Parse(textBox8->Text)) {
			manager->set_proj_param(System::Int32::Parse(projPrice->Text), System::Int32::Parse(numOfEmp->Text), *new_customers[i]);
			MessageBox::Show(this, "Параметри задані", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
System::Void Lab8::MainForm::addWork_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < new_customers.size(); i++) {
		if (new_customers[i]->get_id() == System::Int32::Parse(custProjId->Text)) {
			for (int j = 0; j < new_workers.size(); j++) {
				if (new_workers[j]->get_id() == System::Int32::Parse(workProjId->Text)) {
					manager->add_worker(new_workers[j], proj_count, *new_customers[i]);
					MessageBox::Show(this, "Працівника успішно добавлено", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
		}
	}
}
System::Void Lab8::MainForm::dropTask_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<string> tasksProj;
	cli::array<String^>^ lines = richTextBox1->Lines;
	for each (String^ line in lines)
	{
		tasksProj.push_back(msclr::interop::marshal_as<string>(line));
	}
	manager->set_tasks(tasksProj, proj_count);
	manager->set_worker_task(proj_count);
	MessageBox::Show(this, "Завдання задані працівникам", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
System::Void Lab8::MainForm::workerFind_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < new_workers.size(); i++) {
		if (new_workers[i]->get_id() == System::Int32::Parse(workerId->Text)) {
			vector<string> info = new_workers[i]->show_info();
			workerName->Text = msclr::interop::marshal_as<String^>(info[0]);
			workerJob->Text = msclr::interop::marshal_as<String^>(info[1]);
			workerSal->Text = msclr::interop::marshal_as<String^>(info[2]);
			workId->Text = msclr::interop::marshal_as<String^>(info[3]);
			workTask->Text = msclr::interop::marshal_as<String^>(info[4]);
		}
	}
}