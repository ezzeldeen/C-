
#include <iostream>
#include <string>

using namespace std;

/*
	Reverse array even or odd number of elements.
*/

int main ()
{
	
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = 9;

	for (int i=0; (i <= (n/2)-1); i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << " ";
	}

	return 0;
}
