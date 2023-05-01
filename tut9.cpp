#include<iostream>

using namespace std;

int main(){
int age;
cout<<"Enter your age"<<endl;
cin>>age;

/* 1. Selection structure: if-else if-else*/

// if ((age<18)&&(age>0)){
//     cout<<"You are not allowed to party"<<endl;
// }
// else if (age==18){
//     cout<<"You are allowed but not to take drink"<<endl;
// }
// else {
//     cout<<"You are allowed"<<endl;
// }



/* 2. Selection structure: switch*/

switch (age) {

    case 18:
    cout<<"You are in teenage"<<endl;
    break;

    case 32:
    cout<<"Your current age"<<endl;
    break;

    default:
    cout<<"You become old"<<endl;
    break;

}
    return 0;
}