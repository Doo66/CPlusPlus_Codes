/*@:C++中替换宏的方式*/

//#include <iostream>
//using namespace std;

////3类型重定义
//#define  Long long long
//typedef long long L;
//
//#define square_(x) ((x)*(x)) 
//
////1替换宏定义常量
//const int x = 100;
//enum un
//{
//	a = 100
//};
////2替换宏定义函数
//inline int square(int x)
//{
//	return x*x;
//}
//
//void Test()
//{
//	int i = 1;
//	int j = 1;
//	int ret = square(++i);
//	int res = square_(++j);
//	cout<<ret<<endl;
//	cout<<res<<endl;
//	cout<<sizeof(Long)<<endl;
//	cout<<sizeof(L)<<endl;
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}

//5使用模板来替换宏条件编译
#include <iostream>
using namespace std;

const int a = 1;
const int b = 2;

template <int T> 
void test()
{}

template<> void test<a>()
{
	cout<<"a"<<endl;
}
template<> void test<b>()
{
	cout<<"b"<<endl;
}

int main()
{
	//Test();
	test<a>();
	test<b>();
	system("pause");
	return 0;
}