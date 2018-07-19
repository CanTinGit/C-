#include "BinaryTreeClass.h"

void Solution::PreOrder(BinaryNode* T) {
	if (T->data!= NULL)
	{
		Visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

void Solution::InOrder(BinaryNode* T) {
	if (T->data != NULL)
	{
		PreOrder(T->lchild);
		Visit(T);
		PreOrder(T->rchild);
	}
}


void Solution::PostOrder(BinaryNode* T) {
	if (T->data != NULL)
	{
		PreOrder(T->lchild);
		PreOrder(T->rchild);
		Visit(T);
	}
}

void Solution::LevelOrder(BinaryNode* T) {
	std::queue<BinaryNode*> queue;
	queue.push(T);
	while (!queue.empty()) {
		BinaryNode *temp = queue.front();
		queue.pop();
		Visit(temp);
		if (T->lchild != nullptr);
		{
			queue.push(T->lchild);
		}
		if (T->rchild != nullptr);
		{
			queue.push(T->rchild);
		}
	}
}

int Solution::Visit(BinaryNode *T) {
	if (T->data != NULL)
	{
		return T->data;
	}
	return NULL;
}