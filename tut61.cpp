#include<iostream>
#include<fstream>
using namespace std;


int main(){

    string st1="I have to know who am I";
    ofstream hout("sample61.txt");
    hout<<st1;
    hout.close();

    // string name;
    // cout<<"Enter your name";
    // cin>>name;
    // ofstream hout("sample61.txt"); 
    // hout<<name;
    // hout.close();

    ifstream hin("sample61.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file: "<<content;
    hin.close();

    
    return 0;
}