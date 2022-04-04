
#include <iostream>
#include <string>

using namespace std;

/*
	factorial recursively.
*/

int factorial (int num)
{
	if (num < 0) return 0;
	if (num == 1)
		return 1;
	else
		return (num * factorial(num-1)) ;
}

int main ()
{
	
	cout << factorial (-1);
	return 0;
}
