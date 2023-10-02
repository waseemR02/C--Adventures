// find the maximum and minimum of an array using Divide and Conquer

#include <iostream>

using namespace std;

int max_element(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min_element(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

void maxmin(int arr[], int low, int high, int &max, int &min)
{
    int mid, max1, min1, max2, min2;
    if (low == high)
    {
        max = min = arr[low];
    }
    else if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            max = arr[low];
            min = arr[high];
        }
        else
        {
            max = arr[high];
            min = arr[low];
        }
    }
    else
    {
        mid = (low + high) / 2;
        maxmin(arr, low, mid, max1, min1);
        maxmin(arr, mid + 1, high, max2, min2);
        max = max_element(max1, max2);
        min = min_element(min1, min2);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max, min;
    maxmin(arr, 0, 9, max, min);
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    return 0;
}

// Pseudo code for finding the maximum and minimum of an array using Divide and Conquer
// maxmin(arr, low, high, max, min)
//     if low == high
//         max = min = arr[low]
//     else if high == low + 1
//         if arr[low] > arr[high]
//             max = arr[low]
//             min = arr[high]
//         else
//             max = arr[high]
//             min = arr[low]
//     else
//         mid = (low + high) / 2
//         maxmin(arr, low, mid, max1, min1)
//         maxmin(arr, mid + 1, high, max2, min2)
//         max = max(max1, max2)
//         min = min(min1, min2)

// Time Complexity: O(n) Explaination: The number of comparisons are 1 + 2(n-2) in the worst case and the recurrence can be solved to get complexity as O(n).
// Space Complexity: O(1)

