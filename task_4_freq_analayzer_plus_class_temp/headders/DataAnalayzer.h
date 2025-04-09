#ifndef DATA_ANALAYZER
#define DATA_ANALAYZER

#include <iostream>
#include <vector>

template <typename T>
class DataAnalyzer
{
public:
	// constructor 
	DataAnalayzer() { std::cout << "Base class Constructor invoked!\n"; }
	// destructor
	virtual ~DataAnalayzer() { std::cout << "Base class Destructor invoked!\n"; }

	// virtual method for fill data
	virtual void add_data(const T& value)

	// virtual method print frequency
	virtual void print_frequency() = 0;
};

#endif
