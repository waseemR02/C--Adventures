// Implement merge sort algorithm
#include <iostream>

using namespace std;

void merge(int *arr, int start, int mid, int end)
{
    int i = start, j = mid + 1, k = 0;
    int temp[end - start + 1];
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= end)
        temp[k++] = arr[j++];
    for (int i = start; i <= end; i++)
        arr[i] = temp[i - start];
}

void merge_sort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    //input for size of the array
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    //input for the array
    cout << "Enter the array: ";
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    //calling merge sort function
    merge_sort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;
    return 0;
}

// pseudo code for merge sort
// merge_sort(arr, start, end)
//     if start < end
//         mid = (start + end) / 2
//         merge_sort(arr, start, mid)
//         merge_sort(arr, mid + 1, end)
//         merge(arr, start, mid, end)

//algorithm for merge sort
// 1. Start
// 2. Divide the array into two halves
// 3. Sort the two halves
// 4. Merge the two halves
// 5. Stop