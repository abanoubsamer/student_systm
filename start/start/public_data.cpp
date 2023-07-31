#include "public_data.h"
void public_data::set_id(int i)
{
	id = i;
}
void public_data::set_name(string n)
{
	name = n;
}
int public_data::get_id()
{
	return id;
}string public_data::get_name()
{
	return string(name);
}