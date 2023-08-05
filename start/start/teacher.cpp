#include "teacher.h"
void teacher::set_speciales(string sp)
{
	speciales = sp;
}

void teacher::set_saleary(double s)
{
	saleary = s;
}
void teacher::set_student_id(int s_id[])
{
	for (int i = 0;i < sizeof(s_id) /sizeof(s_id[0]);i++)
		this-> student_id[i] = s_id[i];
}
int* teacher::get_student_id()
{
	return student_id;
}



double teacher::get_saleary()
{
	return saleary;
}

string teacher::get_speciales()
{
	return speciales;
}
