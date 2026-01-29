#include <iostream>
#include <vector>
using namespace std;

int findFirst(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;
            high = mid - 1; // move left
        } 
        else if (arr[mid] < x) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int findLast(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;
            low = mid + 1; // move right
        } 
        else if (arr[mid] < x) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return ans;
}

vector<int> find(int arr[], int n, int x) {
    vector<int> v(arr, arr + n);

    int first = findFirst(v, x);
    if (first == -1) {
        return {-1};
    }

    int last = findLast(v, x);
    return {first, last};
}
