#pragma once

#include <vector> 
#include <functional>
#include <cmath>
#include "class_temp.h"

/**
* @brief sort in descending order
*/
class AbsoluteSort : public SortStrategy<int>
{
public:
	void sort(std::vector<int>& data) const override;
};


