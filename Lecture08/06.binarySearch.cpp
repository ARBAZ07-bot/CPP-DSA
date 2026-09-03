#include <iostream>
using namespace std;
int binSearch(int* arr,int n,int key){
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e=mid-1;
        else
            s=mid+1;
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
    int ans = binSearch(arr,n,key);
    if(ans!=-1)
        cout<<"Found at index: "<<ans<<endl;
    else
        cout<<"Value not present.\n";
    delete[] arr;
    return 0;
}