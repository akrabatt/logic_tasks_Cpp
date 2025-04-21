#pragma once

#include <vector>
#include <functional>

template <typename T>
class SortStrategy
{
public:
	virtual ~SortStrategy() = default;
	virtual void sort(std::vector<T> &data) const = 0;
};
