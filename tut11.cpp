/* using code snippet (type prefix name:log)*/

/* usage of break*/

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<i<<endl;
//         if (i==2)
//         {
//             break;
//         }
        

//     }
    
//     return 0;
// }

/* Using continue*/

#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        if (i==2)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}
