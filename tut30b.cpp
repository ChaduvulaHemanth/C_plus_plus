#include<iostream>
using namespace std;

class point{
    private:
        int a,b;
    public:
         point(int x, int y){  // Lines no:17 to 20 should be commented
            a=x;
            b=y;
         }
       void displaypoint(){
        cout<<"The point is ("<<a<<","<<b<<")"<<endl;
       }

};
// point::point(int x, int y){
//     a=x;
//     b=y;
// }

int main(){
    point p1(4,6);
    p1.displaypoint();

    point p2=point (4,6);
    p2.displaypoint();
    
    return 0;
}