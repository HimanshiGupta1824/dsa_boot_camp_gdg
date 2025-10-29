#include <iostream>
using namespace std;
int main (){
    int x=5;
    int* y=&x;
    int** z=&y;
    cout << "x is " << x << "\n";
    cout << "y is " << *y << "\n";
    cout << "z is " << **z << "\n";
    cout << "address of x is " << &x << "\n";
    cout << "y points to  " << y << "\n";
    return 0;
}
