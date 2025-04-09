#include <iostream>
#include "IntVectorManager.h"

int main()
{
	IntVectorManager manager;	
	manager.fill(5, 15);
	manager.remove_even();
	manager.print();

	std::cout << "Min: " << manager.get_min() << "\n";
	std::cout << "Max: " << manager.get_max() << "\n";
	std::cout << "Avg: " << manager.get_average() << "\n";

	return 0;
}
