#include"repo.cpp"





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
public:
	int Add_student(ss student)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation==(y3ne hn3ml check 3la ale gylna)
	{
		
		     if(student.get_name().size() == 0 ||//hna a7na hnklm lw anta md5ltlo4 ay asm asln
				student.get_name().size() > 7 ||//hna a7na bnklm lw d5lt asm aktr mn 7 7rof
				student.get_name().size() < 5//hna a7na bnklm lw d5ltolh as a2l mn 5 7rof
				) {
	          		cout << " Invalid Name !" << endl;
		          }
		
           else if (student.get_age() >= 30 || //hna bnklm lw d5l rkm aktr mn 30 sna 
			 student.get_age() <= 18) {//we hna lw d5l rkm a2l mn 18 sana 
			 cout << " Invalid Age !" << endl;
		    }
		   else  if (student.get_phone()[0] != '0' ||student.get_phone()[1]!='1'||//hna ana msbt 01 3l4an kol arkam msr btbd2h bha y3ne lw arkm m4 awlh 01 kdh dh 8lt

			        (	         
					 (student.get_phone()[2])!=  '2' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 012
					 (student.get_phone()[2]) != '1' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 011
					 (student.get_phone()[2]) != '0' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 010
					 (student.get_phone()[2]) != '5'   //hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 015
					   || student.get_phone().size() !=11//hna ana bolh an lazm ykon al rakm mkwn mn 11 rkm
					)

		        )

		       {
			    cout << " Invalid Number !" << endl; 
		       }

		   else if(student.get_gpa()<0 || student.get_gpa() >=4)
			 {
				 cout << " Invalid Gpa !" << endl;
			 }
			
		else
			 {
				 return s1.add_student(student);
			 }



		return 0;

	
	
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

public:
	int addd_course(cours course)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		if (course.get_name().size() == 0 ||//hna a7na hnklm lw anta md5ltlo4 ay asm asln
			course.get_name().size() < 5//hna a7na bnklm lw d5ltolh asm a2l mn 5 7rof
			) {
			cout << " Invalid Name !" << endl;
		}
		else if(course.get_hour()<5|| course.get_hour() > 20)
		{
			cout << " Invalid Hour cours !" << endl;
		}
		else
      return c1.add_course(course);

		return 0;
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
	
public:
	int Add_techear(teacher techears)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		
		if ( techears.get_name().size() ==0 ||//hna a7na hnklm lw anta md5ltlo4 ay asm asln
			techears.get_name().size() > 10 ||//hna a7na bnklm lw d5lt asm aktr mn 7 7rof
			techears.get_name().size() < 5    //hna a7na bnklm lw d5ltolh as a2l mn 5 7rof
		   ) 
		{
			cout << " Invalid Name !" << endl;
			cout << techears.get_name()  << endl;
		}

		else if (techears.get_age() >= 60 || //hna bnklm lw d5l rkm aktr mn 60 sna    
			techears.get_age() <= 24) {//we hna lw d5l rkm a2l mn 24 sana 
			cout << " Invalid Age !" << endl;
		}
		else  if (techears.get_phone()[0] != '0' || techears.get_phone()[1] != '1' ||//hna ana msbt 01 3l4an kol arkam msr btbd2h bha y3ne lw arkm m4 awlh 01 kdh dh 8lt

			(
				(techears.get_phone()[2]) != '2' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 012
				(techears.get_phone()[2]) != '1' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 011
				(techears.get_phone()[2]) != '0' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 010
				(techears.get_phone()[2]) != '5'   //hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 015
				|| techears.get_phone().size() != 11//hna ana bolh an lazm ykon al rakm mkwn mn 11 rkm
				)

			)

		{
			cout << " Invalid Number !" << endl;
		}

		else if (techears.get_saleary()<5000 || techears.get_saleary()>15000)//hna bnklm an lw ratb al thechear mykon4 a2l mn 5000 wla aktr mn 15000
		{
			cout << " Invalid Saleary !" << endl;
		}


		else
		{
         return t1.add_teacher(techears);
		}
		


		return 0;

	}



};