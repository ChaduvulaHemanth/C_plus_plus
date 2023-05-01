#include<iostream>
using namespace std;

class Employee{
    private:
         int id;
         static int count;
    public:
        void setData(void){
            cout<<"Enter employee id "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"Get the employee id "<<id<<" employee number "<<count<<endl;
        }
        static void getcount(void){
            //  cout<<id; // throws an error
             cout<<"The value of count is "<<count<<endl;
        }

};

int Employee::count=0; // Default value 0

int main(){

    Employee hemanth,aditya,sai;
    hemanth.setData();
    hemanth.getData();
    // Employee::getcount();
    hemanth.getcount();

    aditya.setData();
    aditya.getData();
    // Employee::getcount();
    aditya.getcount();

    sai.setData();
    sai.getData();
    // Employee::getcount();
    sai.getcount();
    
    return 0;
}