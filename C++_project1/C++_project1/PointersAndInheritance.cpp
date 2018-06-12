#include "Person.h"
#include "Tweeter.h"
#include <iostream>

using namespace std;

void main() 
{
	Person* lihua = new Person("Li", "Hua", 123);
	Tweeter* lilei = new Tweeter("Li", "Lei", 456, "@LiLei");
	
	Person* pLilei = lilei;
	//Tweeter* plihua = lihua;    Wrong 

	cout << lihua->GetName() << endl;
	cout << lilei->GetName() << endl;
	cout << pLilei->GetName() << endl; // output Person::GetName() without tweeter handle because it's not virtual, you can change it to virtual to see the different result

	delete pLilei;
}