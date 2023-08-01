#include"validation.cpp"





////////////////////////////       student      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface student_sarves
class student_sarves {
public:
	virtual int Add_student(ss student) = 0;
};
//class student_sarves imp
class student_sarves_imp :public student_sarves
{ 
private:
	student_prository_imp s1;
	validation_student v1;
public:
	int Add_student(ss student)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation==(y3ne hn3ml check 3la ale gylna)
	{
		if(!v1.validation_new_student(student))//hna deh fun bt3ml validation 3la bynat al talb
			
		    return 0;
			
		else
			 {
				 return s1.add_student(student);
			 }
	
	}

	

};

/////////////////////////////    course   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface course_sarves
class course_sarves {
public:
	virtual int addd_course(cours course) = 0;
};
//class course_sarves imp
class course_sarves_imp :public course_sarves
{
private:
	course_prository_imp c1;
	validation_courses v1;

public:
	int addd_course(cours course)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		if (!v1.validationcourse(course))
			return 0;
		else
      return c1.add_course(course);

		
	}



};


/////////////////////////////    teacher    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
/// interface teacher_sarves
class techear_sarves {
public:
	virtual int Add_techear(teacher techears) = 0;
};
//class teacher_sarves imp
class techear_sarves_imp :public techear_sarves
{
private:

	teacher_prository_imp t1;
	validation_techear v1;
	
public:
	int Add_techear(teacher techears)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		
		if (!v1.validationtechear(techears))
			return 0;
		else
		{
         return t1.add_teacher(techears);
		}
		


	}



};