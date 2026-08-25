#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int& ref = x;
    cout << "Initial values:\n";
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
    ref = 50;
    cout << "\nAfter ref = 50:\n";
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
    x = 100;
    cout << "\nAfter x = 100:\n";
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
    cout << "\nAddresses:\n";
    cout << "&x = " << &x << endl;
    cout << "&ref = " << &ref << endl;
    return 0;
}