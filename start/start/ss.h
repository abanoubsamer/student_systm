#pragma once


#include"teacher.h"
#include"cours.h"
class ss :public person
{
private:
	int level;
	float gpa;
	string speciales;


	teacher arr[5];//hna a7na 3mlna array ly teacher 3l4an lkol student 5 teacher
	cours arr_cours[5]; //hna a7na 3mlna array ly al cours lkol student ly 5 courss


public:

	void set_gpa(float gp);
	void set_level(int l);
	void set_speciales(string sp);
	void set_teacher(teacher a[5]);
	void set_teacher(cours arr_c [5]);
	float get_gpa();
	int get_level();
	string get_speciales();
	teacher *get_techear();
    cours* get_courses();
};


