#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 3;
    cout << a + b; 
    cout << a - b; 
    cout << a * b;
    cout << a / b;
    cout << a % b;
    
    int x = 10;
    x += 5;  
    x -= 3;   
    x *= 2;  
    x /= 4;   

    int c = 10, d = 20;
    cout << (c < d);
    x == 10; 
    return 0;

    int p = 10;
    cout << (p > 5 && p < 20);
    cout << (p > 5 || p < 20);
     cout << !(p > 5);
}