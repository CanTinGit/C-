#include <string>
#include <iostream>
#include "Person.h"
#include "Accum_TemplateClass.h"

using namespace std;

//void main() 
//{
//	Accum<int> integers(0);
//	integers += 3;
//	integers += 7;
//	cout << integers.GetTotal() << endl;
//
//	Accum<string> strings("");
//	strings += "Hello, ";
//	strings += "World!";
//	cout << strings.GetTotal() << endl;
//
//	//Wrong because person don't have operator + 
//	//Person start("", "", 0);
//	//Accum<Person> persons(start);
//	//Person p1("Li", "Hua", 100);
//	//Person p2("Li", "Ming", 200);
//	//persons += p1;
//	//persons += p2;
//	//cout << persons.GetTotal().GetNumber() << endl;
//
//	//Right one
//	Accum<Person> persons(0);
//	Person p1("Li", "Hua", 100);
//	Person p2("Li", "Ming", 200);
//	persons += p1;
//	persons += p2;
//	cout << persons.GetTotal() << endl;
//}