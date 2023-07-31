#include "person.h"


void person::set_age(int a)
{
	age = a;
}

void person::set_phone(string ph)
{
	phone_num = ph;
}




int person::get_age()
{
	return age;
}



string person::get_phone()
{
	return string(phone_num);
}

