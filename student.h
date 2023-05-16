#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student {
public:
    int id;
    string name;
    string dept;
    float cgpa;
    void set_value(int i, const string& n,const string& d,float c);
};

#endif
