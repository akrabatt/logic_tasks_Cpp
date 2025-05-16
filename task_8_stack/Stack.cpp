#include <stack>
#include "Stack.h"

bool Stack::checkBracketStackMethod(std::vector<char>& brackets)
{
	std::stack<char> artifact;
	for(auto& it : brackets)
	{
		if((artifact.empty()) && ((it == ca) || (it == cc))) { return false; }
		if(artifact.empty()) { artifact.push(it); continue; }
		
			

	}

	return artifact.empty();
}
