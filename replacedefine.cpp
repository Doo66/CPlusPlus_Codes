/*@:C++���滻��ķ�ʽ*/

//#include <iostream>
//using namespace std;

////3�����ض���
//#define  Long long long
//typedef long long L;
//
//#define square_(x) ((x)*(x)) 
//
////1�滻�궨�峣��
//const int x = 100;
//enum un
//{
//	a = 100
//};
////2�滻�궨�庯��
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

//5ʹ��ģ�����滻����������
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