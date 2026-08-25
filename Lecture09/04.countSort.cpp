#include <iostream>
using namespace std;
void countSort(int *arr,int n){
    // Find maximum element
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // Create count array
    int* count=new int[max+1];
    // Create output array
    int* output=new int[n];
    // Count frequency of each element
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    // Convert count array into cumulative count
    for(int i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    // Place elements in correct positions
    // Traverse from right to left for stability
    for(int i=n-1;i>=0;i--){
        output[count[arr[i]]-1]= arr[i];
        count[arr[i]]--;
    }
    // Copy sorted elements back to original array
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
    // Free memory
    delete[] count;
    delete[] output;
}
int main() {
    int n;
    cout << "Enter number of elements:\n";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements of array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countSort(arr, n);
    cout << "Array elements:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}