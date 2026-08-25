#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:\n";
    cin>>n;
    for(int i=i;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}