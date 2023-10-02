#include <iostream>

using namespace std;

void bubble_sort(int *arr, int size)
{
    //bubble sort algorithm
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // input for size of array
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    // input for array elements
    int arr[size];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // calling bubble sort function
    bubble_sort(arr, size);

    // printing sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// pseudo code for bubble sort
// for i = 0 to n-1
//     for j = 0 to n-i-1
//         if arr[j] > arr[j+1]
//             swap arr[j] and arr[j+1]

// algorithm for bubble sort
// 1. Start
// 2. Repeat steps 3 to 5 for i = 0 to n-1
// 3. Repeat steps 4 and 5 for j = 0 to n-i-1
// 4. If arr[j] > arr[j+1]
// 5. Swap arr[j] and arr[j+1]
// 6. Stop
