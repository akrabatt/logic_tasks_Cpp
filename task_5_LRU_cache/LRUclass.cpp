#include <iostream>
#include <vector>
#include "LRUclass.h"

// constructors and destructors 
// ---------------------------------------------------------------------
LRUCache::LRUCache(){ std::cout << "Default constructor invoked\n"; }

LRUCache::LRUCache(int m_size) : capacity(m_size) 
{ 
	std::cout << "Constructor with params invoked\n";
}

LRUCache::~LRUCache() { std::cout << "Destructor is called\n"; }

//----------------------------------------------------------------------


int LRUCache::get(int key)
{
	if(cache_map.find(key) == cache_map.end()) { return -1; } // key isn't found

	// move element to begin list
	cache_list.splice(cache_list.begin(), cache_list, cache_map[key]);
	return cache_map[key]->second;
}

void LRUCache::put(int key, int value)
{
	// check is key already exist
	if(cache_map.find(key) != cache_map.end())
	{
		cache_list.splice(cache_list.begin(), cache_list, cache_map[key]);	
		cache_map[key]->second = value;
		return;
	}	

	// if cache is full, delete last used/touched element
	if(cache_list.size() == capacity)
	{
		int last_key = cache_list.back().first;
		cache_map.erase(last_key);
		cache_list.pop_back();
	}

	// add new element to begint of container
	cache_list.emplace_front(key, value);
	cache_map[key] = cache_list.begin();
}

void LRUCache::print_cache()
{
	std::cout << "list:\n";	

	for(auto &it : cache_list)
	{
		std::cout << "key: " << it.first << "value: " << it.second << "\n";
	}
}
