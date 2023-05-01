#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    void setdata(int a, int b)
    {
        real = a;
        imag = b;
    }
    void getdata()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imag << endl;
    }
};

int main()
{
    // complex c1;
    // c1.setdata(1, 51);
    // c1.getdata();

    // complex c1;
    // complex *ptr=&c1;
    complex *ptr=new complex;

    // (*ptr).setdata(1,51);
    ptr->setdata(1,51);

    // (*ptr).getdata();
    ptr->getdata();

    /*Array of objects*/
    complex *ptr1=new complex[4];
    ptr1->setdata(1,51);
    ptr1->getdata();


    return 0;
}