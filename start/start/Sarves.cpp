#include"validation.cpp"



  ////////////////////////////       student      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
 // interface student_sarves
class student_sarves {
public:
	virtual int Add_student_serves(ss student) = 0;
	virtual ss show_student_sarves(int id) = 0;
	virtual void edit_student_sarves(ss student) = 0;
};
//class student_sarves imp
class student_sarves_imp :public student_sarves
{ 
private:
	student_prository_imp s1;
	ss student;
	validation_student v1;
	validation_sarves vs1;
public:
	int Add_student_serves(ss student)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation==(y3ne hn3ml check 3la ale gylna)
	{
		if (v1.validation_new_student(student))//hna deh fun bt3ml 1 y3ne b3tt true
		{
			int id = s1.add_student(student);
			if (!id)
				vs1.full_data("Student");
       else
			 {
				return id;
			 }
			
		}
		    
			
	         return 0;//hna m3anha anha md5lt4 fe wal if statment
	}
	ss show_student_sarves(int id)
	{
		student = s1.show_student_by_id(id);
		if (student.get_id()==0)
		{
			vs1.no_exist("Student", id);
			
		}
		
			return student;
		

	}
	
	void edit_student_sarves(ss student)
	{
		if (v1.validation_new_student(student))
		{
			int index = s1.edit_student(student);
			if (!index)
			{
				vs1.no_exist("Student", student.get_id());
			}
			else
				cout << "Sucess Edit Student With Id [" << student.get_id() << "]" << endl;

		}
		
	}

};

/////////////////////////////    course   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface course_sarves
class course_sarves {
public:
	virtual int addd_course_sarves(cours course) = 0;
	virtual cours show_course_sarves(int id) = 0;
	virtual void edit_course_sarves(cours course) = 0;
};
//class course_sarves imp
class course_sarves_imp :public course_sarves
{
private:
	course_prository_imp c1;
	cours cours1;
	validation_courses v1;
	validation_sarves vs1;

public:
	int addd_course_sarves(cours course)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		if (v1.validationcourse(course))
		{
			int id = c1.add_course(course);
			if (!id)
			{
				vs1.full_data("Course");
			}
			else
			{
				return id;
			}

		}
			

		return 0;
	}
	cours show_course_sarves(int id)
	{
		cours1 = c1.show_cours_by_id(id);
		if (cours1.get_id() == 0)
		{
			vs1.no_exist("Course", id);


		}
		
		
			return cours1;
		

	}

	void edit_course_sarves(cours course)
	{
		if (v1.validationcourse(course))
		{
			int index = c1.edit_course(course);
			if (!index)
			{
				vs1.no_exist("Course", course.get_id());
			}
			else
				cout << "Sucess Edit Course With Id [" << course.get_id() << "]" << endl;

		}
		
	}


};


/////////////////////////////    teacher    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
/// interface teacher_sarves
class techear_sarves {
public:
	virtual int Add_techear_sarves(teacher techears) = 0;
	virtual teacher show_techear_sarves(int id) = 0;
	virtual void edit_techear_sarves(teacher techears) = 0;
};
//class teacher_sarves imp
class techear_sarves_imp :public techear_sarves
{
private:
	teacher teach1;
	teacher_prository_imp t1;
	validation_techear v1;
	validation_sarves vs1;
	
public:
	int Add_techear_sarves(teacher techears)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		
		if (v1.validationtechear(techears))
		{
			int id = t1.add_teacher(techears);
			if (!id)
			{
				vs1.full_data("Techaer");
			}
			else
			{
				return id;
			}

		}


		return 0;
	}

	teacher show_techear_sarves(int id)
	{
		teach1 = t1.show_teacher_by_id(id);
		if (teach1.get_id() == 0)
		{
		
			vs1.no_exist("Techaer", id);

		}
		
			return teach1;
		

	}

	void edit_techear_sarves(teacher techears)
	{
		if (v1.validationtechear(techears))
		{
			int index = t1.edit_teacher(techears);
			if (!index)
			{
				vs1.no_exist("Techaer", techears.get_id());
			}
			else
				cout << "Sucess Edit Techaer With Id [" << techears.get_id() << "]" << endl;
		}
		
	}

};