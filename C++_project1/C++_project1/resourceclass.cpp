#include "resourceclass.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Resource::Resource(string n):name(n)
{
	cout << "Construct: " << name << endl;
}

Resource::~Resource(void) 
{
	cout << "Deconstruct: " << name << endl;
}