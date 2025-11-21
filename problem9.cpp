#include <iostream>
using namespace std;
double square(double x) {
    cout<<"SQUARE: ";
    return x*x;
}
double cube(double x) {
    cout<<"CUBE: ";
    return x*x*x;
}
int main() {
    double (*funcs[2])(double) = { square, cube };
    double val;
    cout<<"Enter the value of x: ";
    cin>>val;
    for(int i=0;i<2;i++) {
        cout<<funcs[i](val)<<" ";
    }
    return 0;
}