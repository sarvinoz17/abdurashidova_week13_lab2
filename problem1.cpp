#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    int ((*fp)(int, int)) = add;
    cout<<"The sum is: "<<fp(x,y)<<endl;
    return 0; }