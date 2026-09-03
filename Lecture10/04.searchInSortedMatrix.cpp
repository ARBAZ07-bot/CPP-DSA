#include <iostream>
using namespace std;
bool searchMatrix(int** arr, int rows, int cols, int target) {
    int row = 0;
    int col = cols - 1;
    while (row < rows && col >= 0) {
        if (arr[row][col] == target) {
            return true;
        }
        else if (arr[row][col] > target) {
            col--;
        }
        else {
            row++;
        }
    }
    return false;
}
int main() {
    int rows, cols, target;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Enter target element: ";
    cin >> target;
    if (searchMatrix(arr, rows, cols, target)) {
        cout << "Element found";
    }
    else {
        cout << "Element not found";
    }
    cout<<endl;
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}