#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream Myfile("filename.txt");
    // Myfile << "Hello, world!" << endl;
    string line;
    ifstream Myfile("filename.txt");
    while (getline(Myfile, line)){
        cout << line;
    }
    Myfile.close();
}

// #include <iostream>
// using namespace std;

// class Vehicle{
//     public:
//         string brand;
//         void honk(){
//             cout << "Tuut tuut" << endl;
//         }
// };

// class Car : public Vehicle{
//     public:
//         string model;
//         void honk(){
//             cout << "Chuk chuk" << endl;
//         }
// };

// class DamagedCar : public Car{
//     public:
//         float damage;
//         void honk(){
//             cout << "Theeer theeer" << endl;
//         }
// };

// int main(){
//     Car mycar;
//     mycar.honk();
//     mycar.model;
//     DamagedCar car2;
//     car2.honk();
// }