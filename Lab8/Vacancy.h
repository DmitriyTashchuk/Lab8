#pragma once
#include <string>
#include <vector>
using namespace std;
//���� ������
class Vacancy {
public:
	Vacancy();
	static string show_company();
	static string show_job();
private:
	static string job;
	static string company;
};
