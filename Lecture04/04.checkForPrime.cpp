#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number:\n";
    cin>>num;
    if(num<=1){
        cout<<"Niether Prime nor Composite.\n";
        return 0;
    }
    bool isPrime=true;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) isPrime=false;
    }
    if(isPrime)
        cout<<num<<" is a Prime number.\n";
    else
        cout<<num<<" is a Composite number.\n";
    return 0;
}