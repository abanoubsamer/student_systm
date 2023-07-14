#pragma once
#include<iostream>
#include<string>
#include"person.h"
#include"teacher.h"
using namespace std;
class student :public person
{
private:
	int level;
	float gpa;
	string speciales;
	teacher arr[5];
	
	
public:
	void set_id(int i);
	void set_age(int a);
	void set_gpa(float gp);
	void set_phone(string ph);
	void set_name(string n);
	void set_level(int l);
	void set_speciales(string sp);
	void set_teacher(teacher a[5]);

	int get_id();
	int get_age();
	float get_gpa();
	string get_phone();
	string get_name();
	int set_level( );
	string set_speciales( );
};

