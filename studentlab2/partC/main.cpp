#include <iostream>
#include "Student.h"
using namespace std;
int main(){
   int roll;
   float marks;
   cout<<"Enter here your roll no:- ";
   cin>>roll;
   cout<<"Enter here your marks: ";
   cin>>marks;
   Student s(roll,marks);
   cout<<"\nStudent Information\n";
   s.display();
   return 0;
}

