#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;
    cout << "Using array indexing:\n";
    cout << arr[0] << '\n';
    cout << arr[1] << '\n';

    cout << "\nUsing pointer arithmetic:\n";
    cout << *(arr + 0) << '\n';
    cout << *(arr + 1) << '\n';

    cout << "\nUsing pointer:\n";
    cout << ptr[0] << '\n';
    cout << *(ptr + 1) << '\n';

    cout << "\nAddresses:\n";
    cout << "arr      = " << arr << '\n';
    cout << "&arr[0]  = " << &arr[0] << '\n';
    cout << "&arr     = " << &arr << '\n';
    return 0;
}