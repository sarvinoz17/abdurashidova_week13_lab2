#include <iostream>
using namespace std;

int maxValue(int* ptrs[], int size) {
    int max_val = *ptrs[0];
    for (int i = 1; i < size; i++) {
        if (*ptrs[i] > max_val) {
            max_val = *ptrs[i];}
    }
    return max_val;}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}

    int* ptrs[n];
    for (int i = 0; i < n; i++) {
        ptrs[i] = &arr[i];
    }
    cout << maxValue(ptrs, n) << endl;

    return 0;
}
