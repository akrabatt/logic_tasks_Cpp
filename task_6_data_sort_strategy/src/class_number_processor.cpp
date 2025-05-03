#include <utility>
#include "../headers/class_number_processor.h"


void NumberProcessor::setStrategy(std::unique_ptr<SortStrategy<int> newStrategy)
{
	strategy = std::move(newStrategy);
}

void NumberProcessor::addNumber(int num)
{
	numbers.push_back(num);
}

void NumberProcessor::print() const
{
	for(auto& num : numbers)
	{
		std::cout << num << " ";
	}
	std::cout << "\n";
}

void NumberProcessor::process()
{
	strategy->sort(numbers);
}
