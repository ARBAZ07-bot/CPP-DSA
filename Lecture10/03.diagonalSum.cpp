#include <iostream>
using namespace std;
int diagonalSum(int** arr, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows && i < cols; i++) {
        sum += arr[i][i];
    }
    for (int i = 0; i < rows && i < cols; i++) {
        sum += arr[i][cols - 1 - i];
    }
    if (rows == cols && rows % 2 != 0) {
        sum -= arr[rows / 2][cols / 2];
    }
    return sum;
}
int main() {
    int rows, cols;
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
    cout << "Diagonal Sum: "
         << diagonalSum(arr, rows, cols)<<endl;
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}