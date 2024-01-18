#include<bits/stdc++.h>

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int x) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int x = 6;
    cout<< binarySearch(arr, x);

    return 0;
}
