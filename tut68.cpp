#include<iostream>
using namespace std;

template <class T>

class Hemanth{
    public:
    T data;
    Hemanth(T a){
        data=a;
    }
    void display();
};

template <class T>
void Hemanth<T>::display(){
    cout<<data<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templaized func() "<<a<<endl;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatized func1() "<<a<<endl;
}

int main(){
    Hemanth<int>h(5);
    cout<<h.data<<endl;

    h.display();

    func(4);
    func1(4);
    return 0;
}