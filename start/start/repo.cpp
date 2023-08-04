 #include"Data.h"




                                /////////////////////////////       student      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								// interface student_prository
class student_prository {
public:
	virtual int add_student(ss student)=0;
	virtual ss show_student_by_id(int id) = 0;
	
};
//class student_prository imp


class student_prository_imp :public student_prository
{
private:
	Data  d1;
	  ss invalid;
public:
	 int add_student(ss student)
	{

		if (d1.index_Student > 24)
		{
			return 0;
		}
		else
		{
			student.set_id(d1.id_student++);
			d1.Student[d1.index_Student++] = student;
			
		   
		}
		return student.get_id();
	}

	ss show_student_by_id(int id)
	{


		int i;
		for (i = 0; i < d1.index_Student; i++) //hna hwa hy3od ylf l7d a5er al index ale anta 3mloh bs -1
		{
			
			if (d1.Student[i].get_id() == id) // hna hwa hy3od cheak 3la an id ale anta b3toh hwa hwa id bta3 al stident[i]
			{
				return d1.Student[i];
	     		
			}
			
		}
		invalid.set_id(0);
		return invalid;

		
	}

};




								/////////////////////////////    course   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								// interface course_prository
class course_prository {
public:
	virtual int add_course(cours course) = 0;
	virtual cours show_cours_by_id(int id) = 0;

};
//class course_prository imp
class course_prository_imp :public course_prository
{
private:
	Data d2;
	cours invalid;
public:
	int add_course(cours course)
	{
		if (d2.index_coursess > 24)
		{
			return 0;
		}
		else
		{
			course.set_id(++d2.id_coursess);
			d2.coursess[d2.index_coursess++] = course;
			
		}
		return course.get_id();
	}
	cours show_cours_by_id(int id)
	{
		int i;
		for (i = 0; i < d2.index_coursess; i++) //hna hwa hy3od ylf l7d a5er al index ale anta 3mloh bs -1
		{
			if (d2.coursess[i].get_id() == id)// hna hwa hy3od cheak 3la an id ale anta b3toh hwa hwa id bta3 al stident[i]
			{
				return d2.coursess[i];
			}
			
			
				
			
		}
              invalid.set_id(0);
				return invalid;

	}

};


								/////////////////////////////    teacher    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								/// interface teacher_prository
class teacher_prository {
public:
	virtual int add_teacher(teacher tech) = 0;
	virtual teacher show_teacher_by_id(int id) = 0;
};
//class teacher_prository imp
class teacher_prository_imp :public teacher_prository
{
private:
	Data d3;
	teacher invalid;
public:
	int add_teacher(teacher tech)
	{
		if (d3.index_teacher > 24)
		{
			cout << "the area of teachers is full\n";
		}
		else
		{
			tech.set_id(++d3.id_teacher);
			d3.theachers[d3.index_teacher++] = tech;
			
		}
		return tech.get_id();
	}

	teacher show_teacher_by_id(int id)
	{
		int i;
		for (i = 0; i < d3.index_teacher; i++) //hna hwa hy3od ylf l7d a5er al index ale anta 3mloh bs -1
		{
			if (d3.theachers[i].get_id() == id)// hna hwa hy3od cheak 3la an id ale anta b3toh hwa hwa id bta3 al stident[i]
			{
				return d3.theachers[i];
			}
		
			
				
			
		}
                 invalid.set_id(0);
				return invalid;

	}
};


