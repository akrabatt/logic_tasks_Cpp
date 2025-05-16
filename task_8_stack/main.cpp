#include <iostream>
#include <vector>
#include "Stack.h"

int main()
{
	Stack st_obj;
	std::vector<char> brackets = { '(', ')', '(', '{', '}', ')', '(', ')' };

	bool result = st_obj.checkBracketStackMethod(brackets);
	std::cout << "result: " << result << std::endl;
}
