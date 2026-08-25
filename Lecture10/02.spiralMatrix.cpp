#include <iostream>
using namespace std;
void spiralMatrix(int** arr, int rows, int cols) {
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;
    while (top <= bottom && left <= right) {
        //Left to Right
        for (int j = left; j <= right; j++) {
            cout << arr[top][j] << " ";
        }
        top++;
        //Top to Bottom
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;
        //Right to Left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << arr[bottom][j] << " ";
            }
            bottom--;
        }
        //Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
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
    cout << "Spiral Order: ";
    spiralMatrix(arr, rows, cols);
    cout<<endl;
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}