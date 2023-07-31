#pragma once
#include "public_data.h"
class cours :  public public_data 
{
private:
    int hour;
   int arr_student_id[5];
public:
    void set_hour(int h);
    void set_arr_student_id(int aar[5]);

    int get_hour();
   int* get_arr_student_id();
  
    
};

