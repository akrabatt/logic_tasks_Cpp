#ifndef LRU_H
#define LRU_H

#include <list>
#include <unordered_map>

class LRUCache
{
public:
	// default constructor
	LRUCache();

	// constructor with vector's size
	LRUCache(int m_size);
	
	// destructor
	~LRUCache();

	// put new facility to cache
	void put(int key, int value);					
	
	// get facility from cache
	int get(int key);
		
	// print cache
	void print_cache();


private:
	// cache container
	int capacity;
	std::list<std::pair<int, int>> cache_list;
	std::unordered_map<int, std::list<std::pair<int, int>>::iterator> cache_map;
};


#endif // LRU_H
