#include<iostream>
using namespace std;
#include"this.h"

int main(){
    int a=5, b=6;

cout<<"This is new header file this.h"<<endl;

cout<<"Arithematic operators\n";

cout<<"The a/b:"<<a/b<<endl;
cout<<"The a%b:"<<a%b<<endl;
cout<<"The a++:"<<a++<<endl;
cout<<"The ++a:"<<++a<<endl;
cout<<"The a--:"<<a--<<endl;
cout<<"The --a:"<<--a<<endl;
cout<<endl;

cout<<"Comparison operator\n";
cout<<"a==b"<<(a==b)<<endl;
cout<<"a<=b"<<(a<=b)<<endl;
cout<<"a!=b"<<(a!=b)<<endl;

cout<<"Logical operator\n";
cout<<"for AND logic:"<<((a<b)&&(a!=b))<<endl;
cout<<"for OR logic:"<<((a==b)||(a!=b))<<endl;
cout<<"for NOT logic:"<<(!(a==b))<<endl;

    return 0;
}