#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    // === VECTOR (Dynamic Array) ===
    vector<int> vec = {5, 2, 8, 1, 9};
    vec.push_back(3);  // Add an element
    sort(vec.begin(), vec.end());  // Sort elements
    cout << "Vector: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    // === LIST (Doubly Linked List) ===
    list<int> lst = {10, 20, 30, 40};
    lst.push_front(5);  // Add at front
    lst.push_back(50);  // Add at back
    lst.sort();  // Sort list
    cout << "List: ";
    for (int x : lst) cout << x << " ";
    cout << endl;

    // === STACK (LIFO) ===
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    cout << "Stack top: " << st.top() << endl;
    st.pop();
    cout << "Stack top after pop: " << st.top() << endl;

    // === SET (Unique Sorted Elements) ===
    set<int> s = {7, 3, 1, 3, 9, 7};  // Duplicates are ignored
    s.insert(5);
    cout << "Set: ";
    for (int x : s) cout << x << " ";
    cout << endl;

    // === ALGORITHM (Find, Reverse) ===
    if (binary_search(vec.begin(), vec.end(), 5)) {
        cout << "5 is in the vector." << endl;
    }
    
    reverse(vec.begin(), vec.end());
    cout << "Reversed Vector: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
