//8.编写一个函数判断一个字符串是否为另外一个字符串旋转所得， 比如：“ efabcd” 是否为“ abcdef” 旋转所得。

#include <iostream>

using namespace std;

bool TestIsRotate(char* buf1, char* buf2)
{
	char buf[20] = {0};
	strcpy(buf, buf2);
	strcpy(buf+strlen(buf), buf2);
	return strstr(buf, buf1);
}

int main()
{
	char* buf1 = "abcdefg";
	char* buf2 = "efgabcd";
	cout<<TestIsRotate(buf1, buf2)<<endl;
	system("pause");
	return 0;
}