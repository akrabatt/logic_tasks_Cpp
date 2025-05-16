#include <iostream>
#include <vector>

class Stack
{
private:
	const char oa = '(';
	const char ca = ')';
	const char oc = '{';
	const char cc = '}';
public:
	bool checkBracketStackMethod(std::vector<char>& brackets);
};
