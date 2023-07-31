#pragma once
#include <iostream>
#include<string>
using namespace std;
class public_data
{
private:
	int id;
	string name;
public:

	void set_id(int i);
	void set_name(string n);

	int get_id();
	string get_name();


};

