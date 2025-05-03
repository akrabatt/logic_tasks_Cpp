#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include "class_temp.h"

class NumberProcessor
{
private:
	std::unique_ptr<SortStrategy<int>> strategy;
	std::vector<int> numbers;

public:

	// set strategy for sorting
	void setStrategy(std::unique_ptr<SortStrategy<int> newStrategy>);

	// add number to vector
	void addNumber(int num);

	// sort vector
	void process();

	// vector's output
	void print() const;
};
