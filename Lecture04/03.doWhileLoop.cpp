#include <iostream>
using namespace std;
int main() {
    int choice;
    do {
        cout << "\n--- MENU ---";
        cout << "\n1. Add";
        cout << "\n2. Subtract";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "You selected Addition.";
                break;
            case 2:
                cout << "You selected Subtraction.";
                break;
            case 3:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice!";
        }
    } while (choice != 3);
    return 0;
}