
#include <iostream>
#include <string>

using namespace std;

/*
	passing sq func as argument in first variadic args
	to sum all with right folding.
*/


template<typename Function>
auto sum_square (Function operation, auto...args)
{
	return (operation(args) + ... +0);
}

int sq (int x)
{
	return (x * x);
}

int main ()
{
	cout << sum_square(sq,1, 2, 3, 4) << endl;
}