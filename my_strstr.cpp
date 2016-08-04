//10.编写一个程序， 判断一个字符串是否为另一个字符串的子字符串。
#include <iostream>
using namespace std;

char* my_strstr(const char* dest, const char* src)
{
	char* pd = (char*)dest;
	char* ps = NULL;
	char* res = pd;
	
	while(res)
	{
		ps = (char*)src;
		pd = res;
		while(*ps == *pd)
		{
			ps++;
			pd++;
			if(*ps == '\0')
			{
				return res;
			}
		}
		res++;
	}
	return NULL;

}

void Test()
{
	char* dest = "abbaabcdefg";
	char* src = "abc";
	char* ret1 = strstr(dest, src);
	char* ret2 = my_strstr(dest, src);
	cout<<ret1<<endl;
	cout<<ret2<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}