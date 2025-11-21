#include <iostream>
using namespace std;
double average(double* ptrs[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += *ptrs[i];}
    return sum / size;
}

int main() {
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}

    double* ptrs[n];
    for (int i = 0; i < n; i++) {
        ptrs[i] = &arr[i];}
    cout << average(ptrs, n) << endl;

    return 0;
}
