#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person{
    protected:
    String name;
    int id=-1;
    public:
    Person(String name="unnamed", int id=++);
    display();
~ Person(){
}
};






#endif
