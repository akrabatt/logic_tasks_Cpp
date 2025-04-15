#ifndef LRU_H
#define LRU_H


class LRUCache
{
public:
	// default constructor
	LRUCache();

	// constructor with vector's size
	LRUCache(int m_size);
	
	// destructor
	~LRUCache();

	void put(int key, int value);				// add value to LRU cache	
	
	int get(int key);


private:
	// cache container
	int map_size;
	std::list<std::pair<int, int>> chache_list;
	std::unordered_map<int, std::list<std::pair<int, int>>::iterator> cache_map;
};


#endif // LRU_H
