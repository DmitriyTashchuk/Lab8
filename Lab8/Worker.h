#pragma once
#include <string>
#include <vector>
#include "Trainee.h"
using namespace std;
//клас Працівника
class Worker : public Trainee {
public:
	Worker();
	Worker(string name, int human_salary, string job) : Trainee(name, job, human_salary) {}		//конструктор з параметрами
	Worker(Trainee& trainee);
	string show_task();
	void set_task(string task);
	void set_premium(int prem);
	bool get_busy();
	vector<string> show_info();
	void show_salary();
	using Human::show_message;
	~Worker(void);
private:
	int premium = 0;
	string task;
	bool has_a_task = false;;
};
void count_salary_for_year(Worker* emp);
void count_salary_for_year(Worker emp);
