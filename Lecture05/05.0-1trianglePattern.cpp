#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:\n";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0)
            a=1;
        else
            a=0;
        for(int j=0;j<i;j++){
            if(a==1)
                cout<<a--<<" ";
            else
                cout<<a++<<" ";
        }
        cout<<endl;
    }
    return 0;
}