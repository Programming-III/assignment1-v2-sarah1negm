#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student: Person{
    private:
    int yearLevel;
    String major;
    public:
    Student(String name="unnamed", int id=++,string major="untitled",int YearLevel=1):Person(name,id){
        this.major=major;
        this.YearLevel=YearLevel;
    }
    display():Person.display(){
        cout<< "Year Level: "<< yearLevel<< endl<<"Major: "<< major;
    }
}












#endif
