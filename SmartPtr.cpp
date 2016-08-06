// 4. ʵ��һ���򵥵�����ָ�� class SmartPtr
//unique_ptr(һ�ַ�������ʵ��)
//shared_ptr(���Խ��й�ͬ����)
//weak_ptr(���Դ���ѭ������,ѭ������ʱ�����ü���������)
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