#ifndef STRING
#define STRING

#include <iostream>
#include <vector>

class StringAnalyzer : public DataAnalyzer<char>
{
public:
	
	// constructor 
	StringAnalyzer();
	// destructor
	~StringAnalyzer();

	// fill vector
	void add_data(const char &value) override;

	// print friq
	void print_frequency() override;

private:
	std::vector<char> int_vec;
};

#endif
