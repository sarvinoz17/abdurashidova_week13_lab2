#include <iostream>
using namespace std;

int* filterEven(int arr[], int n, int & newSize) {
    newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            newSize++;
    }

    int* result = new int[newSize];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            result[k++] = arr[i];
    }

    return result;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin>>n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int m;
    int* ev = filterEven(arr, n, m);
    cout<<"THE RESULT:"<<endl;
    for (int i = 0; i < m; i++) {
        cout<<ev[i]<<" ";
    }
    cout<<endl;
    delete[] ev;
    delete[] arr;
    return 0;
}