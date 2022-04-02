
#include <iostream>
using namespace std;

/*
	Palindrome symmetry array checking.
*/

int main ()
{
	int arr[20] = {1,2,3,4,5,5,4,3,2,1};
	int n = 10;

	for (int i = 0; i < (n/2); i++)
	{	

		if (arr[i] != arr[n-i-1])
		{
			cout << "NO";
			return 0;
		}

	}
	cout << "Yes";
	return 0;
}
