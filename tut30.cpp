/*This is Default constructor*/

// #include<iostream>
// using namespace std;

// class complex{
//     private:
//        int a,b;
//     public:
//        complex(void); // Constructor declaration 
//     void printnumber(){
//         cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// complex::complex(void) //This is default constructor as it accepts no parameters
// {
//     a=10;
//     b=5;
// }
// int main(){
//     complex c1;
//     c1.printnumber();
    
//     return 0;
// }

/*This is parameterised constructor*/

#include<iostream>
using namespace std;

class complex{
    private:
       int a,b;
    public:
       complex(int, int); // Constructor declaration
       void printnumber(){
        cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
       }
};
complex::complex(int x,int y) //This is parametersied constructor as it takes 2 parameters
{
    a=x;
    b=y;
}
int main(){
    // Implicit call
   complex c1(4,6);
   c1.printnumber();

  // Explicit call
  complex c2=complex(4,6);
  c2.printnumber();
    
    return 0;
}