#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;class Instuctor:Person{
    private:
    String department;
    int experienceYears;
    public:
    Instructor(String name="unnamed", int id=++, String name="unnamed", int id=++):Person(name,id);
    display():Person.display();
}
#endif
