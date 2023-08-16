#include"Sarves.cpp"



////////////////////////////       student      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//  student_countrol
class student_countol {
private:
	student_sarves_imp  s2;
	ss student;
public:
	int add_student_control(ss student)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		
		return s2.Add_student_serves(student);


	}

	void show_student_by_id_control(int id)
	{
		student=s2.show_student_sarves(id);
		if (student.get_id())
		{
			
			
				cout << "\t\tId\t\tName\t\tAge\t\tPhoneNumber\t\tGpa\t\tSpeciales" << endl;
				cout << "\t\t" << student.get_id() << "\t\t" << student.get_name() << "\t" << student.get_age() << "\t\t" << student.get_phone() << "\t\t" << student.get_gpa() << "\t\t" << student.get_speciales() << endl;
		
			

		}
		
		
	}

	void edit_student_control(ss student)
	{
		s2.edit_student_sarves(student);
	}

	void remove_student_control(int id)
	{
		s2.remove_student_sarves(id);
	}

	void show_all_student_control()
	{
		s2.show_all_student_sarves();
	}

};
/////////////////////////////    course   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//  course_countrol
class course_countrol
{
private:
	course_sarves_imp c1;
	cours c2;

public:
	int addd_course_countol(cours course)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{

	return	c1.addd_course_sarves(course);


	}

	void show_course_by_id_control(int id)
	{
		c2 = c1.show_course_sarves(id);
		if (c2.get_id())
		{
			cout << "\t\tId\t\tName\t\tHour" << endl;
			cout << "\t\t" << c2.get_id() << "\t\t" << c2.get_name() << "\t\t" << c2.get_hour() << endl;

		}
		else
		{
			cout << "invaled id [" << id << "]" << endl;


		}

	}

	void edit_course_control(cours course)
	{
		c1.edit_course_sarves(course);
	}

	void remove_course_control(int id)
	{
		c1.remove_course_sarves(id);
	}

	void show_all_course_control()
	{
		c1.show_all_course_sarves();
	}

};
/////////////////////////////    teacher    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
///  teacher_countorl


class techear_countrol 
{
private:
	teacher t2;
	techear_sarves_imp t1;

public:
	int add_techear_control(teacher techears)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		return t1.Add_techear_sarves(techears);

	}

	void show_techear_by_id_control(int id)
	{
		t2 = t1.show_techear_sarves(id);
		if (t2.get_id())
		{
			cout << "\t\tId\t\tName\t\tAge\t\tPhoneNumber\t\tSaleary" << endl;
			cout << "\t\t" << t2.get_id() << "\t\t" << t2.get_name() << "\t" << t2.get_age() << "\t\t" << t2.get_phone() << "\t\t" << t2.get_saleary() << endl;

		}
		else
		{
			cout << "invaled id [" << id << "]" << endl;



		}

	}

	void edit_techear_control(teacher techears)
	{
		t1.edit_techear_sarves(techears);
	}

	void remove_techear_control(int id)
	{
		t1.remove_techear_sarves(id);
	}

	void show_all_techear_control()
	{
		t1.show_all_techear_sarves();
	}
	
};