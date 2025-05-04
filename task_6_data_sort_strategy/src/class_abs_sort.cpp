#include <iostream>
#include "../headers/class_abs_sort.h"

void AbsoluteSort::sort(std::vector<int>& data) const
{
	std::sort(data.begin(), data.end(), 
			  [](int a, int b){ return std::abs(a) < std::abs(b);});
	
}
