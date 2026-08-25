#include <iostream>
using namespace std;
int main() {
    int password;
    cout << "Enter password: ";
    cin >> password;
    while (password != 1234) {
        cout << "Wrong password!" << endl;
        cout << "Enter password again: ";
        cin >> password;
    }
    cout << "Login successful!";
    return 0;
}