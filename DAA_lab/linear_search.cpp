#include <iostream>

using namespace std;

int main()
{
	int size,i;
	cout << "Enter the size of your list: ";
	cin >> size;

	int arr[size];
	cout << "Enter the elements:";
	for(i = 0; i < size; i++)
		cin >> arr[i];
	
	cout << "Search: ";
	int key;
	cin >> key;
	
	// Linear Search
	for(i = 0; i < size; i++)
		if(arr[i] == key)
		{
			cout << "Element found in " << i << " index" << endl;
			break;
		}
	if(i == size)
		cout << "Element not found!!\n";

	return 0;
}

// Pseudo code for linear search
// for i = 0 to n
//     if arr[i] == key
//         return i
// return -1

// Time complexity: O(n)
// Space complexity: O(1)