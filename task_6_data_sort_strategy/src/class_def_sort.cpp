#include "../headers/class_def_sort.h"

void DefaultSort::sort(std::vector<int>& data)
{
	std::sort(data.begin(), data.end());
	
	for(const auto& num : data)
	{
		std::cout << num << " ";
	}
}
