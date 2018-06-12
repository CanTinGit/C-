#include "Person.h"
using namespace std;


Person::Person(std::string first, std::string last, int arb)
{
	firstname = first;
	lastname = last;
	arbitrary = arb;
	cout << "Constructing Person! " << firstname << " " << lastname << " " << arbitrary << endl;
}


Person::~Person()
{
	cout << "Destructing Person! " << firstname << " " << lastname << " " << arbitrary << endl;
}

bool Person::operator<  (Person& p)
{
	return arbitrary < p.arbitrary;
}

bool Person::operator< (int i)
{
	return arbitrary < i;
}

//bool operator< (int i, Person& p)
//{
//	return i < p.GetNumber();
//}


//Friend//
bool operator< (int i, Person& p)
{
	return i < p.arbitrary;
}