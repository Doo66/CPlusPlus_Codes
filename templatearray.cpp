// 3. 实现一个简洁版模板类 class Array.
#include <iostream>
using namespace std;



template<class T>
class Array
{
	friend ostream& operator<<(ostream& os, const Array<T> a)
	{
		for(int i = 0; i<a._size; i++)
		{
			os<<a._arr[i];
		}
		return os;
	}
public:
	Array(const int sz = 0)
		:_size(sz)
		,_arr(new T[_size])
	{
		for(int i = 0; i<_size; i++)
		{
			_arr[i] = i;
		}
	}
	Array(const Array<T>& a)
		:_size(a._size)
		,_arr(new T[_size])
	{
		for(int i = 0; i<_size; i++)
		{
			_arr[i] = a._arr[i];
		}
	}
	Array<T>& operator=(const Array<T>& a)
	{
		_size = a._size;
		if(_arr != a._arr)
		{
			delete[] _arr;
			_arr = new T[_size];
			for(int i = 0; i<_size; i++)
			{
				_arr[i] = a._arr[i];
			}
		}
		return *this;
	}
	~Array()
	{
		if(_arr != NULL)
		{
			delete[] _arr;
			_arr = NULL;
		}
		_size = 0;
	}
public:
	T& operator[](const int index)
	{
		return _arr[index];
	}
private:
	int _size;
	T* _arr;
};

void test()
{
	Array<int> arr(10);
	for(int i = 0; i<10; i++)
	{
		arr[i] = i;
	}
	cout<<arr<<endl;
	Array<int> arr2(arr);
	cout<<arr2<<endl;
	Array<int> arr3 = arr2;
	cout<<arr3<<endl;
	int res = arr[6];
	cout<<res<<endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}