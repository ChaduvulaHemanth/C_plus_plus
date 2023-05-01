#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    void setdata(int a1){
        this->a=a1;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }


};
int main(){
    //  this is a keyword which is a pointer points to the object which invokes the membership function
    A a;
    a.setdata(4);
    a.getdata();
    
    return 0;
}