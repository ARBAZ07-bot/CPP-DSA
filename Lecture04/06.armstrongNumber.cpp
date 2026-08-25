#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    // Store original number
    int orgNum = num;
    int num1 = num;
    int digits = 0;
    // Count number of digits
    if (num1 == 0) {
        digits = 1;
    }
    while (num1 > 0) {
        digits++;
        num1 = num1 / 10;
    }
    // Calculate Armstrong sum
    int newNum = 0;
    while (num > 0) {
        int lastDig = num % 10;
        newNum = newNum + pow(lastDig, digits);
        num = num / 10;
    }
    // Check Armstrong number
    if (newNum == orgNum)
        cout << orgNum << " is an Armstrong number.\n";
    else
        cout << orgNum << " is not an Armstrong number.\n";
    return 0;
}