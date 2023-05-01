#include<iostream>
using namespace std;

int a=10;

int main(){
// int a=5;
// float b=20.3f;
// long double c=20.3l;

// cout<<"The value of a is\n"<<::a;
// cout<<"\nThe value of a is\n"<<::a<<endl;

// cout<<"The value of b is:\n"<<b;
// cout<<"\nThe value of c is:\n"<<c;

// cout<<"\nThe size of 20.3\n"<<sizeof(20.3)<<endl;
// cout<<"\nThe size of 20.3f\n"<<sizeof(20.3f)<<endl;
// cout<<"\nThe size of 20.3F\n"<<sizeof(20.3F)<<endl;
// cout<<"\nThe size of 20.3l\n"<<sizeof(20.3l)<<endl;
// cout<<"\nThe size of 20.3L\n"<<sizeof(20.3L)<<endl;

/*Reference variable*/

float x=40;
// float y=x;
float &y=x;
cout<<x<<endl<<y<<endl;

/* Type casting*/
float e=2.3;
cout<<(int)e<<endl;
cout<<int(e)<<endl;

    return 0;
}