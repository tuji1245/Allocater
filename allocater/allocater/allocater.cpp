#include "allocater.h"
//#include <memory> new �ő�p
#include <new>
Allocater::Allocater()
{
	_memoryPool = (char*)malloc(sizeof(char) * _poolSize);
}

Allocater::~Allocater()
{
	free(_memoryPool);
}
