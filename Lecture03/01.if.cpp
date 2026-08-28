#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:\n";
    cin>>age;
    if (age >= 18) {
        cout << "Eligible to vote";
    }
    return 0;
}