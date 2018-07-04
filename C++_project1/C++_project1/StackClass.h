#pragma once
#define Max_Size 50
class Stack
{
private:
	int data[Max_Size] ;
	int top;
public:
	Stack();
	bool IsEmpty();
	bool Push(int);
	bool Pop(int &);
	bool GetTop(int &);
	int Size();
};