#include <iostream>
using namespace std;
int linSearch(int* arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key) return i;
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter value to search;\n";
    cin>>key;
    cout<<"Enter number of elements:\n";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = linSearch(arr,n,key);
    if(ans!=-1)
        cout<<"Found at index: "<<ans<<endl;
    else
        cout<<"Value not present.\n";
    delete[] arr;
    return 0;
}