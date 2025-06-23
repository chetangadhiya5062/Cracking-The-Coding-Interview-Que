/*
10.3 Search in Rotated Array: Given a sorted array of n integers that has been rotated an unknown
number of times, write code to find an element in the array. You may assume that the array was
originally sorted in increasing order.
EXAMPLE
lnput:findSin{15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14}
Output: 8 (the index of 5 in the array)
*/
#include <iostream>
#include <algorithm> // for min_element, max_element
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Linear search from start1 to end1 (inclusive)
int search(int arr[], int start1, int end1, int n) {
    for (int i = start1 ; i <= end1 ; i++) {
        if (arr[i] == n) return i;
    }
    return -1;
}

int searchRotatedArray(int arr[], int size, int n) {
    int start = 0;
    int end = size - 1;

    // Find index of min and max using std::min_element and std::max_element
    int min_index = min_element(arr, arr + size) - arr;
    int max_index = max_element(arr, arr + size) - arr;

    // Search in appropriate half
    int result = -1;

    if (n == arr[min_index]) return min_index;
    if (n == arr[max_index]) return max_index;

    if (n >= arr[start] && n <= arr[max_index]) {
        result = search(arr, start, max_index, n);
    } else if (n >= arr[min_index] && n <= arr[end]) {
        result = search(arr, min_index, end, n);
    }

    return result;
}

int main() {
    int arr[] = {15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    int n;
    cout << "Enter the number to search: ";
    cin >> n;

    int index = searchRotatedArray(arr, size, n);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
