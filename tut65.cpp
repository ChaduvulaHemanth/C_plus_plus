#include<iostream>
using namespace std;

template<class T1, class T2>
class myclass{
    private:
    T1 data1;
    T2 data2;
    public:
    myclass(T1 a, T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<this->data1<<endl;
        cout<<this->data2<<endl;
    }
};

int main(){
    myclass <int,float>obj(2,1.8);
    obj.display();

    return 0;
}