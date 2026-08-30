#include <iostream>
using namespace std;
int reverse(int num){
    int revNum=0;
    while(num>0){
        int lastDigit=num%10;
        revNum=revNum*10+lastDigit;
        num=num/10;
    }
    return revNum;
}
bool checkPal(int n,int revNum){
    if(n==revNum) return 1;
    return 0;
}
int main(){
    int n;
    cout<<"Enter value of n:\n";
    cin>>n;
    int revNum=reverse(n);
    bool ans=checkPal(n,revNum);
    if(ans) 
        cout<<n<<" is a Palindrome.\n";
    else
        cout<<n<<" is not a Palindrome.\n";
    return 0;
}