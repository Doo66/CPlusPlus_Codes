//8.��дһ�������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת���ã� ���磺�� efabcd�� �Ƿ�Ϊ�� abcdef�� ��ת���á�

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