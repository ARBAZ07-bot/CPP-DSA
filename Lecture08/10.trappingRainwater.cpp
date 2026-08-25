#include <iostream>
using namespace std;
int trap(int* height, int n) {
    int left = 0;
    int right = n - 1;
    int leftMax = 0;
    int rightMax = 0;
    int totalWater = 0;
    while (left < right) {
        if (height[left] <= height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            }
            else {
                totalWater += leftMax - height[left];
            }
            left++;
        }
        else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            }
            else {
                totalWater += rightMax - height[right];
            }
            right--;
        }
    }
    return totalWater;
}
int main() {
    int n;
    cout << "Enter number of bars: ";
    cin >> n;
    int* height = new int[n];
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    cout << "Total trapped water: "
         << trap(height, n) << endl;
    delete[] height;
    return 0;
}