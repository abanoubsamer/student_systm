#pragma once
#include "person.h"
class teacher :public person
{
private:
	string speciales;
	double saleary;
	int student_id[5];
	
public:

	void set_speciales(string sp);
	void set_saleary(double s);
	void set_student_id(int s_id[]);
	int* get_student_id();
	string get_phone();
	string get_name();
	double get_saleary();
};
