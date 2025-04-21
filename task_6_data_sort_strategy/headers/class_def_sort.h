#pragma once

#include <vector> 
#include <functional>
#include "class_temp.h"

class DefaultSort : public SortStrategy<int>
{
public:
	void sort(std::vector<int>& data) const override;
};
