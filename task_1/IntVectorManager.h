#ifndef VEC_CLASS
#define VEC_CLASS

// #include <iostream>
#include <vector>

class IntVectorManager
{
public:
	// constructor
	IntVectorManager();
	// destructor 
	~IntVectorManager();
	
	/**
	* @param start
	* @param end
	*/
	void fill(int start, int end);

	/**
	* print vectors content
	*/
	void print();
	
private:
	std::vector<int> vec;	
};

#endif
