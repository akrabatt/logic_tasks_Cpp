#pragma once

#include <vector> 
#include <functional>
#include "class_temp.h"

class AbsoluteSort : public SortStrategy<int>
{
public:
	void sort(std::vector<int>& data) const override;
};


