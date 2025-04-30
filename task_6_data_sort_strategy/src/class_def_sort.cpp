#include <vector>
#include <functional>
#include <algorithm>

void DefaultSort::sort(std::vector<int>& data)
{
	std::sort(data.begin(), data.end());
	
	for(const auto& num : data)
	{
		std::cout << num << " ";
	}
}
