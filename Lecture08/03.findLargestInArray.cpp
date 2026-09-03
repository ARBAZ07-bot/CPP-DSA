#include <iostream>
using namespace std;
int largest(int *arr,int n){
    int larg = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>larg) larg=arr[i];
    }
    return larg;
}
int main(){
    int n;
    cout<<"Enter number of elements:\n";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = largest(arr,n);
    cout<<"Largest element is : "<<ans<<endl;
    delete[] arr;
    return 0;
}