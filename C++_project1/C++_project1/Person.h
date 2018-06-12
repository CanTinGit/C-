#pragma once
#include<string>
#include<iostream>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrary;
public:
	Person(std::string first, std::string last, int arb);
	~Person();
	bool operator < (Person& p); //using reference is quicker
	bool operator < (int i); 
	int GetNumber() { return arbitrary; }
	friend bool operator < (int i, Person& p);
	std::string GetName() const { return firstname + " " + lastname; }
	void SetFirstName(std::string first) { firstname = first; }
};

bool operator < (int i, Person& p);
