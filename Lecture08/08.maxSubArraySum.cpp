#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int maxSubArraySum(int* arr,int n){
    int currSum=arr[0];
    int maxSum=arr[0];
    for(int i=1;i<n;i++){
        currSum=max(arr[i],currSum+arr[i]);
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
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
    int res=maxSubArraySum(arr,n);
    cout<<"Maximum subarray sum: "<<res<<endl;
    delete[] arr;
    return 0;
}