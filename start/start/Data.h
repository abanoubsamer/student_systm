#pragma once
#include"ss.h"

class Data
{
	public:
	
	static	ss Student[25];
	static	int index_Student;
	static	int id_student;

	static	cours  coursess[25];
	static	int id_coursess;
	static int index_coursess;

	static	teacher  theachers[25];
	static	int index_teacher;
	static	int id_teacher;


};

ss  Data::Student[25];
int  Data::index_Student = 0;
int Data::id_student = 0;

int Data::id_coursess = 0;
cours Data::coursess[25];
int  Data::index_coursess = 0;


int  Data::index_teacher = 0;
teacher Data::theachers[25];
int Data::id_teacher = 0;


