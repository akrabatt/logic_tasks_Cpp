#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "IntVectorManager.h"

IntVectorManager::IntVectorManager() { std::cout << "Constructor is called\n"; }
IntVectorManager::~IntVectorManager() { std::cout << "Destructor is called\n"; }

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
	size_t i = 0;
	for(auto &num : vec)
	{
		std::cout << "element" << i << ":" << num << "\n";
		i++;
	}
}

void IntVectorManager::remove_even()
{
	// lyambda function check is num even
	auto is_even = [](int n) { return n % 2 == 0; };
	
	// replacind even nums in the end
	auto it = std::remove_if(vec.begin(), vec.end(), is_even);	
		
	std::cout << "before phys remove even nums form vec\n";
	for(auto num : vec) 
	{ 	
		std::cout << num << " ";
	}
	std::cout << "\n";

	// physical delet even nums
	vec.erase(it, vec.end());
}

int IntVectorManager::get_min()
{
	if(vec.empty()) { std::cout << "Vector is empty!\n"; return 0; }
	auto min_it = std::min_element(vec.begin(), vec.end());
	
	return *min_it;
}

int IntVectorManager::get_max()
{
	if(vec.empty()) { std::cout << "Vector is empty!\n"; return 0; }
	auto max_it = std::max_element(vec.begin(), vec.end());
	
	return *max_it;
}

float IntVectorManager::get_average()
{
	int size = vec.size();
	int sum = std::accumulate(vec.begin(), vec.end(), 0);

	return static_cast<float>(sum) / static_cast<float>(size);
}
