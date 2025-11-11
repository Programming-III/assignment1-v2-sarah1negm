#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

class Person{
    protected:
    String name;
    int id=-1;
    public:
    Person(String name="unnamed", int id=++){
        this.name=name;
        this.id=id;
    }
    display(){
        cout<< "Name: "<< name<< endl<<"ID: "<< id;
    }
}
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
class Instuctor:Person{
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
// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
