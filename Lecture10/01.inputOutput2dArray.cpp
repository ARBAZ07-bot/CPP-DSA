#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows and columns:\n";
    cin>>r>>c;
    cout<<"Enter elements of 2dArray:\n";
    int** arr=new int* [r];
    for(int i=0;i<r;i++){
        arr[i]=new int[c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Row wise traversal:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Column wise traversal:\n";
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}