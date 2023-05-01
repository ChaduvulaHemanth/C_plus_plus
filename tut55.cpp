#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "The value of base class variable is " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of base class variable is " << var_base << endl;
        cout << "The value of derived class variable is " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass baseclass_obj;
    DerivedClass derived_obj;
    base_class_pointer = &derived_obj;

    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer=&derived_obj;
    derived_class_pointer->var_base=20;
    derived_class_pointer->var_derived=100;
    derived_class_pointer->display();

    return 0;
}