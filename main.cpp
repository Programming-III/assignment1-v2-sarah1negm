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
        cout<< endl<< "Year Level: "<< yearLevel<< endl<<"Major: "<< major;
    }
}
class Instuctor:Person{
    private:
    String department;
    int experienceYears;
    public:
    Instructor(String name="unnamed", int id=++, String department"untitled", int experienceYears=0):Person(name,id){
        this.department=department;
        this.experienceYears=experienceYears;
    }
    display():Person.display(){
        cout<< endl<<"department: "<< department<< endl<<"Experience : "<< experienceYears <<" years";
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
        cout<< endl<<" course: "<< courseName<< endl<<" max Students: "<<maxStudents << endl<< "current enrolled: ";
        for(int i= currentStudents-1; i>=0 ;i--)
            cout<< endl<<*(students-i);
    }
}
// ==================== Main Function ====================
int main() {
   Student s1= Student("Sarah Negm",1,"cs", 2);
    s1.display;
   Instructor i1= Instructor("Sarah ali","programming", 3 );
    i1.display();
    Student s= new Student();
    Course c1= Course("CSINF5","programming", 30, s,19);
    c1.addStudent()
    c1.display(s1);
























    
    return 0;
}
