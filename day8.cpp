#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> list = {1,2,3,4,5};
    list.at(0) = 0;
    list.pop_back();
    list.push_back(6);
    for(int n : list){
        cout << n << endl;
    }
}