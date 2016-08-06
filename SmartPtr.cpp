// 4. 实现一个简单的智能指针 class SmartPtr
//unique_ptr(一种防拷贝的实现)
//shared_ptr(可以进行共同管理)
//weak_ptr(可以打破循环引用,循环引用时，引用计数不增加)
#include <iostream>
using namespace std;

template<class T>
class SmartPtr
{
public:
	SmartPtr(T* ptr)
		:_ptr(ptr)
	{
		cout<<"SmartPtr()"<<endl;
	}
	~SmartPtr()
	{
		if(_ptr)
			cout<<"~SmartPtr()"<<endl;
			delete _ptr;
		
	}
public:
	T* operator*()
	{
		return *_ptr;
	}
	T& operator->()
	{
		return _ptr;
	}
protected:
	SmartPtr(SmartPtr<T>& sp);
	SmartPtr<T>& operator=(SmartPtr<T>& sp);
private:
	T* _ptr;
};
void test()
{
	int* str = new int(10);
	SmartPtr<int> sp(str);
}
int main()
{
	test();
	system("pause");
	return 0;
}