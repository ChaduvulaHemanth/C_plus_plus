#include<iostream>
using namespace std;

/*Function prototype*/ 
// int sum(int a, int b); // It is Acceptable
int sum(int,int);  // It is also Acceptable
// void g(void); // It is Acceptable
void g(); // It is also Acceptable

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;

    cout<<"the sum is :"<<sum(num1, num2)<<endl;
    g();
    return 0;
}

int sum(int a, int b){
         int c=a+b;
         return c;
}

void g(void){
    cout<<"Hello, good morning"<<endl;
}