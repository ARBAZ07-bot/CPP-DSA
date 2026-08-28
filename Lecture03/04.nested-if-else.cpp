#include <iostream>
using namespace std;
int main() {
    int age;
    int qualification;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter qualification (1 = Graduate, 0 = Not Graduate): ";
    cin >> qualification;
    if (age >= 18) {
        cout << "Age requirement satisfied." << endl;
        if (qualification == 1) {
            cout << "You are eligible for the job." << endl;
        }
        else {
            cout << "You are not eligible because you are not a graduate." << endl;
        }
    }
    else {
        cout << "You are not eligible because you are under 18." << endl;
    }
    return 0;
}