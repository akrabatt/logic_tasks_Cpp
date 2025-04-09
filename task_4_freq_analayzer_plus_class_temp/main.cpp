#include <iostream>
#include "./headders/VectorAnalyzer.h"
#include "./headders/StringAnalyzer.h"
#include "./headders/DataAnalyzer.h"


int main()
{
	DataAnalyzer<int> *intAnalyzer = new VectorAnalyzer();
	intAnalyzer->add_data(1);
	intAnalyzer->add_data(2);
	intAnalyzer->add_data(3);
	intAnalyzer->add_data(5);
	intAnalyzer->add_data(5);
	intAnalyzer->add_data(1);
	intAnalyzer->add_data(8);
	intAnalyzer->add_data(2);
	intAnalyzer->print_frequency();

	DataAnalyzer<std::string> *charAnalyzer = new StringAnalyzer();
	charAnalyzer->add_data("a");
	charAnalyzer->add_data("a");
	charAnalyzer->add_data("b");
	charAnalyzer->add_data("c");
	charAnalyzer->add_data("z");
	charAnalyzer->add_data("a");
	charAnalyzer->add_data("b");
	charAnalyzer->add_data("g");
	charAnalyzer->print_frequency();
	
	delete intAnalyzer;
	delete charAnalyzer;
}
