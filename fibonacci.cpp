//4.编写一个函数求解第 n 个非波那契数字。
#include <iostream>

using namespace std;

//递归
int fib_R(int n)
{
	if(n < 2)
		return 1;
	return fib_R(n-1)+fib_R(n-2);
}

//非递归
int fib(int n)
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 1;
	if(n<2)
		return 1;
	while(n)
	{
		n1 = n2;
		n2 = n3;
		n3 = n1+n2;
		n--;
	}
	return n3;
}

void Test()
{
	int ret_R = fib_R(10);
	int ret = fib(10);
	cout<<"fib_R(5) = "<<ret_R<<endl;
	cout<<"fib(5) = "<<ret<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}