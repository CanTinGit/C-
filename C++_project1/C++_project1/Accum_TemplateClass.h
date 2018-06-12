#pragma once
template <class  T>
class Accum{
public:
	Accum(T start) : total(start) {}; // total = start
	T operator+=(const T& t) { return total = total + t; };
	T GetTotal() { return total; };
private:
	T total;
};

template <>
class Accum<Person> {
public:
	Accum(int start) : total(start) {}; // total = start
	int operator+=( Person& t) { return total = total + t.GetNumber(); };
	int GetTotal() { return total; };
private:
	int total;
};
