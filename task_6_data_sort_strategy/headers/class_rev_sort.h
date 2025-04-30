#pragma once

#include <vector> 
#include <functional>
#include <algorithm>
#include "class_temp.h"


/**
* @brief sort by absolute count
*/
class ReverseSort : public SortStrategy<int>
{
public:
	void sort(std::vector<int>& data) const override;
};


