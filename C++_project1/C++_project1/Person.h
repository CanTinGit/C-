#pragma once
#include<string>
#include<memory>
#include<iostream>
#include "resourceclass.h"

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrary;
	std::shared_ptr<Resource> pResource;
public:
	Person(std::string first, std::string last, int arb);
	virtual ~Person();
	bool operator < (Person& p); //using reference is quicker
	bool operator < (int i); 
	int GetNumber() { return arbitrary; }
	friend bool operator < (int i, Person& p);
	virtual std::string GetName() const { return firstname + " " + lastname; }
	void SetFirstName(std::string first) { firstname = first; }
	void SetNumber(int number) { arbitrary = number; }
	//std::string TestConst() ;
	void AddResource();
	std::string GetResourceName() const;
};

bool operator < (int i, Person& p);
