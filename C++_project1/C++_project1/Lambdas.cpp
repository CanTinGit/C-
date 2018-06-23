#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

void print(int i)
{
	std::cout << i << " ";
}

int main()
{
	std::vector<int> vi;
	vi.push_back(5);
	vi.push_back(11);
	vi.push_back(2);
	vi.push_back(7);

	//Old way to output all elements of a vector
	std::for_each(vi.begin(), vi.end(), print);
	std::cout << std::endl;

	//New way with Lambdas
	std::for_each(vi.begin(), vi.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl;

	//Transform a vector into another
	std::vector<int> v2;
	std::transform(vi.begin(), vi.end(), std::back_inserter(v2), [](int n) {return n * n; });
	std::for_each(v2.begin(), v2.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl;

	//Transform a vector into another vector with different type
	std::vector<double> dv;
	std::transform(vi.begin(),vi.end(),std::back_inserter(dv),[](int m)->double
	{
		if (m%2 ==0)
		{
			return m * m;
		}
		else
		{
			return m / 2;
		}
	});

	std::for_each(dv.begin(), dv.end(), [](double i) {std::cout << i << " "; });
	std::cout << std::endl;

	//Capturing by value explicitly [x,y]
	int x = 3;
	int y = 7;
	std::cout << "printing elements between " << x << " and " << y << std::endl;

	std::for_each(vi.begin(), vi.end(), [x,y](int i)
	{
		if (i>x && i<y)
		{
			std::cout << i << " ";
		}
	});
	std::cout << std::endl;
	std::for_each(vi.begin(), vi.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl;
	std::cout << "x: " << x << " y: " << y << std::endl;

	//Capturing by value explicitly [=]
	x = 1;
	y = 7;
	std::cout << "printing elements between " << x << " and " << y << std::endl;

	std::for_each(vi.begin(), vi.end(), [=](int i)
	{
		if (i>x && i<y)
		{
			std::cout << i << " ";
		}
	});
	std::cout << std::endl;
	std::for_each(vi.begin(), vi.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl;
	std::cout << "x: " << x << " y: " << y << std::endl;

	//Capturing by value explicitly [=] with reference
	x = 1;
	y = 1;

	//Without mutable, x,y will be const and cannot be changed
	std::for_each(vi.begin(), vi.end(), [=](int& i) mutable 
	{
		const int old = i;
		i *= 2;
		x = y;
		y = old;
	});
	std::cout << std::endl;
	std::for_each(vi.begin(), vi.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl;
	std::cout << "x: " << x << " y: " << y << std::endl;

	//Capturing by value explicitly [&x,&y] with reference
	x = 1;
	y = 1;

	//Without mutable, x,y will be const and cannot be changed
	std::for_each(vi.begin(), vi.end(), [&x,&y](int& i) mutable
	{
		const int old = i;
		i *= 2;
		x = y;
		y = old;
	});
	std::cout << std::endl;
	std::for_each(vi.begin(), vi.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl;
	std::cout << "x: " << x << " y: " << y << std::endl;

	//Capturing by value explicitly [&x,&y] with reference
	x = 1;
	y = 1;

	//Without mutable, x,y will be const and cannot be changed
	std::for_each(vi.begin(), vi.end(), [&](int& i) mutable
	{
		const int old = i;
		i *= 2;
		x = y;
		y = old;
	});
	std::cout << std::endl;
	std::for_each(vi.begin(), vi.end(), [](int i) {std::cout << i << " "; });
	std::cout << std::endl;
	std::cout << "x: " << x << " y: " << y << std::endl;

	return 0;
}