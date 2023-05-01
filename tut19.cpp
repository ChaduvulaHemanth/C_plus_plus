// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     return a+b;
// }

// int sum(int a, int b, int c){
//     return a+b+c;
// }

// int main(){
//    int a, b, c;
// //    cout<< "enter first number"<<a<<endl;  
// //    cout<< "enter second number"<<b<<endl;  
// //    cout<< "enter third number"<<c<<endl; 
// //    cout<<"The sum of a and b"<<sum(a,b)<<endl;
// //    cout<<"The sum of a , b, and c"<<sum (a,b,c)<<endl; 

//      cout<<"sum of "<<sum(3,6)<<endl;
//      cout<<"sum of"<<sum(3,6,9)<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;

int volume(int a){
    return (a*a*a);
}
int volume(int r, int h){
    return (3.14*r*r*h);
}
int volume(int l,int b, int h){
    return (l*b*h);
}


int main(){
    int a, b, c;
    cout<<"enter first number"<<a<<endl;
    cin>>a;
    cout<<"enter second number"<<b<<endl;
    cin>>b;
    cout<<"enter third number"<<c<<endl;
    cin>>c;

    cout<<"The volume of cuboid of size "<<volume(a)<<endl;
    cout<<"The volume of rectangle "<<volume(a,b,c)<<endl;
    cout<<"The volume of cylinder "<<volume(a,b)<<endl;

    

    return 0;
}