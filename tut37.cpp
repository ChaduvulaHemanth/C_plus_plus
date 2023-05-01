#include <iostream>
using namespace std;

class Employee
{
private:
public:
    int id;
    float salary;
    Employee(int rollno, float income)
    {
        id = rollno;
        salary = income;
    }
    Employee(){};
};
/*
Derived class syntax
class {{Derived class name}}:{{visibility mode}}{{Base class name}}
1. Default visibility mode: Private
2. Public visibility mode: Public members of base class becomes public members of derived class
3. Private visibility mode: public members of base class becomes private members of derived class
4. private members of base class cannot be inherited
*/

class Programmer : public Employee
{
public:
    int langcode=9;
    Programmer(int sno)
    {
        id = sno;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee hemanth(1, 34.0);
    cout << hemanth.salary << endl;
    Programmer skillF(10);
    cout << skillF.langcode << endl;
    cout<<skillF.id<<endl;   // It works when visibilty mode is : public, otherwise throws an error
    skillF.getData();
    return 0;
}