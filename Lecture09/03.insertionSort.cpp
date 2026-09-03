#include <iostream>
using namespace std;
void insertionSort(int *arr,int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
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
    insertionSort(arr,n);
    cout<<"Array elements: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}