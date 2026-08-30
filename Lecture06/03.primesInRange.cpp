#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
void allPrime(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    cout << "Enter value of n:\n";
    cin >> n;
    cout << "PRIMES IN RANGE:\n";
    allPrime(n);
    cout << endl;
    return 0;
}