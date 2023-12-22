#pragma once
#include <string>
#include <vector>
using namespace std;
//клас Проекту
class Project {
public:
	Project();
	Project(const Project*& pattern);
	vector<string> get_info();
	void set_param(string name,string theme, int time, int id);
	void set_param(int price, int emp);
private:
	string project_name;
	string theme;
	int time_to_complete;
	int price = 0;
	int id = 0;
	int number_of_emp = 0;
};