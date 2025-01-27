#include <iostream>
#include <string.h>
using namespace std;
int isPallindrome(string word)
{ // q1
    if (word == "")
    {
        return 0;
    }
    int size = word.size();
    for (int i = 0; i < size; i++)
    {
        if (word[i] != word[size - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int gcd(int x, int y)
{ // q2
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

int nfibnum(int n)
{ // q3
    if (n == 0 || n == 1)
    {
        return n;
    }
    return nfibnum(n - 1) + nfibnum(n - 2);
}

bool isPrime(int n)
{ // q4
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sumofdigits(int n)
{ // q5
    int res = 0;
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        res += digit;
        n /= 10;
    }
    return res;
}

int main()
{
    // cout << isPallindrome("");
    // cout << gcd(6, 11) << endl;
    // cout << nfibnum (8);
    // cout << isPrime(37);
    cout << sumofdigits(1);
}

// #include <iostream>
// // #include <string>
// using namespace std;
// class Student{
//     public:
//         int rollno;
//         string name;
//         void printStudent(){
//             cout << name + " " << rollno << endl;
//         }
//         void pstudent();
//         Student(int x, string y);
//         // Student(int x, string y){
//         //     rollno = x;
//         //     name = y;
//         // }
// };

// Student::Student(int x, string y){
//     rollno = x;
//     name = y;
// }

// void Student::pstudent(){
//     cout << name  << "\n" << rollno << endl;
// }

// int main(){
//     Student s1(1010, "Bhaskar Daimari");
//     // s1.name = "Bhaskar Daimari";
//     // s1.rollno = 1010;
//     s1.printStudent();
// }

// #include <iostream>
// using namespace std;

// int sumofnums(int n){
//     if(n == 0){
//         return 0;
//     }
//     else{
//         return n + sumofnums(n-1);
//     }
// }
// // float celcius(float farenheit){
// //     return (5.0 / 9.0) * (farenheit - 32);
// // }

// int main()
// {
//     cout << sumofnums(5) << endl;
//     // cout << celcius(98.8) << endl;
// }

// #include <iostream>
// #include <array>
// // #include <string>
// using namespace std;

// // void name(string fname);
// // void lastname(string lname = "Daimari");
// // void swap(int &, int &);
// // void cstring(string &word);
// void parr(int arr[]);

// int main(){
//     int arr[] = {5,4,3,2,1};
//     parr(arr);
//     // string word = "Hello";
//     // cstring(word);
//     // cout << word << endl;

//     // string fname;
//     // cin >> fname;
//     // name(fname);
//     // lastname("Swargiary");
//     // int x = 3, y = 1;
//     // swap(x, y);
//     // cout << x << endl;
//     // cout << y << endl;
// }

// void parr(int *arr){
//     for(int i=0; i<5; i++){
//         cout << arr[i] << endl;
//     }
// }

// // void cstring(string &word){
// //     word += ", World";
// // }

// // void name(string fname){
// //     cout << fname << + " Daimari" << endl;
// //     return;
// // }

// // void lastname(string lname){
// //     cout << lname << endl;
// // }

// // void swap(int &x, int &y){
// //     int z = x;
// //     x = y;
// //     y = z;
// // }