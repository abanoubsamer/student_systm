#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "person.h"
class teacher :public person
{
private:
	string speciales;
	double saleary;
public:
	void set_id(int i);
	void set_age(int a);
	void set_phone(string ph);
	void set_name(string n) ;
	void set_speciales(string sp);
	void set_saleary(double s);
	int get_id();
	int get_age() ;
	string get_phone();
	string get_name();
};

