#include "Person.h"
#include "Tweeter.h"
#include "resourceclass.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void main()
{
	Tweeter lihuacons("Li", "Hua", 456, "@lihuaCN");
	Person* p = &lihuacons;
	//Tweeter* pt = (Tweeter*)p; C Style cast
	Tweeter* pt = static_cast<Tweeter*>(p); // static cast example, when you are sure which type the pointer points to, use static_cast
	cout << pt->GetName() << endl;

	//Example of dynamic_cast
	Resource r("local");
	Tweeter *pt2;
	cout << "Use Resource or Tweeter?" << endl;
	std::string answer;
	cin >> answer;
	if (answer == "r")
	{
		pt2 = dynamic_cast<Tweeter*>(&r);
	}
	else
	{
		pt2 = dynamic_cast<Tweeter*>(p);
	}

	if (pt2)
	{
		cout << pt2->GetName() << endl;
	}
	else
	{
		cout << "Null" << endl;
	}
}