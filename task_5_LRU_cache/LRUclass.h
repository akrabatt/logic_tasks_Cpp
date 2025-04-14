#ifndef LRU_H
#define LRU_H

class LRUCache
{
public:
	// default constructor
	LRUCache();

	// constructor with vector's size
	LRUCache(int v_size);
	
	// destructor
	~LRUCache();


private:
	int vec_size;
	std::vector<int> vec(vec_size);
};


#endif // LRU_H
