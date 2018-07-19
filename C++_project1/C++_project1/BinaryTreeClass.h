#pragma once
#include <iostream>
#include <queue> 
//#include<deque>  deque (usually pronounced like "deck") is an irregular acronym of double-ended queue
struct BinaryNode
{
	int data;
	BinaryNode* lchild;
	BinaryNode* rchild;
};


class Solution 
{
public:
	void PreOrder(BinaryNode *T);
	void InOrder(BinaryNode *T);
	void PostOrder(BinaryNode *T);
	void LevelOrder(BinaryNode *T);
private:
	int Visit(BinaryNode *T);
};