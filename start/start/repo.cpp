#include"Data.h"



                                /////////////////////////////       student      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								// interface student_prository
class student_prository {
public:
	virtual int add_student(ss student)=0;
};
//class student_prository imp


class student_prository_imp :public student_prository
{
private:
	Data data;
public:
	int add_student(ss student)
	{
		if (data.index_Student > 24)
		{
			return 0;
		}
		else
		{
			student.set_id(++data.id_student);
		   data.Student[data.index_Student++] = student;
		   
		}
		return student.get_id();
	}

	

};


								/////////////////////////////    course   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								// interface course_prository
class course_prository {
public:
	virtual int add_course(cours course) = 0;
};
//class course_prository imp
class course_prository_imp :public course_prository
{
private:
	Data data;
public:
	int add_course(cours course)
	{
		if (data.index_coursess > 24)
		{
			return 0;
		}
		else
		{
			course.set_id(++data.id_coursess);
			data.coursess[data.index_coursess++] = course;
			
		}
		return course.get_id();
	}


};


								/////////////////////////////    teacher    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								/// interface teacher_prository
class teacher_prository {
public:
	virtual int add_teacher(teacher tech) = 0;
};
//class teacher_prository imp
class teacher_prository_imp :public teacher_prository
{
private:
	Data data;
		public:
	int add_teacher(teacher tech)
	{
		if (data.index_teacher > 24)
		{
			cout << "the area of teachers is full\n";
		}
		else
		{
			tech.set_id(++data.id_teacher);
			data.theachers[data.index_teacher++] = tech;
			
		}
		return tech.get_id();
	}
};


