#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Person.h"

using namespace std;

void main()
{
	// Vector of Class
	vector<Person> vp;
	Person kate("Kate", "niubi", 123);
	Person lihua("Li", "Hua", 456);

	vp.push_back(kate);
	vp.push_back(lihua);

	//Different way to output the class value
	for (auto i =vp.begin(); i != vp.end(); i++)
	{
		cout << i->GetName() << endl;
	}

	// Vector of Int
	vector<int> vi;
	for (int i = 0; i < 10; i++)
	{
		vi.push_back(i);
	}

	for (auto item:vi)
	{
		cout << item << " ";
	}
	cout << endl;

	//Another way to output all elements of the vector
	for (auto i = vi.begin(); i != vi.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//Reverse output
	for (auto i = vi.rbegin(); i != vi.rend(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	// Vector of String
	vector<string> vs;
	cout << "Please input three words" << endl;

	for (int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;
		vs.push_back(s);
	}

	for (auto item: vs)
	{
		cout << item << " ";
	}
	cout << endl;

	// Vector Size
	cout << "int vector vi has " << vi.size() << " elements!" << endl;
	
	vi[5] = 3;
	vi[6] = -1;
	vi.push_back(10);

	for (auto item : vi)
	{
		cout << item << " ";
	}
	cout << endl;

	for (unsigned int i = 0; i < vi.size(); i++)
	{
		cout << vi[i] << " ";
	}
	cout << endl;

	for (auto i = begin(vs); i != end(vs); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	// Vector sort
	sort(vs.begin(), vs.end());
	for (auto item : vs)
	{
		cout << item << " ";
	}
	cout << endl;

	// Vector count
	int threes = count(vi.begin(), vi.end(), 3);
	cout << "Vi vector has " << threes << " elements with value 3" << endl;
	int tees = count(begin(vs[0]), end(vs[0]), 't');
	cout << "The first word has " << tees << " t's" << endl;


}