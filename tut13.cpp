#include<iostream>
using namespace std;

int main(){
    int marks[]={4, 7, 5, 9};
    marks[3]=10;

    // cout<<marks[0]<<endl;
    // cout<<marks[3]<<endl;

    // int i=0;
    // while (i<4)
    // {
    //     cout<<"The value of marks at "<<i<<" index is:"<<marks[i]<<endl;
    //     i++;
    // }

    /*Using pointer*/
    int *p=marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    

    

    return 0;
}