#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// cannot convert int to string
//void print(std::string i)
//{
//	std::cout << i << " ";
//}

void print(int i)
{
	std::cout << i << " ";
}

bool odd(int i)
{
	return i % 2;
}

int main()
{
	std::vector<int> vi;
	vi.push_back(5);
	vi.push_back(11);
	vi.push_back(2);
	vi.push_back(7);

	std::for_each(vi.begin(), vi.end(), print);
	std::cout << std::endl;

	auto o = std::find_if(vi.begin(), vi.end(), odd);
	while(o != vi.end())
	{
		std::cout << *o << " ";
		o = std::find_if(++o, vi.end(), odd);
	}

	std::cout << std::endl;

	std::cout << "Sorting : ";
	std::sort(vi.begin(), vi.end());
	std::for_each(vi.begin(), vi.end(), print);
}