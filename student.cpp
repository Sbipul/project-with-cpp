#include "student.h"
#include <iostream>
using namespace std;
void Student::set_value(int i, const string& n,const string& d,float c) {
    id = i;
    name = n;
    dept = d;
    cgpa = c;
    cout <<"Student Name : "<<name<<endl<<"Student ID : "<<dept<<id<<endl<<"CGPA : "<<cgpa<<endl<<endl;
}
