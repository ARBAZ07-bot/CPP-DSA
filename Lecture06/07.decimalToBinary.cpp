#include <iostream>
using namespace std;
int decimalToBinary(int decNum) {
    int ans = 0;
    int pow = 1;
    while (decNum > 0) {
        int rem = decNum % 2;
        ans += rem * pow;
        pow *= 10;
        decNum /= 2;
    }
    return ans;
}
int main() {
    int decNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;
    cout << "Binary number: "
         << decimalToBinary(decNum) << endl;
    return 0;
}