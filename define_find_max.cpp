//5.写一个宏， 返回两个数中的较大的数。

#include <iostream>
using namespace std;

#define FIND_MAX(a, b) a>b?a:b

int main()
{
	int ret = FIND_MAX(5,6);
	cout<<ret<<endl;
	system("pause");
	return 0;
}