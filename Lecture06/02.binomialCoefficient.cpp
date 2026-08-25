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
int binCof(int n,int r){
    return (factorial(n)/factorial(r))/factorial(n-r);
}
int main(){
    int n,r;
    cout<<"Enter value of 'n' and 'r' : \n";
    cin>>n>>r;
    int ans = binCof(n,r);
    cout<<"Binomial coefficient is : "<<ans<<endl;
    return 0;
}