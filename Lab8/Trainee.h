#pragma once
#include <string>
#include <vector>
#include "Human.h"
#include "Vacancy.h"
using namespace std;
//���� �������
class Trainee : virtual public Human, public Vacancy {
public:
	Trainee();
	Trainee(string name, string job, int human_salary) : Human(name, human_salary), job(job) {}
	void set_internship_time(int time);
	void set_salary(int salary);
	string get_job();
	void set_job(string job);
	vector<string> show_info();
	Trainee& operator++();
	Trainee operator++(int);
	Trainee& operator--();
	Trainee operator--(int);
	int operator*(int n);
	~Trainee(void);
private:
	int internship_time = 0;
	string job;
};
