#include <iostream>
#include <vector>

using namespace std;

void merge2Sorted(vector<int> &arr, int low, int mid, int high);
void mergeSort(vector<int> &arr, int lb, int ub);

int main() {
    int n, index;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); // Using vector instead of a fixed-size array
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the index where the highest element should be inserted: ";
    cin >> index;

    while (index < 1 || index >= n) {
        cout << "The index that you provided is invalid!\n";
        cout << "Please enter a valid index: ";
        cin >> index;
    }

    mergeSort(arr, 0, n - 1);

    // Swap the highest element with the element at the given index
    swap(arr[index - 1], arr[n - 1]);

    // Sort left and right parts separately
    mergeSort(arr, 0, index - 2);
    mergeSort(arr, index, n - 1);

    // Print the sorted array
    cout << "Sorted Array:\n";
    for (int num : arr) {
        cout << num << "\t";
    }
    cout << endl;

    return 0;
}

void merge2Sorted(vector<int> &arr, int low, int mid, int high) {
    int size1 = mid - low + 1;
    int size2 = high - mid;

    vector<int> L(size1), R(size2);

    for (int i = 0; i < size1; i++) {
        L[i] = arr[low + i];
    }
    for (int i = 0; i < size2; i++) {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    while (i < size1 && j < size2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < size1) {
        arr[k++] = L[i++];
    }
    while (j < size2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(vector<int> &arr, int lb, int ub) {
    if (lb < ub) {
        int mid = lb + (ub - lb) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge2Sorted(arr, lb, mid, ub);
    }
}
