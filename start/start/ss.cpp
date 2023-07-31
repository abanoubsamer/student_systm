#include "ss.h"
void ss::set_gpa(float gp)
{
	gpa = gp;
}


void ss::set_level(int l)
{
	level = l;
}

void ss::set_speciales(string sp)
{
	speciales = sp;

}

void ss::set_teacher(teacher a[5])//t1,t2,t3,t4,t5
{
	for (int i = 0;i < sizeof(a) / sizeof(a[0]);i++)//hna a7na 7tna funtion sizeof btrg3 al size bta3 al array
	 this-> arr[i] = a[i];
}

void ss::set_teacher(cours arr_co[5])
{
	for (int i = 0;i < sizeof(arr_co) / sizeof(arr_co[0]);i++)//hna a7na 7tna funtion sizeof btrg3 al size bta3 al array
	this->arr_cours[i] = arr_co[i];

}


float ss::get_gpa()
{ 
	return gpa;
}


int ss::get_level()
{
	return level;
}

string ss::get_speciales()
{
	return string(speciales);
}

teacher* ss::get_techear()
{
	return arr;
}

cours* ss::get_courses()
{
	return arr_cours;
}
