#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    // Creating a constructor
    // Constructor is a special member function with the same name as of the class
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    complex(void); // Constructor declaration
    void printnumber(){
    cout<<"The result of the number is "<<a<<"+i"<<b<<endl;
   }

};

complex::complex(void){
    a=10;
    b=0;
}

int main(){
    complex c1;
    c1.printnumber();
    
    return 0;
}

/*Characteristics of Constructors
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. we cannot refer to their address

*/