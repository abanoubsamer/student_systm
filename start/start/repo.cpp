 #include"Data.h"




                                /////////////////////////////       student      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								// interface student_prository
class student_prository {
public:
	virtual int add_student(ss student)=0;
	virtual ss show_student_by_id(int id) = 0;
	virtual int edit_student(ss student) = 0;
	virtual int remove_student(int id) = 0;
	virtual void show_all_student() = 0;

	
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

	int edit_student(ss student )
	{
		int index = 0;
		int i;
		for (i = 0; i < d1.index_Student; i++)
		{
			if (d1.Student[i].get_id() == student.get_id())
			{
				d1.Student[i] = student;
				index = 1;
				
			}
			
		}
	       return index;
	 }

	int remove_student(int id)
	{
		int index = 0;
		int i;
		for (i = 0; i < d1.index_Student; i++)
		{
			if (d1.Student[i].get_id() == id)
			{
				for (int j = i; j < d1.index_Student - 1; j++)
				{
					d1.Student[j] = d1.Student[j + 1];
				}
				d1.index_Student--	;  // Reduce the total count of students
				index = 1;  // Indicate that the student was found and removed
				break;
					
			}

		}
		return index;
	}

	void show_all_student()
	{
		int i;
		cout << "\t\tId\t\tName\t\tAge\t\tPhoneNumber\t\tGpa\t\tSpeciales" << endl;
		for (i = 1; i < d1.index_Student; i++) //hna hwa hy3od ylf l7d a5er al index ale anta 3mloh bs -1
		{
			cout << "\t\t" << d1.Student[i].get_id() << "\t\t" << d1.Student[i].get_name() << "\t" << d1.Student[i].get_age() << "\t\t" << d1.Student[i].get_phone() << "\t\t" << d1.Student[i].get_gpa() << "\t\t" << d1.Student[i].get_speciales() << endl;
			
		}
	}
	


};




								/////////////////////////////    course   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								// interface course_prository
class course_prository {
public:
	virtual int add_course(cours course) = 0;
	virtual cours show_cours_by_id(int id) = 0;
	virtual int edit_course(cours course) = 0;
	virtual int remove_course(int id) = 0;
	virtual void show_all_course() = 0;
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
			course.set_id(d2.id_coursess++);
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

	int edit_course(cours course)
	{
		int index = 0;
		int i;
		for (i = 0; i < d2.index_coursess; i++)
		{
			if (d2.coursess[i].get_id() == course.get_id())
			{
				d2.coursess[i] = course;
				index = 1;

			}

		}
		return index;
	}

	int remove_course(int id)
	{
		int index = 0;
		int i;
		for (i = 0; i < d2.index_coursess; i++)
		{
			if (d2.coursess[i].get_id() == id)
			{
				for (int j = i; j < d2.index_coursess - 1; j++)
				{
					d2.coursess[j] = d2.coursess[j + 1];
				}
				d2.index_coursess--;  // Reduce the total count of students
				index = 1;  // Indicate that the student was found and removed
				break;

			}

		}
		return index;
	}

	void show_all_course()
	{
		int i;
		cout << "\t\tId\t\tName\t\tHour" << endl;
		for (i = 1; i < d2.index_coursess; i++) //hna hwa hy3od ylf l7d a5er al index ale anta 3mloh bs -1
		{
			cout << "\t\t" << d2.coursess[i].get_id() << "\t\t" << d2.coursess[i].get_name() << "\t\t" << d2.coursess[i].get_hour() << endl;

		}
	}



};


								/////////////////////////////    teacher    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
								/// interface teacher_prository
class teacher_prository {
public:
	virtual int add_teacher(teacher tech) = 0;
	virtual teacher show_teacher_by_id(int id) = 0;
	virtual int edit_teacher(teacher tech) = 0;
	virtual int remove_teacher(int id) = 0;
	virtual void show_all_teacher() = 0;
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
			tech.set_id(d3.id_teacher++);
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

	int edit_teacher(teacher tech)
	{
		int index = 0;
		int i;
		for (i = 0; i < d3.index_teacher; i++)
		{
			if (d3.theachers[i].get_id() == tech.get_id())
			{
				d3.theachers[i] = tech;
				index = 1;

			}

		}
		return index;
	}

	int remove_teacher(int id)
	{
		int index = 0;
		int i;
		for (i = 0; i < d3.index_teacher; i++)
		{
			if (d3.theachers[i].get_id() == id)
			{
				for (int j = i; j < d3.index_teacher - 1; j++)
				{
					d3.theachers[j] = d3.theachers[j + 1];
				}
				d3.index_teacher--;  // Reduce the total count of students
				index = 1;  // Indicate that the student was found and removed
				break;

			}

		}
		return index;
	}

	void show_all_teacher()
	{
		int i;
		cout << "\t\tId\t\tName\t\tAge\t\tPhoneNumber\t\tSaleary" << endl;
		for (i = 1; i < d3.index_teacher; i++) //hna hwa hy3od ylf l7d a5er al index ale anta 3mloh bs -1
		{
			cout << "\t\t" << d3.theachers[i].get_id() << "\t\t" << d3.theachers[i].get_name() << "\t" << d3.theachers[i].get_age() << "\t\t" << d3.theachers[i].get_phone() << "\t\t" << d3.theachers[i].get_saleary() << endl;

		}
	}
	


};


