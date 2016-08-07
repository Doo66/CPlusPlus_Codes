//实现一个简单的多态

#include <iostream>
using namespace std;

class Person
{
public:
	virtual void BuyTickets()
	{
		cout<<"full fare..."<<endl;
	}
private:
	string _name;
};

class Student:public Person
{
public:
	void BuyTickets()
	{
		cout<<"half fare..."<<endl;
	}
private:
	string _name;
};

void who(Person& p)
{
	p.BuyTickets();
}

void test()
{
	Person p;
	Student s;
	who(p);
	who(s);
}
int main()
{
	test();
	system("pause");
	return 0;
}