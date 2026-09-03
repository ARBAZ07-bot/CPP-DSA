#include <iostream>
using namespace std;
void transposeMatrix(int** arr, int rows, int cols) {
    // Create transpose matrix
    int** transpose = new int*[cols];
    for (int i = 0; i < cols; i++) {
        transpose[i] = new int[rows];
    }
    // Create transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    // Delete transpose matrix
    for (int i = 0; i < cols; i++) {
        delete[] transpose[i];
    }
    delete[] transpose;
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
    transposeMatrix(arr, rows, cols);
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}