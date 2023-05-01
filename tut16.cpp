#include<iostream>
using namespace std;

/*Call by Pointer*/
// void swapPointer(int* x, int* y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

/* Call by reference value*/
// int & 
void swapReferenceVar(int &x, int &y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
    // return x;

}


int main(){
    int a, b;
    a=4;b=5;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    // swapPointer(&a, &b);
    swapReferenceVar(a, b);
    // swapReferenceVar(a, b)=10;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;

    return 0;
}