#include <unordered_map>
#include "../headders/VectorAnalyzer.h"


VectorAnalyzer() { std::cout << "VecAnaly constructor invoked!\n"; }
~vectorAnalyzer() { std::cout << "VecAnaly destructor invoked!\n"; }

VectorAnalyzer::add_data(int value) { int_vec.push_back(value); }

VecotorAnalyzer::print_frequency()
{
	std::unordered_map<std::string, int> map_int;
	
	for(const int &value : int_vec)
	{
		std::string var = std::to_string(value);
		// map find
		if(map_int.find(var) != map_int.end())	
		{
			map_int[str_value]++;
		} else {
			map_int[str_value] = 1;
		}
	}

	for(auto &pair : map_int)
	{
		std::cout << "Number: " << pair.first << ", freq: " << pair.second << "\n";
	}
}

