#include <iostream>
using namespace std;

class Bankdeposit
{
private:
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit(int p, int y, float r);
    void show();
};
Bankdeposit::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void Bankdeposit::show()
{
    cout<<"The principal amount is " << principal << " .The return value after" << years << " years is " << returnvalue << endl;
}
int main()
{
    // Bankdeposit bd1(100, 1, 0.03);
    // //    Bankdeposit bd2(int 100, int 1, float 3);

    // bd1.show();
    // //    bd2.show;

    Bankdeposit bd1;
    int p, y;
    float r;
    cout << "Enter the value of p, y, and r" << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    return 0;
}