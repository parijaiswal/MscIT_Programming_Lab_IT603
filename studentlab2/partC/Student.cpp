#include <iostream>
#include "Student.h"
using namespace std;
Student::Student(int r,float m){
    rollno=r;
    marks=m;
}
void Student::display(){
   cout<< "Roll Number :"<<rollno<<endl;
   cout<<"Marks: "<<marks<<endl;
}


