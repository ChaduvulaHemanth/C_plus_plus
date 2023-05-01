#include<iostream>
using namespace std;

int glo=20; /*This global variable*/
void sum(){
    int glo=10;  /*Local variable*/
    cout<<"\n The value of variable:"<<glo;
}


int main(){
    int glo=5; /*Local variable*/
    float b=2.3;
    char c='u';
    cout<<glo; 
    // cout<<::glo; /*Referencing global variable*/
    sum();
    cout<<"\nThe value of variable:"<<glo;
    cout<<"\nThe floating number:\n"<<b;
    cout<<"\nThe character is:"<<c;
    return 0;
}