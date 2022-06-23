#include <iostream>
#include "allocater.h"

class test
{

};

using std::cout;
using std::endl;
int main()
{
	Allocater _allocater;
	
	test* _test = _allocater.Alloc<test>();

	cout << _test << endl;

	std::system("pause");
	return 0;
}