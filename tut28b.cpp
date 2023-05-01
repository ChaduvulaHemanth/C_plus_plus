#include<iostream>
using namespace std;

class c2;

class c1{
    private:
    int val1;
    friend void exchange(c1 &, c2&);
    public:
    void indata(int a){
        val1=a;
    }
    void display(void){
        cout<<val1<<endl;
    }
};

class c2{
    private:
        int val2;
    friend void exchange(c1 &, c2 &);
    public:
         void indata(int b){
            val2=b;
         }
         void display(void){
            cout<<val2<<endl;
         }
};

void exchange(c1 &x, c2 &y){
int tmp=x.val1;
    x.val1=y.val2;
    y.val2=tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(37);
    oc2.indata(64);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchange: "<<endl;    
    oc1.display();

    cout<<"the value of c2 after exchange: "<<endl;
    oc2.display();
    
    return 0;
}