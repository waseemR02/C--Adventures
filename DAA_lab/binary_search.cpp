#include <iostream>

using namespace std;

int main()
{
    // sorted array
    int arr[] = { 2, 5, 6, 13, 23, 25, 27, 43, 45, 67, 89 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // binary search

    int left = 0;
    int right = n - 1;
    int mid = (left + right) / 2;
    int target = 13;
    while (left <= right) {
        if (arr[mid] == target) {
            cout << "Found " << target << " at index " << mid << endl;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        mid = (left + right) / 2;
    }
    if (left > right) {
        cout << "Not found" << endl;
    }


    return 0;
}