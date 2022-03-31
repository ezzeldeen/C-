
#include <iostream>
using namespace std;

/*
	giving a sorted array with duplicated elements print unique numbers in it.
*/

int main ()
{
	int arr[20] = {1,2,2,2,5,6,6,7,8,9,9,9};
	int n = 12;

	cout << arr[0] << " ";
	for (int i = 1; i < n; i++)
	{		
		if (arr[i] != arr[i-1])
		{
			cout << arr[i] << " ";
		}
	}

}
