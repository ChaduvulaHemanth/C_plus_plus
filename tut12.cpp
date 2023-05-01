#include<iostream>
using namespace std;

int main(){
    int a=3;
    int *b=&a;
    // (&): Address
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // (*): Dereference 
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;
    // Address of pointer
    int **c=&b;
    cout<<"The address of b is"<<&b<<endl;
    cout<<"The address of b is"<<c<<endl;


cout<<"The address of a is :"<<*c<<endl;
cout<<"The value of a is :"<<**c<<endl;
    return 0;
}