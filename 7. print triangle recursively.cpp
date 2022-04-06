
#include <iostream>
#include <string>

using namespace std;

/*
	print triangle recursively.
*/

void print_triangle (int num)
{
	if (num <= 0) return;

	print_triangle (num - 1);

	for (int i = 0; i < num; i++)
		cout<< "*";
	cout << endl;
}

int main ()
{
	print_triangle (9);
	return 0;
}
