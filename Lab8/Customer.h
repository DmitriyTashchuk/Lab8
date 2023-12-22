#pragma once
#include <string>
#include <vector>
#include "Human.h"
#include "Project.h"
using namespace std;
//клас Замовника
template <class Proj>
class Customer : virtual public Human {
public:
	Customer();
	Customer(string name, int human_salary) : Human(name, human_salary) {}
	Proj* get_project();
	void create_project();
	void add_cust_info(string company, string email);
	void set_proj_param(string name, string theme, int time, int id);
	void set_proj_param(int price, int emp);
	string get_company();
	string get_email();
	vector<string> show_info();
	void write_to_file();
	~Customer(void);
private:
	string company;
	string email;
	Proj new_project;
};
void read_from_file(System::Windows::Forms::RichTextBox^ richTextBox);