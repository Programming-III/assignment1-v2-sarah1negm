#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;class Instuctor:Person{
    private:
    String department;
    int experienceYears;
    public:
    Instructor(String name="unnamed", int id=++, String name="unnamed", int id=++):Person(name,id){
        this.name=name;
        this.id=id;
    }
    display():Person.display(){
        cout<< "department: "<< department<< endl<<"Years of experience : "<< experienceYears;
    }
}
#endif
