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

	// getters 
	int get_vec_size();

	// vec setter
	void put(int key, int value);


private:
	int vec_size;
	std::vector<int> vec(vec_size);
};


#endif // LRU_H
