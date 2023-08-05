#include"repo.cpp"





/////////////////////////////       hna b3ml cheak 3la data ale gya ly  student       \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class validation_student
{
public:
	int validation_new_student(ss student)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation==(y3ne hn3ml check 3la ale gylna)
	{

		if (student.get_name().size() == 0 ||//hna a7na hnklm lw anta md5ltlo4 ay asm asln
			student.get_name().size() > 11 ||//hna a7na bnklm lw d5lt asm aktr mn 7 7rof
			student.get_name().size() < 5//hna a7na bnklm lw d5ltolh as a2l mn 5 7rof
			) {
			cout << " Invalid Name !" << endl;
		}

		else if (student.get_age() >= 30 || //hna bnklm lw d5l rkm aktr mn 30 sna 
			student.get_age() <= 18) {//we hna lw d5l rkm a2l mn 18 sana 
			cout << " Invalid Age !" << endl;
		    }
		else  if (student.get_phone()[0] != '0' || student.get_phone()[1] != '1' ||//hna ana msbt 01 3l4an kol arkam msr btbd2h bha y3ne lw arkm m4 awlh 01 kdh dh 8lt

			(
				(student.get_phone()[2]) != '2' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 012
				(student.get_phone()[2]) != '1' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 011
				(student.get_phone()[2]) != '0' &&//hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 010
				(student.get_phone()[2]) != '5'   //hna b3d makd an al rkm awlh 01 yro7 y4of b3dh 2 kdh dh 015
				|| student.get_phone().size() != 11//hna ana bolh an lazm ykon al rakm mkwn mn 11 rkm
				)

			)

			
		{
			cout << " Invalid Number !" << endl;
		}
		else if (student.get_level()>4|| student.get_level() == 0)
		{
			cout << " Invalid Level !" << endl;

		}
		else if (student.get_level()>2 && student.get_speciales() != "acconting" && student.get_speciales() != "business" && student.get_speciales() != "mis")
			{
				cout << " Invalid Speciales !" << endl;
			}
			

	

		else if (student.get_gpa() < 0 || student.get_gpa() >= 4)
		{
			cout << " Invalid Gpa !" << endl;
		}

		else
		{
			return 1;// hna lw md5lt4 fe wla if statment htrg3 (1)
		}

		return 0;//hna m3nha lw d5lt fe ay if statment httl3h we m4 htd5l fe al tnya we htrg3 (0)



	}




};

/////////////////////////////       hna b3ml cheak 3la data ale gya ly  course      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class validation_courses
{
public:
	int validationcourse(cours course)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{
		if (course.get_name().size() == 0 ||//hna a7na hnklm lw anta md5ltlo4 ay asm asln
			course.get_name().size() < 5//hna a7na bnklm lw d5ltolh asm a2l mn 5 7rof
			) {
			cout << " Invalid Name !" << endl;
		}
		else if (course.get_hour() < 5 || course.get_hour() > 20)
		{
			cout << " Invalid Hour cours !" << endl;
		}
		else
			return 1;

		return 0;
	}

};

/////////////////////////////       hna b3ml cheak 3la data ale gya ly  techear      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class validation_techear
{
public:
	int validationtechear(teacher techears)//hna a7na ndna al fun bta3t al prository 3l4an hn3ml validation
	{

		if (techears.get_name().size() == 0 ||//hna a7na hnklm lw anta md5ltlo4 ay asm asln
			techears.get_name().size() > 11 ||//hna a7na bnklm lw d5lt asm aktr mn 7 7rof
			techears.get_name().size() < 5    //hna a7na bnklm lw d5ltolh as a2l mn 5 7rof
			)
		{
			cout << " Invalid Name !" << endl;
			
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
		else if (techears.get_speciales() != "acconting" && techears.get_speciales() != "business" && techears.get_speciales() != "mis")
		{
			cout << " Invalid Speciales !" << endl;
		}

		else if (techears.get_saleary() < 5000 || techears.get_saleary() > 15000)//hna bnklm an lw ratb al thechear mykon4 a2l mn 5000 wla aktr mn 15000
		{
			cout << " Invalid Saleary !" << endl;
		}


		else
		{
			return 1;
		}



		return 0;

	}


};

/////////////////////////////       hna deh class gwah fun 3l4an t3ml clean code ly serves      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class validation_sarves
{
public:
	void full_data(string type)
	{
		cout << "FULL Area Of "<<type<<"!" << endl;
	}
	void no_exist(string type, int id)
	{
		cout <<type<< " Wiht Id [" << id << "] Not Exist" << endl;
	}

};


