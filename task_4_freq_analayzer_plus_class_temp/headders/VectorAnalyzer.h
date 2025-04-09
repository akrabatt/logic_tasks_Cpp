#ifndef VECTOR
#define VECTOR

#include <iostream>
#include <vector>
#include "./DataAnalyzer.h"

class VectorAnalyzer : public DataAnalyzer<int>
{
public:
	
	// constructor 
	VectorAnalyzer();
	// destructor
	~VectorAnalyzer();

	// fill vector
	void add_data(int value) override;	

	// print friq
	void print_frequency() override;

private:
	std::vector<int> int_vec;
};

#endif
