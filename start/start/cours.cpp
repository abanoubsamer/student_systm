#include "cours.h"


void cours::set_hour(int h)
{
	hour = h;
	
}

void cours::set_arr_student_id(int aar[5])
{
	for (int i = 0;i < sizeof(aar) / sizeof(aar[0]);i++)
		this->arr_student_id[i] = aar[i];
}

int cours::get_hour()
{
	return hour;
}

int* cours::get_arr_student_id()
{
	return arr_student_id;
}
