// #include<iostream>
// using namespace std;

// int factorial(int n) {
//     if (n<=1){
//     return 1;
//     }
//     return n*factorial(n-1);

// }

// int main(){
//     int n;
//     cout<<"enter a number"<<endl;
//     cin>>n;
//     cout<<"The factorial of a number "<<factorial(n);
    
//     return 0;

// }

#include<iostream>
using namespace std;

int fib(int n){
    if (n<2){
    return 1;
    }
    return fib(n-2)+ fib(n-1);
}

int main(){
    int n;
    cout<<"enter a number "<<n<<endl;
    cin>>n;
    cout<<"print fibonacci sequence at position "<<n<<fib(n)<<endl;

    return 0;
}