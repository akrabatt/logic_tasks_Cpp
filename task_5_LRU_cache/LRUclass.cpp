#include <iostream>
#include <vector>
#include "LRUCache.h"

// constructors and destructors 
// ---------------------------------------------------------------------
LRUCache::LRUCache(){ std::cout << "Default constructor invoked\n"; }

LRUCache::LRUCache(int m_size) : m_size(map_size) 
{ 
	std::cout << "Constructor with params invoked, vector's size: " << vec_size << "\n";
}

LRUCache::~LRUCache() { std::cout << "Destructor is called\n" }

//----------------------------------------------------------------------

// getters
int LRUCache::get_map_size() { return map_size; }



// setters
void LRUCache::put(int key, int value)
{
	
	map.insert(key, value);
}
