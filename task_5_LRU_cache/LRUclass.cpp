#include <iostream>
#include <vector>
#include "LRUCache.h"

// constructors and destructors 
// ---------------------------------------------------------------------
LRUCache::LRUCache(){ std::cout << "Default constructor invoked\n"; }

LRUCache::LRUCache(int v_size) : vec_size(v_size), vec(v_size) 
{ 
	std::cout << "Constructor with params invoked, vector's size: " << vec_size << "\n";
}

LRUCache::~LRUCache() { std::cout << "Destructor is called\n" }

//----------------------------------------------------------------------

// getters
int LRUCache::get_vec_size() { return vec_size; }



// setters
void LRUCache::put(int key, int value)
{
	vec.insert(vec.begin() + key, value);
}
