#include<iostream>
using namespace std;

 inline int product(int a, int b){
    
    /*Don't use static int. Below line are commented if we write inline*/
    // static int c=0;
    // c=c+1;
    // return a*b+c; 
    
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter a value:"<<endl;
    cin>>a;
    cout<<"Enter b value:"<<endl;
    cin>>b;
    product(a,b);
    cout<<"The product is:"<<product(a,b)<<endl;
    cout<<"The product is:"<<product(a,b)<<endl;
    return 0;
}