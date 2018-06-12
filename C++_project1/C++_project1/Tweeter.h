#pragma once
#include "Person.h"
class Tweeter :
	public Person
{
private:
	std::string tweeterHandle;
public:
	Tweeter(std::string first, std::string last, int arb, std::string tweetHandle);
	~Tweeter();
	std::string GetName() const;
};

