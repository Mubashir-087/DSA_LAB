#include <iostream>

using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;  // Prevent overflow for large arrays

        if (arr[mid] == x) {
            return mid;  // Element found
        }

        if (arr[mid] < x) {
            l = mid + 1;  // Search in the right subarray
        } else {
            r = mid - 1;  // Search in the left subarray
        }
    }

    return -1;  // Element not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        cout << "Element is not present in array" << endl;
    } else {
        cout << "Element is present at index " << result << endl;
    }

    return 0;
}

