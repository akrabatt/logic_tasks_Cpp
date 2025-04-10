#include <unordered_map>
#include "../headders/StringAnalyzer.h"

StringAnalyzer::StringAnalyzer() { std::cout << "StrAnaly constructor invoked!\n"; }
StringAnalyzer::~StringAnalyzer() { std::cout << "StrAnaly destructor invoked!\n"; }

void StringAnalyzer::add_data(std::string value) { str_vec.push_back(value); }

void StringAnalyzer::print_frequency()
{
	std::unordered_map<std::string, int> map_str;

	for(const std::string &value : str_vec)
	{
		if(map_str.find(value) != map_str.end())
		{
			map_str[value]++;
		} else {
			map_str[value] = 1;
		}
	}

	for(auto &pair : map_str)
	{
		std::cout << "Char: " << pair.first << ", freq: " << pair.second << "\n";
	}
}
