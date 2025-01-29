#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t timestamp;
time(&timestamp);
cout << ctime(&timestamp);
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age = 17;
//     try{
//         if(age >= 18){
//             cout << "Access Granted!" << endl;
//         }
//         else{
//             // throw(age);
//             throw 404;
//         }
//     }
//     // catch(int n){
//     //     // cout << "You are under 18!!" << endl;
//     //     cout << "ERROR" << + " " << n << endl;
//     //     cout << "Access Denied!" << endl;
//     // }
//     catch(...){
//         cout << "Some error occurred." << endl;
//         cout << "Access Denied" << endl;
//     }
// }