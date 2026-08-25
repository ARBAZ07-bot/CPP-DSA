#include <iostream>
using namespace std;
int main() {
    int size, rows, cols;
    cout << "Enter size of 1D array: ";
    cin >> size;
    // Create dynamic 1D array
    int* arr = new int[size];
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    // Check if conversion is possible
    if (rows * cols != size) {
        cout << "Cannot convert into this matrix size";
        delete[] arr;
        return 0;
    }
    // Create dynamic 2D array
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    // Convert 1D array to 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = arr[i * cols + j];
        }
    }
    // Print 2D array
    cout << "\n2D Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // Delete 1D array
    delete[] arr;
    // Delete 2D array
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}