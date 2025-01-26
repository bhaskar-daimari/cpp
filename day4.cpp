#include<iostream>
#include<vector>
using namespace std;

struct{
    string name;
    float price;
    string owner;
}car1, car2;

struct car{
    string name;
    float price;
    string owner;
};

int main(){
    car mycar;
    mycar.name = "Lambhorgini";
    mycar.price = 30000000;
    mycar.owner = "Daaku";

    car1.name = "BMW";
    car1.price = 328242;
    car1.owner = "Himangshu";

    string food = "Pizza";
    string &meal = food;
    cout << food << " " + meal << endl;
    string* dinner = &food;
    cout << *dinner << endl;

    // cout << "Enter the month in numbers: ";
    // int Month;
    // cin >> Month;
    // switch(Month){
    //     case 1: cout << "Jan" << endl; break;
    //     case 2: cout << "Feb" << endl; break;
    //     default: cout << "Error";
    // }
    // int mynum[] = {5,4,3,2,1};
    // for(int num : mynum){
    //     cout << num;
    // }
    // cout << endl;
    // vector<int> nums = {1,2,3,4,5};
    // nums.push_back(6);
    // for(int num : nums){
    //     cout << num << endl;
    // }
}