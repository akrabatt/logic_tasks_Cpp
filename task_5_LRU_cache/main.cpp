#include <iostream>
#include "LRUCache.h"


int main()
{
	LRUCache cache(3);	
	
	cache.put(1, 10);
	cache.put(2, 20);
	cache.put(3, 30);	
	
	cache.print_cache();
	
	std::cout << cache.get(1);

	cache.put(4, 40);

	cache.print_cache();

	std::cout << cache.get(3);

	cache.print_cache();

	return 0;
}
