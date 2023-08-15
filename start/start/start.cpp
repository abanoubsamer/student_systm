// start.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include"countrol.cpp"


int id;
int process;
void display();
void showlist(string value);
void add_new_student();
void add_new_course();
void add_new_techear();
void switch_student();
void switch_course();
void switch_techear();
void show_process();
void Show_Student_id();
void Show_cours_id();
void Show_techear_id();
ss Enter_Data_student();
cours Enter_Data_cours();
teacher Enter_Data_techear();
void update_Data_student();
void update_Data_cours();
void update_Data_techear();



int main()
{

    int exit = 0;
   
    while (true)
    {
         display();
        //cout << " 1 - Add Course"  << "\t\t\t" << " 6 - Remove Course" << endl;
        cin >> process;
        switch (process)
        {
        case 1:
             showlist("Student");
             cin >> process;
             switch_student();
             
            break;
        case 2:
            showlist("Teacher");
            cin >> process;
            switch_techear();

            break;
        case 3:
            showlist("Course");
            cin >> process;
            switch_course();

            break;
        case 4:
            cout << "Process Exit" << endl;
            exit = 1;
            break;
        default:
            cout << "Invaled Choose" << endl;
            break;
        }
        if (exit == 1)
            break;
    }
    
  

}

////////////////// show list the main list system \\\\\\\\\\\\\\\\\

void display()
{
    cout << "\t\t\t******************* Management System *******************" << endl;
    cout << "Please Enter your process you need to do !" << endl;
    cout << " 1 - About Student" << "\t\t" << " 2 - About Teacher" << endl;
    cout << " 3 - About Course" << "\t\t" << " 4 - Exit " << endl;
  

}

////////////////// show list the Process system \\\\\\\\\\\\\\\\\

void show_process()
{
    switch (process)
    {
    case 1:
        cout << "\t\t\t\t******************* Add Process *******************" << endl;
        break;
    case 2:
        cout << "\t\t\t\t******************* Remove Process *******************" << endl;
        break;
    case 3:
        cout << "\t\t\t\t******************* Edit Process *******************" << endl;
        break;
    case 4:
        cout << "\t\t\t\t******************* Show Process *******************" << endl;
        break;
    case 5:
        cout << "\t\t\t\t******************* Show By Id Process *******************" << endl;
        break;
    case 6:
        cout << "\t\t\t\t******************* Exit Process *******************" << endl;
        break;

    
    }


}

////////////////// show list the sub list system \\\\\\\\\\\\\\\\\


void showlist(string value)
{

    cout << "\t\t\t*******************" <<value<<" Management System *******************" << endl;
    cout << "Please Enter your process you need to do !" << endl;
    cout << " 1 - Add "<<value << "\t\t" << " 2 - Remove " << value << endl;
    cout << " 3 - Edit " << value << "\t\t"<<" 4 - Show " << value << endl;
    cout << " 5 - Show "<<value << "By ID\t\t"<< " 6 - Exit " << endl;

}

////////////////// addadd_new_student \\\\\\\\\\\\\\\\\
 
void add_new_student()
{
    ss s1;
    s1= Enter_Data_student();
    
  student_countol st;
   id = st.add_student_control(s1);
   if (!id)
  
      cout << "filed Add Procces" << endl;
  
  else
   cout << "Success Added Student with id ["<< id <<"]" << endl;
   
}


////////////////// addadd_new_course \\\\\\\\\\\\\\\\\

void add_new_course()
{
    cours c1 = Enter_Data_cours();
   course_countrol cc1;
   id = cc1.addd_course_countol(c1);
   if (!id)

       cout << "filed Add Procces" << endl;

   else
       cout << "Success Added Course with id [" << id << "]" << endl;

}


////////////////// addadd_new_techear \\\\\\\\\\\\\\\\\

void add_new_techear()
{
    teacher t1=Enter_Data_techear();
    techear_countrol tc1;
    id = tc1.add_techear_control(t1);
    if (!id)

        cout << "filed Add Procces" << endl;

    else
        cout << "Success Added Techear with id [" << id << "]" << endl;

}

////////////////// switch_student \\\\\\\\\\\\\\\\\

void switch_student()
{

    switch (process)
    {
    case 1:
        show_process();
        add_new_student();
        break;
    case 2:
        cout << "Remove procces" << endl;
        break;
    case 3:
        show_process();
        update_Data_student();
        break;
    case 4:
        cout << "Show procces" << endl;
        break;
    case 5:
        show_process();
        Show_Student_id();
        break;
    case 6:
        cout << "Exit procces" << endl;
        break;

    default:
        cout << "Invaled Choose" << endl;
        break;
    }

}

////////////////// switch_course \\\\\\\\\\\\\\\\\

void switch_course()
{



    switch (process)
    {
    case 1:
        show_process();
        add_new_course();
        break;
    case 2:

        cout << "Remove Course" << endl;
        break;
    case 3:
        show_process();
        update_Data_cours();
        break;
    case 4:
        cout << "Show Course" << endl;
        break;
    case 5:
        show_process();
        Show_cours_id();
        break;
    case 6:
        cout << "Exit Course" << endl;
        break;
    default:
        cout << "Invaled Choose" << endl;
        break;
    }

}

////////////////// switch_techear \\\\\\\\\\\\\\\\\

void switch_techear()
{
    switch (process)
    {
    case 1:
        show_process();
        add_new_techear();
        break;
    case 2:
        cout << "Remove Teacher" << endl;
        break;
    case 3:
        show_process();
        update_Data_techear();
        break;
    case 4:
        cout << "Show Teacher" << endl;
        break;
    case 5:
        show_process();
        Show_techear_id();
        break;
    case 6:
        cout << "Exit Teacher" << endl;
        break;
    default:
        cout << "Invaled Choose" << endl;
        break;
    }

}

////////////////// Show_Student_id \\\\\\\\\\\\\\\\\

void Show_Student_id()
{

    cout << "Please Enter Id Student = " ;
    cin >> id; cout << endl;
    student_countol s1;
    s1.show_student_by_id_control(id);
     
}

////////////////// Show_cours_id \\\\\\\\\\\\\\\\\


void Show_cours_id()
{

    cout << "Please Enter Id Cours = ";
    cin >> id; cout << endl;
    course_countrol c1;
    c1.show_student_by_id_control(id);

}


////////////////// Show_techear_id \\\\\\\\\\\\\\\\\

void Show_techear_id()
{

    cout << "Please Enter Id Techear = " ;
    cin >> id; cout << endl;

    techear_countrol t1;
    t1.show_techear_by_id_control(id);

}

////////////////// Enter_Data_the_Student \\\\\\\\\\\\\\\\\

ss Enter_Data_student()
{
    ss s1;
    string name;
    float gpa;
    string speciale;
    string phone;
    int age;
    int level;
    cout << "Enter Student Name :";
    cin >> name;
    s1.set_name(name);
    cout << "Enter Student age :";
    cin >> age;
    s1.set_age(age);
    cout << "Enter Student phone :";
    cin >> phone;
    s1.set_phone(phone);
    cout << "Enter Student level :";
    cin >> level;
    s1.set_level(level);
    if (level > 2)      // hna ana oltlh lw hwa fe sana 3 kdh hyt5ss
    {
        cout << "Enter Student speciales :";
        cin >> speciale;
        s1.set_speciales(speciale);
    }
    else {          // hna lw hwa a2l mn sana 3 kdh dh mlho4 t5ss
        s1.set_speciales("default");
    }
    cout << "Enter Student GPA :";
    cin >> gpa;
    s1.set_gpa(gpa);

    return s1;
}

////////////////// Enter_Data_the_cours \\\\\\\\\\\\\\\\\

cours Enter_Data_cours()
{
    cours c1;
    string name;
    int hour;
    cout << "Enter course Name :";
    cin >> name;
    c1.set_name(name);
    cout << "Enter Course Hour :";
    cin >> hour;
    c1.set_hour(hour);
    return c1;
}

////////////////// Enter_Data_the_techear \\\\\\\\\\\\\\\\\

teacher Enter_Data_techear()
{
    teacher t1;
    string name;
    int age;
    string phone;
    string speciales;
    double saleary;
    cout << "Enter Techear Name :";
    cin >> name;
    t1.set_name(name);
    cout << "Enter Techear age :";
    cin >> age;
    t1.set_age(age);
    cout << "Enter Techear phone :";
    cin >> phone;
    t1.set_phone(phone);
    cout << "Enter Techear speciales :";
    cin >> speciales;
    t1.set_speciales(speciales);
    cout << "Enter Student saleary :";
    cin >> saleary;
    t1.set_saleary(saleary);

    return t1;
}


////////////////// update_Data_student \\\\\\\\\\\\\\\\\

void update_Data_student()
{
    ss s1;
    s1 = Enter_Data_student();
    cout << "Enter Id Student :";
    cin >> id;
    s1.set_id(id);
    student_countol c1;
    c1.edit_student_control(s1);
}


////////////////// update_Data_cours \\\\\\\\\\\\\\\\\

void update_Data_cours()
{
    cours c1;
    c1 = Enter_Data_cours();
    cout << "Enter Id Cours :";
    cin >> id;
    c1.set_id(id);
    course_countrol cc1;
    cc1.edit_course_control(c1);
}


////////////////// update_Data_techear \\\\\\\\\\\\\\\\\

void update_Data_techear()
{
    teacher t1;
    t1 = Enter_Data_techear();
    cout << "Enter Id Techear :";
    cin >> id;
    t1.set_id(id);
   techear_countrol tc1;
    tc1.edit_techear_control(t1);
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
