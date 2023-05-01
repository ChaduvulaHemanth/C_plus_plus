#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with file in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file
// 1. Using the constructor
// 2. Using the member function  open() of the class

int main(){
    string st1="I should write a research paper";
    // Opening files using constructor and writing it
    ofstream out("sample60a.txt");  // Write operation
    out<<st1;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    // in>>st2;
    getline(in,st2);
    cout<<st2<<endl;
    
    return 0;
}