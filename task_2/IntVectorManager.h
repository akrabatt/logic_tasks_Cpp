#ifndef MANAGER_H
#define MANAGER_H

#include <vector>

class IntVectorManager
{
public:
	//constructor
	IntVectorManager();
	//destructor
	~IntVectorManager();

	// fill vector
	void fill(int start, int end);

	// print vector's nums
	void print();

	// delete even nums
	void remove_even();

private:
	std::vector<int> vec;
}; 

#endif
