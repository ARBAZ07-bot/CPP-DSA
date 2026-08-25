#include <iostream>
using namespace std;
int main() {
    // Declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};
    // Accessing one element
    cout << "First element: " << numbers[0] << endl;
    // Modifying an element
    numbers[2] = 100;
    // Accessing all elements using a loop
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}