//@:¾Å¾Å³Ë·¨±í
#include <iostream>
using namespace std;

void Test()
{
	for(int i = 1; i<10; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d  ", j, i, i*j);
		}
		cout<<endl;
	}
}

int main()
{
	Test();
	system("pause");
	return 0;
}