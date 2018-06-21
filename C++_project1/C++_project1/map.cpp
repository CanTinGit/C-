//#include <iostream>
//#include <string>
//#include <map>
//#include "Person.h"
//
//using namespace std;
//
//int main()
//{
//	Person kate("Kate", "niubi", 123);
//	Person lihua("Li", "Hua", 456);
//
//	map<int, Person> people;
//	people[kate.GetNumber()] = kate;
//	people[lihua.GetNumber()] = lihua;
//
//	Person liming("Li", "Ming", 124);
//	std::pair<int, Person> limingP(liming.GetNumber(),liming);
//	people.insert(limingP);
//
//	for (auto i = people.begin(); i != people.end(); i++)
//	{
//		cout << i->first << " " << i->second.GetName() << ".";
//	}
//
//	cout << endl;
//
//	auto found = people.find(123);
//	cout << found->first << " " << found->second.GetName() << "."<<endl;
//
//	//Running error
//	//auto found = people.find(666);
//	//cout << found->first << " " << found->second.GetName() << "." << endl;
//
//	std::string name = people[124].GetName();
//	cout << name << endl;
//
//	// No error, name = "";
//	//std::string name = people[666].GetName();
//	//cout << name << endl;
//}