//2. 实现一个简洁版 class String
//@:String 1.0
#include <iostream>
#include <string>
using namespace std;

class String
{
	friend ostream& operator<<(ostream& os, const String& s);
public:
	String(const char* str = "")
		:_str(new char[strlen(str)+1])
	{
		strcpy(_str, str);
	}
	String(const String& s)
		:_str(new char[strlen(s._str)+1])
	{
		strcpy(_str, s._str);
	}
	String& operator=(const String& s)
	{
		if(_str != s._str)
		{
			delete[] _str;
			_str = new char[strlen(s._str)+1];
			strcpy(_str, s._str);
		}
		return *this;
	}
	~String()
	{
		if(_str != NULL)
		{
			delete[] _str;
			_str = NULL;
		}
	}
private:
	char* _str;
};
ostream& operator<<(ostream& os, const String& s)
{
	os<<s._str;
	return os;
}

void Test()
{
	String s;
	cout<<s<<endl;
	String ss("aaaaaa");
	cout<<ss<<endl;
	String sss(ss);
	cout<<sss<<endl;
	String ssss = sss;
	cout<<sss<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}
//@:String 2.0
#include <iostream>
#include <string>
using namespace std;

class String
{
	friend ostream& operator<<(ostream& os, const String& s);
public:
	String(const char* str = "")
		:_str(new char[strlen(str)+1])
	{
		strcpy(_str, str);
	}
	String(const String& s)
		:_str(NULL)
	{
		String tmp(s._str);
		swap(_str, tmp._str);
	}
	String& operator=(String& s)
	{
		swap(_str, s._str);
		return *this;
	}
	~String()
	{
		if(_str != NULL)
		{
			delete[] _str;
			_str = NULL;
		}
	}
private:
	char* _str;
};
ostream& operator<<(ostream& os, const String& s)
{
	os<<s._str;
	return os;
}

void Test()
{
	String s;
	cout<<s<<endl;
	String ss("aaaaaa");
	cout<<ss<<endl;
	String sss(ss);
	cout<<sss<<endl;
	String ssss = sss;
	cout<<sss<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}