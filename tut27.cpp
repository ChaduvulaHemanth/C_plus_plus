#include<iostream>
using namespace std;

// Forward Declaration
class complex;

class calculator{
    public:
    int add(int a, int b){
    return (a+b);
    }
    int sumRealcomplex(complex , complex );
    int sumImagcomplex(complex , complex );

};

class complex{
    private:
    int a, b;
 
    //  // Individually declaring functions as friend

    // friend int calculator :: sumRealcomplex(complex o1, complex o2);
    // friend int calculator :: sumImagcomplex(complex o1, complex o2);

    //  Declaring the entire calculator class as friend
    friend class calculator;


    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    
    void printNumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }

};

int calculator::sumRealcomplex(complex o1, complex o2)
    {
    return (o1.a + o2.a);
    }

int calculator::sumImagcomplex(complex o1, complex o2)
    {
    return (o1.b + o2.b);
    }

int main(){
    complex o1, o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    calculator calc;
    int res_real=calc.sumRealcomplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res_real<<endl;
    int res_imag=calc.sumImagcomplex(o1,o2);
    cout<<"The sum of imaginary part of o1 and o2 is "<<res_imag<<endl;
    return 0;
}