#include <iostream>
using namespace std;
int binaryToDecimal(int binNum) {
    int ans = 0;
    int pow = 1;
    while (binNum > 0) {
        int lastDigit = binNum % 10;
        ans += lastDigit * pow;
        pow *= 2;
        binNum /= 10;
    }
    return ans;
}
int main() {
    int binNum;
    cout << "Enter binary number: ";
    cin >> binNum;
    cout << "Decimal number: " << binaryToDecimal(binNum) << endl;
    return 0;
}