/*Check output while removing and placing virtual*/

#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base=1;
   virtual void display()
    {
        cout << "The value of base class variable is " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived=2;
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


    base_class_pointer->display();


    return 0;
}