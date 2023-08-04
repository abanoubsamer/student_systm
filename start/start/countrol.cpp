#include"Sarves.cpp"



////////////////////////////       student      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//  student_countrol
class student_countol {
private:
	student_sarves_imp  s2;
	ss student;
	Data d5;
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
			cout << "\t\tId\t\tName\t\tAge\t\tPhoneNumber\t\tGpa" << endl;
			cout << "\t\t" << student.get_id() << "\t\t" << student.get_name() << "\t" << student.get_age() << "\t\t" << student.get_phone() << "\t\t" << student.get_gpa() << endl;
			
		}
		else
		{
			cout << "invaled id [" << id << "]" << endl;
			
		
		
		}
		
	}
};
/////////////////////////////    course   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//  course_countrol
class course_countrol
{
private:
	course_sarves_imp c1;

public:
	int addd_course_countol(cours course)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{

	return	c1.addd_course_sarves(course);


	}



};
/////////////////////////////    teacher    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
///  teacher_countorl


class techear_countrol 
{
private:

	techear_sarves_imp t1;

public:
	int add_techear_control(teacher techears)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		return t1.Add_techear_sarves(techears);

	}



};