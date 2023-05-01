#include<iostream>
using namespace std;

class shop{
    private:
    int id;
    float price;
    public:
    void setdata(int a, int b){
        id=a;
        price=b;
    }
    void getdata(void){
        cout<<"The code of the item "<<id<<endl;
        cout<<"The price of the item "<<price<<endl;

    }
};

int main(){
    int size=3;
    int p;
    float q;
    shop *ptr= new shop[size];
    shop *ptrTemp=ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and price "<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }
    for (int i=0; i<size; i++){
        cout<<"item number: "<<i+1<<endl;
        // (*ptrTemp).getdata();
        ptrTemp->getdata();
        ptrTemp++;
    } 
    
    return 0;
}