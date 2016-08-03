//3.��дһ�� memmove ������ ʵ���ڴ濽����

#include <iostream>
using namespace std;

void my_memmove(int* dest, int* src, size_t size)
{
	int n = size/sizeof(int);
	if(src<dest && src+n > dest)
	{//Դ��Ŀ�ĵؽ���ʱ����Ҫ�Ӻ���ǰ����
		while(n--)
		{
			*(dest+n) = *(src+n);
		}

	}
	else
	{
		while(n--)
		{
			*dest++ = *src++;
		}

	}
}

void Test()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	memmove(arr, arr+1, 12);
	int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
	my_memmove(arr1, arr1+1, 12);
	for(int i = 0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i = 0; i<10; i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}