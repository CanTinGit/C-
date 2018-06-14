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
	Tweeter* pt = static_cast<Tweeter*>(p);


}