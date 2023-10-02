#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
	cout << arr[i] << " ";
    }
    return 0;
}

// pseudo code for insertion sort
// for i = 1 to n
//     key = arr[i]
//     j = i - 1
//     while j >= 0 and arr[j] > key
//         arr[j + 1] = arr[j]
//         j = j - 1
//     arr[j + 1] = key

// Time complexity: O(n^2)
// Space complexity: O(1)

