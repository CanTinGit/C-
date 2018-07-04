#include "StackClass.h"

Stack::Stack() 
{
	top = -1;
}

bool Stack::IsEmpty()
{
	if (top == -1) return true;
	else return false;
}

bool Stack::Push(int x)
{
	if (top = Max_Size-1)
	{
		return false;
	}
	else
	{
		data[++top] = x;
	}
}

bool Stack::Pop(int &x)
{
	if (top == -1)
	{
		return false;
	}
	else
	{
		x = data[top--];
	}
}

bool Stack::GetTop(int &x)
{
	if (top == -1)
	{
		return false;
	}
	else
	{
		x = data[top];
	}
}

int Stack::Size()
{
	return top + 1;
}