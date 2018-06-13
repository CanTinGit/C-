////This file is to show examples of pointers, references and memory management
//#include "Person.h"
//#include "Tweeter.h"
//#include <iostream>
//
//using namespace std;
//
//void main()
//{
//	Person lihua("Li", "Hua", 123);
//	Person lilei("Li", "Lei", 789);
//	Person& rLihua = lihua;
//	Person* pLihua = &lihua;
//
//	//rLihua = lilei; Wrong - can not change the reference after initializing
//	//pLihua = &lilei; Right - Can change the pointer
//
//	rLihua.SetNumber(456);
//	cout << lihua.GetNumber() << endl;
//
//	(*pLihua).SetNumber(1234); // legitimate
//	pLihua->SetNumber(7890); // Short
//
//	//int& badReference;
//	//badReference = 3;
//
//	//int* badPointer;
//	//int* badPointer = nullptr;
//	//*badPointer = 3;
//	//cout << badPointer;
//
//
//	///////////////////////////////////////////
//	////////////Const with indirection/////////
//	//////////////////////////////////////////
//
//	int i = 3;
//	int j = 4;
//	int *pI = &i;
//	//int *pII = &pI;		wrong because of type safety
//	//int pI = &lihua;		wrong because of type safety
//
//	int const *pCI = pI; // pointer to a const
//	//*pCI = 4;       Wrong because a pointer to a const, you cannot change the value of target
//	pCI = &j;
//	j = *pCI;
//
//	int * const cPI = pI; // const pointer
//	*cPI = 4;
//	//cPI = &j;		Wrong because you cannot change const pointer to point to somewhere else
//
//	int const * const crazy = pI; //const pointer to a const
//	//crazy = &j;
//	//*crazy = 4;
//	j = *crazy;
//}
