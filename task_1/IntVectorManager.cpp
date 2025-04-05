#include <iostream>
#include <vector>
#include "IntVectorManager.h"

IntVectorManager::IntVectorManager() { std::cout << "Constructor called\n"; }
IntVectorManager::~IntVectorManager() { std::cout << "Destructor called\n"; }

void IntVectorManager::fill(int start, int end)
{
	if(start > end) 
	{
		 throw std::invalid_argument("Error: start must be less than or equal to end\n"); 
	}

	int size = end - start + 1;
	
	vec.resize(size);
	int i = 0;	
	for(auto &num : vec) 
	{
		num = start + i;
		i++;
	}
}

void IntVectorManager::print()
{
	int i = 0;
	for(auto &num : vec)
	{
		std::cout << "element" << i << ":" << num << "\n";
		i++;
	}
}
