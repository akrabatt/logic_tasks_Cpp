#include <unordered_map>
#include "../headders/VectorAnalyzer.h"


VectorAnalyzer::VectorAnalyzer() { std::cout << "VecAnaly constructor invoked!\n"; }
VectorAnalyzer::~VectorAnalyzer() { std::cout << "VecAnaly destructor invoked!\n"; }

void VectorAnalyzer::add_data(int value) { int_vec.push_back(value); }

void VectorAnalyzer::print_frequency()
{
	std::unordered_map<std::string, int> map_int;
	
	for(const int &value : int_vec)
	{
		std::string var = std::to_string(value);
		// map find
		if(map_int.find(var) != map_int.end())	
		{
			map_int[var]++;
		} else {
			map_int[var] = 1;
		}
	}

	for(auto &pair : map_int)
	{
		std::cout << "Number: " << pair.first << ", freq: " << pair.second << "\n";
	}
}

