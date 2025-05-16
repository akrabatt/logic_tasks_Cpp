#include <stack>
#include "Stack.h"

bool Stack::checkBracketStackMethod(std::vector<char>& brackets)
{
	std::stack<char> artifact;
	for(auto& it : brackets)
	{
		if((artifact.empty()) && ((it == ca) || (it == cc))) { return false; }
		if(artifact.empty()) { artifact.push(it); continue; }
		if((artifact.top() == oa && it == ca) || (artifact.top() == oc && it == cc))
		{
			artifact.pop();
		} else {
			artifact.push(it);
		}
	}

	return artifact.empty();
}
