#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include <string>
#include<memory>

using std::string;
using std::cout;
using std::endl;
using std::shared_ptr;

int Dummy(Person p) { return p.GetNumber(); }

void main()
{
	Person lihua("Li", "Hua",123);
	Person& rLihua = lihua;
	Person* pLihua = &lihua;

	Tweeter lihuacons("Li", "Hua", 456, "@lihuaCN");
	Person* pLihuacons = &lihuacons;
	Person& rpLihuacons = lihuacons;
	Tweeter& rtLihuacons = lihuacons;

	//Change the getname in .h to virtual to see the difference
	cout << rLihua.GetName() << endl;
	cout << pLihua->GetName() << endl;
	cout << lihuacons.GetName() << endl; //print with handle(@lihuaCN)
	cout << rpLihuacons.GetName() << endl; //without print because it call the base class function
	cout << rtLihuacons.GetName() << endl;  //print with handle(@lihuaCN)
	cout << pLihuacons->GetName() << endl;  //without print because it call the base class function

	//Mark the ~Person virtual, if not it won't call ~Tweeter, when you intialize something that need to be delete in ~Tweeter, it will cause some problems.
	Person* someone = new Tweeter("Someone", "Else", 789, "@SomeOne");
	cout << someone->GetName() << endl;
	delete someone;

	///////////Slicing////////////////
	shared_ptr<Person> spLihua = std::make_shared<Tweeter>("Lihua", "xiaohao", 999, "@XiaoHao");
	cout << spLihua->GetName() << endl;

	//lihuacons = lihua; Wrong
	lihua = lihuacons;
	cout << lihua.GetName() + " ";
	cout << lihua.GetNumber() << endl;
	
	int x;
	x = Dummy(lihua);
	x = Dummy(lihuacons);
}