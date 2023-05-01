#include <iostream>
using namespace std;

class simple
{
private:
    int data1, data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    
    // void print()
    // {
    //     cout << "The value of data 1 is " << data1 << " and "<< "data 2 is " << data2 << endl;
    // }

    void print();
};

void simple::print(){
    cout << "The value of data 1 is " << data1 << " and "<< "data 2 is " << data2 << endl;

}
int main()
{
    simple s1(3, 4);
    s1.print();

    simple s2(3);
    s2.print();

    return 0;
}