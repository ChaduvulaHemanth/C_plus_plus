#include<iostream>
#include<iomanip>
using namespace std;

int main(){
/*Using constants*/
// const int a=3;
// cout<<"The value of a was"<<a<<endl;
// int a=4; /* This will give an error because you mention a as constant */
// cout<<"the value of a is"<<a<<endl;

/* Using setw*/
int a=5;

cout<<"The value of a without setw is"<<a<<endl;
cout<<"The value of a with setw is"<<setw(3)<<a<<endl;

    return 0;
}