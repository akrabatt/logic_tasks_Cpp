#ifndef VECTOR
#define VECTOR

#include <iostream>
#include <vector>

class VectorAnalyzer : public DataAnalyzer<int>
{
public:
	
	// constructor 
	VectorAnalayzer();
	// destructor
	~VectorAnalayzer();

	// fill vector
	void add_data(const int &value) override;	

	// print friq
	void print_frequency() override;

private:
	std::vector<int> int_vec;
};

#endif
