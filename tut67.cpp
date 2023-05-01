#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float Avg=(a+b)/2.0; // check with (a+b)/2;
//     return Avg;
// }

// float funcAverage2(int a, float b){
//     float Avg=(a+b)/2.0; // check with (a+b)/2;
//     return Avg;
// }

/* Make function template*/

template <class T1, class T2>

float funcaverage(T1 a,T2 b){
    // T1 avg=(a+b)/2.0;
    // T2 avg=(a+b)/2.0;
    float avg=(a+b)/2.0;
    return avg;
}

template <class T>

void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){

    float a;
    // a=funcAverage(5, 2);
    // a=funcAverage2(5, 2.4);

    a=funcaverage(5, 2.8);
    printf("The value of a is %0.2f\n", a);
    int x=2, y=5;
    swapp(x,y);
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;

    return 0;
}