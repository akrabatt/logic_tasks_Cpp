#include <iostream>
#include "headers/class_temp.h"
#include "headers/class_number_processor.h"
#include "headers/class_abs_sort.h"
#include "headers/class_def_sort.h"
#include "headers/class_rev_sort.h"

int main()
{
	NumberProcessor sort_machine;	
	
	// default sort
	sort_machine.addNumber(5);
	sort_machine.addNumber(3);
	sort_machine.addNumber(8);
	sort_machine.addNumber(-3);
	sort_machine.addNumber(7);
	sort_machine.addNumber(2);
	sort_machine.addNumber(-6);
	// print before sort
	std::cout << "Before default sorte: ";
	sort_machine.print();	
	// set default strategy
	sort_machine.setStrategy(std::make_unique<DefaultSort>());
	sort_machine.process();
	// print after default sorting
	std::cout << "After default sorte: ";
	sort_machine.print();

	// set revers strategy
	sort_machine.setStrategy(std::make_unique<ReverseSort>());
	sort_machine.process();
	// print after default sorting
	std::cout << "After reverse sorte: ";
	sort_machine.print();

	// set absolute strategy
	sort_machine.setStrategy(std::make_unique<AbsoluteSort>());
	sort_machine.process();
	// print after default sorting
	std::cout << "After Absolute sorte: ";
	sort_machine.print();
}
