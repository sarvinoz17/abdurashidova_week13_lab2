#include <iostream>
using namespace std;

void reverseArray(int* ptrs[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = *ptrs[i];
        *ptrs[i] = *ptrs[size - i - 1];
        *ptrs[size - i - 1] = temp;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* ptrs[n];
    for (int i = 0; i < n; i++) {
        ptrs[i] = &arr[i];
    }

    reverseArray(ptrs, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
