#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b; 
    public:
    int c;


};
class Derived: public Base{

};


/* 
For a protected member:

                       Public derivation      Private derivation     Protected derivation

1. Private member       Not inherited           Not inherited           Not inherited
2. Protected member      Protected                Private                 Protected
3. Public member          Public                  Private                 Protected

*/

int main(){
    Base b;
    Derived d;
    cout<<d.c;
    
    return 0;
}