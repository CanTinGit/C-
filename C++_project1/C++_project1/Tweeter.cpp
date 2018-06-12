#include "Tweeter.h"
using namespace std;


Tweeter::Tweeter(std::string first, std::string last, int arb, std::string tweetHandle) : Person(first,last,arb), tweeterHandle(tweetHandle)
{
	cout << "Constructing Tweeter! " << tweeterHandle << " " << endl;
}


Tweeter::~Tweeter()
{
	cout << "Destructing Tweeter! " << tweeterHandle << endl;
}

std::string Tweeter::GetName() const
{
	return Person::GetName() + " " + tweeterHandle;
}

