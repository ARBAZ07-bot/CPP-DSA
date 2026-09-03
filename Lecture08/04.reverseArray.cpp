#include <iostream>
using namespace std;
void reverseArray(int *arr,int n){
    int s=0,e=n-1;
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++,e--;
    }
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
    cout<<"Original array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverseArray(arr,n);
    cout<<"Reversed array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}