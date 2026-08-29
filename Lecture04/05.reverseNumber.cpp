#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number:\n";
    cin>>num;
    int orgNum=num;
    int revNum=0;
    while(num>0){
        int lastDigit=num%10;
        revNum=revNum*10+lastDigit;
        num=num/10;
    }
    cout<<"REVERSE OF "<<orgNum<<" is : "<<revNum<<endl;
    return 0;
}