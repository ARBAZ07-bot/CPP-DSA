#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:\n";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}