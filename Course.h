#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course{
    private:
    String courseCode;
    String courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    addStudent(const Student& s){
        if(currentStudents<maxStudents){
             currentStudents++;
             * (students+1)= s;
        }
        else
            cout<<" cannot add student, exceeded maximum number of students.";
    }
    displayCourseInfo(){
        cout<< "course Code: "<< courseCode<< endl<<" course Name: "<< courseName<< endl<<" max Students: "<<maxStudents << endl<< "current Students: "<<currentStudents;
        for(int i= currentStudents-1; i>=0 ;i--)
            cout<< endl<<*(students-i);
    }
}











#endif
