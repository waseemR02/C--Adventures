#include <iostream>

using namespace std;

void print_array(int *arr);

void quickSort(int *arr, int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    /* partition */
    while (i <= j) {

        // find element on left that should be on right
        while (arr[i] < pivot) i++;
        // find element on right that should be on left
        while (arr[j] > pivot) j--;

        // swap elements, and move left and right indices
        if (i <= j) {
            swap(arr[i], arr[j]);
            // print_array(arr);
            i++;
            j--;
        }
        // print_array(arr);
    };
    /* recursion */
    // sort left side of pivot element
    if (left < j) quickSort(arr, left, j);
    // sort right  side of pivot element
    if (i < right) quickSort(arr, i, right);
}

void print_array(int *arr)
{
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 5,2,3,1,4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

