#ifndef STRING
#define STRING

#include <iostream>
#include <vector>
#include "./DataAnalyzer.h"

class StringAnalyzer : public DataAnalyzer<std::string>
{
public:
	
	// constructor 
	StringAnalyzer();
	// destructor
	~StringAnalyzer();

	// fill vector
	void add_data(std::string value) override;

	// print friq
	void print_frequency() override;

private:
	std::vector<std::string> str_vec;
};

#endif
