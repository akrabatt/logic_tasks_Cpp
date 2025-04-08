#include <iostream>
#include "IntVectorManager.h"

int main()
{
	IntVectorManager manager;	
	manager.fill(5, 15);
	manager.remove_even();
	manager.print();

	return 0;
}
