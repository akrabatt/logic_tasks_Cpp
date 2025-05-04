#include <iostream>
#include "../headers/class_rev_sort.h"

void ReverseSort::sort(std::vector<int>& data) const
{
	std::sort(data.begin(), data.end(), std::greater<int>());

}
