// start.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include"countrol.cpp"

void display();
void showlist(string value);
void add_new_student();
void add_new_course();
void add_new_techear();

int main()
{

    int exit = 0;
    int process;
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
             switch (process)
             {
             case 1:
                 add_new_student();
                 break;
             case 2:
                 cout << "Remove procces" << endl;
                 break;
             case 3:
                 cout << "Edit procces" << endl;
                 break;
             case 4:
                 cout << "Show procces" << endl;
                 break;
             case 5:
                 cout << "Exit procces" << endl;
                 break;
             default:
                 cout << "Invaled Choose" << endl;
                 break;
             } 
           
             
            break;
        case 2:
            showlist("Teacher");
            cin >> process;
            switch (process)
            {
            case 1:
                add_new_techear();
                break;
            case 2:
                cout << "Remove Teacher" << endl;
                break;
            case 3:
                cout << "Edit Teacher" << endl;
                break;
            case 4:
                cout << "Show Teacher" << endl;
                break;
            case 5:
                cout << "Exit Teacher" << endl;
                break;
            default:
                cout << "Invaled Choose" << endl;
                break;
            }



            break;
        case 3:
            showlist("Course");
            cin >> process;
            switch (process)
            {
            case 1:
                add_new_course();
                break;
            case 2:
                cout << "Remove Course" << endl;
                break;
            case 3:
                cout << "Edit Course" << endl;
                break;
            case 4:
                cout << "Show Course" << endl;
                break;
            case 5:
                cout << "Exit Course" << endl;
                break;
            default:
                cout << "Invaled Choose" << endl;
                break;
            }

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
    cout << " 1 - Add Student" << "\t\t" << " 2 - Add Teacher" << endl;
    cout << " 3 - Add Course" << "\t\t\t" << " 4 - Exit " << endl;
  

}


////////////////// show list the sub list system \\\\\\\\\\\\\\\\\


void showlist(string value)
{

    cout << "\t\t\t*******************" <<value<<" Management System *******************" << endl;
    cout << "Please Enter your process you need to do !" << endl;
    cout << " 1 - Add "<<value << "\t\t" << " 2 - Remove " << value << endl;
    cout << " 3 - Edit " << value << "\t\t"<<" 4 - Show " << value << endl;
    cout << " 5 - Exit " << endl;

}

////////////////// addadd_new_student \\\\\\\\\\\\\\\\\

void add_new_student()
{
    ss s1;
    string name;
    float gpa;
    string speciale;
    string phone;
    int age;
    int level;
    cout << "\t\t\t\t******************* Add process *******************"<<endl;
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
    cout << "Enter Student speciales :";
    cin >> speciale;
    s1.set_speciales(speciale);
    cout << "Enter Student GPA :";
    cin >> gpa;
    s1.set_gpa(gpa);
  student_countol st;
  int id = st.add_student(s1);
   if (!id)
  
      cout << "filed Add Procces" << endl;
  
  else
   cout << "Success Added Student with id ["<< id <<"]" << endl;
   
}


////////////////// addadd_new_course \\\\\\\\\\\\\\\\\

void add_new_course()
{
    cours c1;
    string name;
    int hour ;
    cout << "\t\t\t\t******************* Add process *******************" << endl;
    cout << "Enter course Name :";
    cin >> name;
   c1.set_name(name);
   cout << "Enter Course Hour :";
   cin >> hour;
   c1.set_hour(hour);
   course_countrol cc1;
   int id = cc1.addd_course(c1);
   if (!id)

       cout << "filed Add Procces" << endl;

   else
       cout << "Success Added Course with id [" << id << "]" << endl;

}


////////////////// addadd_new_techear \\\\\\\\\\\\\\\\\

void add_new_techear()
{
    teacher t1;
    string name;
    int age;
    string phone;
    string speciales;
    double saleary;
   
    cout << "\t\t\t\t******************* Add process *******************" << endl;
    cout << "Enter Techear Name :";
    cin >> name;
    t1.set_name(name);
    cout << "Enter Techear age :";
    cin >> age;
    t1.set_age(age);
    cout << "Enter Techear phone :";
    cin >> phone;
    t1.set_phone(phone);
    cout << "Enter Student saleary :";
    cin >> saleary;
    t1.set_saleary(saleary);
    cout << "Enter Techear speciales :";
    cin >> speciales;
    t1.set_speciales(speciales);
    techear_countrol tc1;
    int id = tc1.add_techear(t1);
    if (!id)

        cout << "filed Add Procces" << endl;

    else
        cout << "Success Added Techear with id [" << id << "]" << endl;

}












//int * student::get_techear()
//{
//	return arr ;//hna a7na rg3na al array of teacher by pointer 3l4an anta m4 ht3rf trg3 al array mn 8er pointer
//}








// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
