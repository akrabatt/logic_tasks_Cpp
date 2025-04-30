#include "../headers/class_rev_sort.h"

void ReverseSort::sort(std::vector<int>& data)
{
	std::sort(data.begin(), data.end(), std::greater<int>());

	for(const auto& num : data)
	{
		std::cout << num << " ";
	}
}
