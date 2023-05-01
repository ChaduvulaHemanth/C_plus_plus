#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class hemanth{
    private:
    T1 a;
    T2 b;
    T3 c;
    public:
    hemanth(int x, float y, char z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }

};


int main(){
    hemanth<int,float,char>h(800, 1.8, 'c');
    h.display();
    cout<<endl;

    hemanth<char, int, float>h1(800, 1.8, 'c');  // This will not throw an error but give a garbage value 
    h1.display();


    
    return 0;
}