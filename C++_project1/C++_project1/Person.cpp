#include "Person.h"
using namespace std;


Person::Person(std::string first, std::string last, int arb)
{
	firstname = first;
	lastname = last;
	arbitrary = arb;
	pResource = nullptr;
	cout << "Constructing Person! " << firstname << " " << lastname << " " << arbitrary << endl;
}


Person::~Person()
{
	//delete pResource;
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

//std::string Person::TestConst() const  
//{
//	firstname = "NIubi";
//}

void Person::AddResource() 
{
	pResource.reset();
	pResource = make_shared<Resource>("Resource for " + GetName());
}

string Person::GetResourceName() const 
{
	if (pResource)
	{
		return pResource->GetName();
	}
	else
	{
		return "";
	}
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