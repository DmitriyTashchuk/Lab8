#include "manager.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "MyException.h"
#include<msclr/marshal_cppstd.h>
using namespace std;
void Customer<Project>::add_cust_info(string company, string email) {		//додавання інформації замовника
	this->company = company;
	this->email = email;
}
void Customer<Project>::set_proj_param(string name, string theme, int time, int id){		//встановлення імені і термінів проекту
	this->get_project()->set_param(name, theme, time, id);
}
void Customer<Project>::set_proj_param(int price, int emp) {		//встановлення вартості і id проекту
	this->get_project()->set_param(price, emp);
}
void Customer<Project>::create_project() {		//створення проекту замовником
	Project *temp = new Project;
	this->new_project = *temp;
	delete temp;
}
template<class Proj>
Proj* Customer<Proj>::get_project() {		//отримання посилання на проект
	return &new_project;
}
string Customer<Project>::get_company() {
	return this->company;
}
string Customer<Project>::get_email() {
	return this->email;
}
vector<string> Customer<Project>::show_info() {
	vector<string> info;
	info.push_back(this->name);
	info.push_back(this->company);
	info.push_back(to_string(this->get_salary()));
	info.push_back(this->email);
	info.push_back(to_string(this->get_id()));
	return info;
}
int Manager::get_num_of_emp(Customer<Project>& cust_name) {
	return stoi(cust_name.get_project()->get_info()[4]);
}
void Manager::set_worker_premium(Worker& worker, int prem) {
	worker.set_premium(prem);
}
void Manager::set_id(int id, Customer<Project>& cust_name) {			//встановлення id замовника менеджером
	cust_name.set_id(id);
}
void Manager::add_manager_info(int exp, int id) {			//додавання інформації менеджера
	this->exp_in_job = exp;
	Human::set_id(id);
}
void Manager::set_proj_param(int price, int emp, Customer<Project>& cust_name) {		//встановлення вартості і id проекту менеджером
	cust_name.set_proj_param(price, emp);
}
void Manager::show_project_info(Customer<Project>& cust_name){				//вивід інформації про проект, закріплений за замовником			
	vector<string> info = cust_name.get_project()->get_info();
}
void Manager::set_tasks(vector<string> param, int num_of_proj) {		//запис завдань для вибраного проекту
	if (num_of_proj > this->tasks.size()) {
		this->tasks.push_back({});
		this->tasks[num_of_proj - 1] = param;
	}
	else {
		this->tasks[num_of_proj - 1] = param;
	}
}
void Manager::show_tasks(int num_of_proj) {						//вивід завдань, заданих для проекту
	if ((num_of_proj - 1) < this->tasks.size()) {
		cout << "Наявні завдання по проекту: " << endl;
		for (int i = 0; i < this->tasks[(num_of_proj - 1)].size(); i++) {
			cout << this->tasks[(num_of_proj - 1)][i] << endl;
		}
	}
}
void Manager::add_worker(Worker* emp, int num_of_proj, Customer<Project>& cust_name) {		//додавання працівника на вибраний проект
	if (emp->get_id() != 0) {
		int number_of_emp = this->get_num_of_emp(cust_name);
		if (num_of_proj > this->workers.size()) {
			this->workers.push_back({});
		}
		if (number_of_emp > this->workers[num_of_proj - 1].size()) {
			this->workers[num_of_proj - 1].push_back(emp);
		}
		else {
			cerr << "Максимальна кількість працівників на проекті" << endl;
		}
	}
}
void Manager::set_trainee_data(Trainee& emp, int id, int time) {
	emp.set_internship_time(time);
	emp.set_id(id);
}
void Manager::set_worker_task(int num_of_proj) {				//встановлення завдань для працівників
	for (int i = 0; i < this->tasks[num_of_proj - 1].size(); i++) {
		if (i < this->workers[num_of_proj - 1].size()) {
			string department = this->get_worker(i, num_of_proj)->get_job();
			bool busy = this->get_worker(i, num_of_proj)->get_busy();
			if (department == "measure" && busy != true) {
				this->get_worker(i, num_of_proj)->set_task(this->tasks[num_of_proj - 1][i]);
			}
			else if (department == "layout" && busy != true) {
				this->get_worker(i, num_of_proj)->set_task(this->tasks[num_of_proj - 1][i]);
			}
			else if (department == "materials" && busy != true) {
				this->get_worker(i, num_of_proj)->set_task(this->tasks[num_of_proj - 1][i]);
			}
		}
	}
}
Worker* Manager::get_worker(int index, int num_of_proj) {			//отримання вказівника на працівника з масиву
	return workers[num_of_proj - 1][index];
}
void Manager::delete_worker(int proj_num, int worker_id) {
	for (int i = 0; i < this->workers[proj_num - 1].size(); i++) {
		if (this->workers[proj_num - 1][i]->get_id() == worker_id) {
			workers[proj_num - 1].erase(workers[proj_num - 1].begin() + i);
		}
	}
}
void Manager::set_id(int id, Worker& emp) {						//встановлення id працівнику менеджером
	emp.set_id(id);
}
void Manager::delete_by_id(int worker_id) {						//пошук працівника по id в масиві працівників
	for (int i = 0; i < this->workers.size(); i++) {
		for (int j = 1; j <= this->workers[i].size(); j++) {
			if (this->workers[i][j - 1]->get_id() == worker_id) {
				/*delete this->workers[i][j - 1];*/
				workers[i].erase(workers[i].begin() + j - 1);
				return;
			}
		}
	}
}
void Manager::search_by_id(int worker_id) {						//пошук працівника по id в масиві працівників
	for (int i = 0; i < this->workers.size(); i++) {
		for (int j = 1; j <= this->workers[i].size(); j++) {
			if (this->workers[i][j - 1]->get_id() == worker_id) {
				this->workers[i][j - 1]->show_info();
				return;
			}
		}
	} 
}
void Manager::add_and_sort_id() {								//метод формування масиву id працівників і сортування його
	int size = 0;
	for (int i = 0; i < this->workers.size(); i++) { //перерахунок працівників в масиві
		for (vector<Worker*>::iterator j = this->workers[i].end(); j > this->workers[i].begin(); j--) {
			size++;
		}
	}
	int count = size;
	this->id_data = new int[count];
	for (int i = 0; i < this->workers.size(); i++) { //додавання id в масив
		for (int j = 1; j <= this->workers[i].size(); j++) {
			count--;
			this->id_data[count] = this->workers[i][j - 1]->get_id();
		}
	}
	sort(this->id_data, this->id_data + size); //сортування масиву
	cout << "Відсортовані значення: " << endl;
	for (int i = 0; i < size; i++) {
		cout << this->id_data[i] << endl;
	}
}
vector<string> Manager::show_info() {
	cout << "Інформація по менеджеру:" << endl;
	cout << "Ім'я: " << this->name << endl;
	cout << "Зарплата: " << this->salary << endl;
	cout << "ID: " << this->get_id() << endl;
	cout << "Досвід в роботі: " << this->exp_in_job << endl;
	return{ "dsdsd", "fdfsf" };
}
void Project::set_param(string name, string theme, int time, int id) {			//метод зміни назви і термінів проекту
	this->project_name = name;
	this->theme = theme;
	this->time_to_complete = time;
	this->id = id;
}
void Project::set_param(int price, int emp) {			//метод зміни ціни і id проекту
	this->price = price;
	this->number_of_emp = emp;
}
vector<string> Project::get_info() {				// метод отримання інформації проекту
	Project temp = Project(*this);
	vector<string> info;
	info.push_back(temp.project_name);
	info.push_back(temp.theme);
	info.push_back(to_string(temp.time_to_complete));
	info.push_back(to_string(temp.price));
	info.push_back(to_string(temp.id));
	info.push_back(to_string(temp.number_of_emp));
	return info;
}

void Customer<Project>::write_to_file() {							//метод запису даних проекту в файл
	try {
		ofstream write_project("project.txt", ios::trunc);
		if (!write_project.is_open()) {
			throw MyException("Помилка при відкритті файлу");
		}
		write_project << "Ім'я власника: " << this->name << "\n" << "Компанія: " << this->company << "\n" << "Ел. адреса: " << this->email << "\n" << "Бюджет: " << this->salary << endl;
		write_project << "ID власника: " << this->id << "\n";
		vector<string> info = this->get_project()->get_info();
		write_project << "Назва проекту: " << info[0] << "\n" << "Тематика: " << info[1] << "\n" << "Час на виконання: " << info[2] << "\n" << "Вартість проекту: " << info[3] << endl;
		write_project << "ID проекту: " << info[4] << "\n" << "Кількість працівників на проекті: " << info[5] << "\n";
		write_project.close();
	}
	catch (MyException& e) {
		cerr << "Знайдена помилка: " << e.what() << endl;
	}
}
void read_from_file(System::Windows::Forms::RichTextBox^ richTextBox) {			//метод зчитування даних проекту з файлу по ID власника
	try {
		ifstream proj_read("project.txt");
		if (!proj_read) {
			throw MyException("Помилка при відкритті файлу");
		}
		string line;
		while (getline(proj_read, line)) {
			string newLine = line + "\n";
			System::String^ newText = gcnew System::String(newLine.c_str());
			richTextBox->AppendText(newText);
		}
		proj_read.close();
	}
	catch (MyException& e) {
		cerr << "Знайдена помилка: " << e.what() << endl;
	}
}
void Worker::set_task(string task) {					//встановлення задачі працівнику
	this->task = task;
	this->has_a_task = true;
}
void Worker::set_premium(int prem) {
	this->premium = prem;
}
void Manager::set_premium(int prem) {
	this->premium = prem;
}
void Trainee::set_salary(int salary) {
	this->salary = salary;
}
string Worker::show_task() {								//вивід завдання працівника
	return this->task;
}
bool Worker::get_busy() {								//отримання даних про наявність завдання у працівника
	return has_a_task;
}
int Human::get_id() {									//отримання id об'єкту
	return id;
}
string Human::get_name() {
	return name;
}
int Human::get_salary() {
	return salary;
}
void Human::set_id(int id) {							//встановлення id об'єкту
	this->id = id;
}
void Human::show_message() {
	cout << "Клас наслідується від Human"<< endl;
	
}
string Trainee::get_job() {
	return job;
}
vector<string> Worker::show_info() {								//вивід інформації про працівника
	vector<string> info;
	info.push_back(this->name);
	info.push_back(this->get_job());
	info.push_back(to_string(this->salary)); 
	info.push_back(to_string(this->id));
	info.push_back(this->task);
	return info;
}
Worker::Worker() : Trainee("None", "None", 0){}     //конструктори для класів
Worker::Worker(Trainee& trainee){
	this->name = trainee.get_name();
	this->salary = trainee.get_salary();
	this->id = trainee.get_id();
	this->set_job(trainee.get_job());
}
void Trainee::set_job(string job) {
	this->job = job;
}
Manager::Manager() : Human("None", 0) {}
Customer<Project>::Customer() : Human("None", 0) {}
Human::Human(){}
Vacancy::Vacancy(){}
Trainee::Trainee() : Human("None", 0), Vacancy() {}
Project::Project(){}
Project::Project(const Project*& pattern) {
	this->project_name = pattern->project_name;
	this->time_to_complete = pattern->time_to_complete;
	this->price = pattern->price;
	this->id = pattern->id;
	this->number_of_emp = pattern->number_of_emp;
}
Trainee::~Trainee(void){												//деструктори для класів
	cout << "Знищення об'єкту для Trainee " << name << endl;
}
template <class Proj>
Customer<Proj>::~Customer(void) {
	cout << "Знищення об'єкту для Customer " << name << endl;
}
Manager::~Manager(void) {
	cout << "Знищення об'єкту для Manager " << name << endl;
}
Human::~Human(void) {
	cout << "Знищення об'єкту для Human " << name << endl;
}
Worker::~Worker(void) {
	cout << "Знищення об'єкту для Worker " << name << endl;
}
string Vacancy::company = "IBM";										//статичні поля класу Worker
string Vacancy::job = "IT";
string Vacancy::show_company() {
	return company;
}
string Vacancy::show_job() {
	return job;
}
void Trainee::set_internship_time(int time) {
	this->internship_time = time;
}
vector<string> Trainee::show_info() {
	vector<string> info;
	info.push_back(this->name);
	info.push_back(this->job);
	info.push_back(to_string(this->salary));
	info.push_back(to_string(this->id));
	info.push_back(to_string(this->internship_time));
	return info;
}
void Human::show_salary() {
	cout << "Зарплата "<< name << " : " << this->salary << endl;
}
void Worker::show_salary() {
	cout << "Зарплата працівника " << name << " з премією: " << this->salary << " + " << this->premium <<endl;
}
void Manager::show_salary() {
	cout << "Зарплата працівника " << name << " з премією: " << this->salary << " + " << this->premium << endl;
}
void count_salary_for_year(Worker emp) {						//перевантажені функції обчислення зарплати
	cout << "Зарплата вибраного робочого за рік: " << emp * 12 << endl;
}
void count_salary_for_year(Worker* emp) {
	cout << "Зарплата вибраного робочого за рік: " << (*emp) * 12 << endl;
}
Trainee& Trainee::operator++() {
	this->salary += 1000;
	return *this;
}
Trainee Trainee::operator++(int) {
	Trainee temp = *this;
	temp.salary += 1000;
	return temp;
}
Trainee& Trainee::operator--() {
	this->salary  -= 1000;
	return *this;
}
Trainee Trainee::operator--(int) {
	Trainee temp = *this;
	temp.salary -= 1000;
	return temp;
}
int Trainee::operator*(int n) {
	int year_salary = this->salary * n;
	return year_salary;
}