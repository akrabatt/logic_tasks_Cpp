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

	// getters 
	int get_map_size(); 			// get map's capacity
	std::pair get_fresh_val();		// get current frash value
	std::pair get_unfresh_val();	// get current unfrash value

	// vec setter
	void put(int key, int value);				// add value to LRU cache	
	void set_fresh_val(std::pair fresh);		// set fresh facility from LRUChache
	void set_unfresh_val(std::pair unfresh);	// set unfresh facility from LRUCache


private:
	// cache container
	int map_size;
	std::unordered_map<int, int> map;

	// current bordering values
	std::pair<int, int> fresh_val;
	std::pair<int, int> unfresh_val;
};


#endif // LRU_H
