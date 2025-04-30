#pragma once

#include <vector> 
#include <functional>
#include <algorithm>
#include "class_temp.h"

/**
* @brief sorе in ascending order
*/
class DefaultSort : public SortStrategy<int>
{
public:
	void sort(std::vector<int>& data) const override;
};
