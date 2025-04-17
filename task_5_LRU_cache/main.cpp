#include <iostream>
#include "LRUclass.h"


int main()
{
	LRUCache cache(3);	
	
	cache.put(1, 10);
	cache.put(2, 20);
	cache.put(3, 30);	
	
	cache.print_cache();
	
	std::cout << "get key: 1, value: " << cache.get(1) << "\n";

	cache.put(4, 40);

	cache.print_cache();

	std::cout << "get key: 3, value: " << cache.get(3) << "\n";

	cache.print_cache();

	return 0;
}
