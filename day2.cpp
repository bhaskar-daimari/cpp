// #include <iostream>

// int main(){
//     std::cout << "Hello, world!" << std::endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int linearsearch(int *arr, int n, int target);
int binarysearch(int *arr, int n, int target);

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int res = binarysearch(arr, 10, 4);
    cout << res << endl;
    return 0;
}

int linearsearch(int *arr, int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int binarysearch(int *arr, int n, int target){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}