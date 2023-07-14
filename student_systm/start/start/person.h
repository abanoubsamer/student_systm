#pragma once
#include<iostream>
#include<string>
using namespace std;
class person
{
protected:
	int age;
	string name;
	string phone_num;
	int id;
public:
virtual	void set_id(int i)=0;
virtual	void set_age(int a) = 0;
virtual	void set_phone(string ph) = 0;
virtual	void set_name(string n) = 0;

virtual	int get_id() = 0;
virtual	int get_age() = 0;
virtual	string get_phone() = 0;
virtual	string get_name() = 0;


};

