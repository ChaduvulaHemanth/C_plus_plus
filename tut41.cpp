#include<iostream>
using namespace std;

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int=b;
    }
};
class Derived:public Base1, public Base2{
    public:
    void show(){
       cout<<"The value of variable in Base 1: "<<base1int<<endl; 
       cout<<"The value of variable in Base 2: "<<base2int<<endl; 
       cout<<"The sum of value of variables in Base 1 and Base 2 is: "<<base1int+base2int<<endl; 
    }
};

int main(){
    Derived hemanth;
    hemanth.set_base1int(10);
    hemanth.set_base2int(2);
    hemanth.show();
    
    return 0;
}