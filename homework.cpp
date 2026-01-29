//implement binary search algorithm using recursion
// #include <iostream>
// using namespace std;    
// int binarySearch(int arr[], int left, int right, int target) {
//     if (left > right) {
//         return -1; // Target not found
//     }
//     int mid = left + (right - left) / 2;
//     if (arr[mid] == target) {
//         return mid; // Target found
//     }
//     else if (arr[mid] > target) {
//         return binarySearch(arr, left, mid - 1, target); // Search in the left half
//     }
//     else {
//         return binarySearch(arr, mid + 1, right, target); // Search in the right half
//     }
// }
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " sorted elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter target element to search: ";
//     cin >> target;
//     int result = binarySearch(arr, 0, n - 1, target);
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found in the array." << endl;
//     }
//     return 0;
// }

//find algorithm whoes time complexity is n cude, n square and constant
//Time complexity n cube
// #include <iostream>
// using namespace std;
// void printCubic(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             for (int k = 0; k < n; k++) {
//                 cout << "Cubic operation: " << i << ", " << j << ", " << k << endl;
//             }
//         }
//     }
// }
// //Time complexity n square
// void printQuadratic(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "Quadratic operation: " << i << ", " << j << endl;
//         }
//     }
// }
// //Time complexity constant
// void printConstant() {
//     cout << "Constant time operation" << endl;
// }
// int main() {
//     int n;
//     cout << "Enter a number for cubic and quadratic operations: ";
//     cin >> n;
//     printCubic(n);
//     printQuadratic(n);
//     printConstant();
//     return 0;
// }

