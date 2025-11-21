#include <iostream>
using namespace std;
void incrementOdd(int* ptrs[], int size) {
    for (int i = 0; i < size; i++) {
        if (*ptrs[i] % 2 != 0) {
            (*ptrs[i]) ++;
        }
    }
}
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int* ptrs[n];
    for (int i = 0; i < n; i++) {
        ptrs[i] = &arr[i];
    }
    incrementOdd(ptrs, n);
    for (int i = 0; i < n; i++) {
        cout<<*ptrs[i]<<" ";
    }
    return 0;
}