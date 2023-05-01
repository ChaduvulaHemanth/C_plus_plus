#include<iostream>
#include<fstream>

using namespace std;

int main(){
    /*
    // string st="This is a new method for";
    // ofstream out("sample62.txt");
    // out<<st;
    */
   

//    ofstream out("sample62.txt");
 
//    ofstream out;
//    out.open("sample62.txt");

//    out<<"This is a new method for";
//    out.close();


   ifstream in;
   string st;
   in.open("sample62.txt");
   while (in.eof()==0)
   {
    getline(in,st);
    cout<<st<<endl;
   }
   in.close();
   
   return 0;
}