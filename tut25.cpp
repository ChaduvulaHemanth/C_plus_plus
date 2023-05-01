#include<iostream>
using namespace std;

class Employee{

    private:

    static int id;

    public:

    void setID(void){
        cout<<"Enter the id of employee "<<id<<endl;
        cin>>id;
        
    }
    void getID(void){
        cout<<"the id of the employee "<<id<<endl;
        id++;

    }

};

int Employee::id=0; // Default value 0

int main(){

    Employee ABB[4];

    for (int i = 0; i < 4; i++)
    {
        ABB[i].setID();
        ABB[i].getID();
    }
          
    return 0;
}