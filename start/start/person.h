#pragma once
#include"public_data.h"
	class person :public public_data
{
	private:
		int age;
		string phone_num;
		
	
	public:
		void set_age(int a);
		void set_phone(string  ph);
		
		int get_age();
		string get_phone();

 
};


