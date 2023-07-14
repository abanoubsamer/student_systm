#include "D:\programing c++\student_systm\start\start\student.h"
void student::set_id(int i)
{
	id=i;
}

void student::set_age(int a)
{
	age = a;
}

void student::set_gpa(float gp)
{
	gpa = gp;
}

void student::set_phone(string ph)
{
	phone_num = ph;
}

void student::set_name(string n)
{
	name = n;
}

void student::set_level(int l)
{
	level = l;
}

void student::set_speciales(string sp)
{
	speciales = sp;
}

void student::set_teacher(teacher arr[5])
{
	for (int i = 1;i < 5;i++)
		arr[i] = arr[i];
}

int student::get_id()
{
	return id;
}

int student::get_age()
{
	return age;
}

float student::get_gpa()
{
	return gpa;
}

string student::get_phone()
{
	return string(phone_num);
}

string student::get_name()
{
	return string(name);
}

int student::set_level()
{
	return level;
}

string student::set_speciales()
{
	return string(speciales);
}
