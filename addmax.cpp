//1.�����飨 Ԫ�ؿ�Ϊ������ ������ 0�� ����������к͡�

#include <iostream>
using namespace std;

int Add(int* arr, int n)
{
	int max = arr[0];
	int total = max;

	for(int i = 1; i<n; i++)
	{
		if(total < 0)	//���Ϊ��������Ҫ����total
		{
			total = arr[i];
		}
		else
		{
			total += arr[i];
		}
		if(max < total)	
		{
			max = total;
		}
	}
	return max;
}

void Test()
{
	int arr[] = {1, 2, -10, 4, 5, 6, -10, 1, 9};
	int ret = Add(arr, 9);
	cout<<ret<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}