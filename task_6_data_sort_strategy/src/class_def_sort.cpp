#include <iostream>
#include "../headers/class_def_sort.h"

void DefaultSort::sort(std::vector<int>& data) const
{
	std::sort(data.begin(), data.end());
}
