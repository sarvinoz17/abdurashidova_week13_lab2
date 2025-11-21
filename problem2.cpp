#include <iostream>
using namespace std;

bool greaterThan10(int x) {
    return x > 10; }

int countIf(int arr[], int n, bool (*fp)(int)) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (fp(arr[i])) {
            count++; }
    }
    return count; }

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; }

    bool (*fp)(int) = greaterThan10;
    cout << countIf(arr, n, fp) << endl;

    return 0; }
