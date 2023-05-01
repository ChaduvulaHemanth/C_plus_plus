#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student :: get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}
class Exam:public Student
{
protected:
    float maths;
    float physics;
public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam :: get_marks()
{
    cout <<"The marks obtained in maths " <<maths<<endl;
    cout <<"The marks obtained in physics "<<physics<<endl;
}
class Result: public Exam{
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"The result is "<<(maths+physics)/2<<"%"<<endl;
    }
};

int main()
{

    /*
    1. If we are inheriting B from A and C from B: A---> B ---> C
    2. A is base class for B and B is base class for C
    3. A---> B ---> C is called inheritance path
    */
    Result hemanth;
    hemanth.set_roll_number(15);
    hemanth.set_marks(94,90);
    hemanth.display();


    return 0;
}