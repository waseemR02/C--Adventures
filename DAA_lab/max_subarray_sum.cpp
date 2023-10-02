// max min and cross sum of subarrays

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int max_cross_sum(vector<int> &A, int low, int mid, int high) {
    // numeric_limits is a class template that provides a convenient way to access the most commonly used properties of arithmetic types.
    int left_sum = numeric_limits<int>::min();
    int sum = 0;
    for (int i = mid; i >= low; i--) {
        sum += A[i];
        if (sum > left_sum) {
            left_sum = sum;
        }
    }
    int right_sum = numeric_limits<int>::min();
    sum = 0;
    for (int i = mid + 1; i <= high; i++) {
        sum += A[i];
        if (sum > right_sum) {
            right_sum = sum;
        }
    }
    return left_sum + right_sum;
}

int max_min_subarray(vector<int> &A, int low, int high) {
    if (low == high) {
        return A[low];
    }
    int mid = (low + high) / 2;
    int left_sum = max_min_subarray(A, low, mid);
    int right_sum = max_min_subarray(A, mid + 1, high);
    int cross_sum = max_cross_sum(A, low, mid, high);
    if (left_sum >= right_sum && left_sum >= cross_sum) {
        return left_sum;
    } else if (right_sum >= left_sum && right_sum >= cross_sum) {
        return right_sum;
    } else {
        return cross_sum;
    }
}

int main() {
    vector<int> A = {1, 10, -5, 1, -100, 2};
    cout << "The array is: ";
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "The max min subarray sum is: ";
    cout << max_min_subarray(A, 0, A.size() - 1) << endl;
    return 0;
}

// pseudo code for maximum subarray sum
// max_subarray_sum(A, low, high)
// if low == high
//     return A[low]
// else
//     mid = (low + high) / 2
//     left_sum = max_subarray_sum(A, low, mid)
//     right_sum = max_subarray_sum(A, mid + 1, high)
//     cross_sum = max_cross_sum(A, low, mid, high)
//     if left_sum >= right_sum and left_sum >= cross_sum
//         return left_sum
//     else if right_sum >= left_sum and right_sum >= cross_sum
//         return right_sum
//     else
//         return cross_sum

// pseudo code for maximum cross sum
// max_cross_sum(A, low, mid, high)
// left_sum = -infinity
// sum = 0
// for i = mid downto low
//     sum = sum + A[i]
//     if sum > left_sum
//         left_sum = sum
// right_sum = -infinity
// sum = 0
// for i = mid + 1 to high
//     sum = sum + A[i]
//     if sum > right_sum
//         right_sum = sum
// return left_sum + right_sum

