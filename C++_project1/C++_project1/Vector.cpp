//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void main()
//{
//	vector<int> vi;
//	for (int i = 0; i < 10; i++)
//	{
//		vi.push_back(i);
//	}
//
//	for (auto item:vi)
//	{
//		cout << item << " ";
//	}
//	cout << endl;
//	
//	vector<string> vs;
//	cout << "Please input three words" << endl;
//
//	for (int i = 0; i < 3; i++)
//	{
//		string s;
//		cin >> s;
//		vs.push_back(s);
//	}
//
//	for (auto item: vs)
//	{
//		cout << item << " ";
//	}
//	cout << endl;
//
//	cout << "int vector vi has " << vi.size() << " elements!" << endl;
//	
//	vi[5] = 3;
//	vi[6] = -1;
//	vi.push_back(10);
//
//	for (auto item : vi)
//	{
//		cout << item << " ";
//	}
//	cout << endl;
//
//	for (unsigned int i = 0; i < vi.size(); i++)
//	{
//		cout << vi[i] << " ";
//	}
//	cout << endl;
//
//	for (auto i = begin(vs); i != end(vs); i++)
//	{
//		cout << *i << " ";
//	}
//	cout << endl;
//
//	sort(vs.begin(), vs.end());
//	for (auto item : vs)
//	{
//		cout << item << " ";
//	}
//	cout << endl;
//
//	int threes = count(vi.begin(), vi.end(), 3);
//	cout << "Vi vector has " << threes << " elements with value 3" << endl;
//	int tees = count(begin(vs[0]), end(vs[0]), 't');
//	cout << "The first word has " << tees << " t's" << endl;
//
//	string sss = "new";
//	cout << sss[0] << endl;
//}