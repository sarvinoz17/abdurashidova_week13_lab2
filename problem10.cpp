#include <iostream>
using namespace std;

int isEven(int x) {
    return (x % 2 == 0) ? 1 : 0; }

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int (*funcs[])(int) = { isEven };
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += funcs[0](arr[i]);  }

    cout << count << endl;

    return 0;
}
