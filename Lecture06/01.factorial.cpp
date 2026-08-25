#include <iostream>
using namespace std;
long long factorial(int n){
    if(n<=1) return 1;
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter your number:\n";
    cin>>n;
    long long ans=factorial(n);
    cout<<"Factorial of "<<n<<" is: "<<ans<<endl;
    return 0;
}