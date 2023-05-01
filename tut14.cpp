#include<iostream>
using namespace std;

// struct employee
// {
//     int eID;
//     char favchar;
//     float salary;
    
// };

typedef struct employee
{
    int eID;
    char favchar;
    float salary;
    
}ep;


int main(){
    
    // struct employee hemanth;
    ep hemanth;
    hemanth.eID=1;
    hemanth.favchar='c';
    hemanth.salary=100000;

    cout<<hemanth.eID<<endl;
    cout<<hemanth.favchar<<endl;
    cout<<hemanth.salary<<endl;


    return 0;
}
