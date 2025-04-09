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

	// gettre - get min elem
	int get_min();

	// getter - get max elem
	int get_max();

	// get average val
	float get_average();

private:
	std::vector<int> vec;
}; 

#endif
