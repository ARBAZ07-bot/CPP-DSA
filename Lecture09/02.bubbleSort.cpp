#include <iostream>
using namespace std;
void bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        bool isSwapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwapped=true;
            }
        }
        if(!isSwapped) break;
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
    bubbleSort(arr,n);
    cout<<"Array elements: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}