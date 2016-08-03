//1.求数组（ 元素可为正数、 负数、 0） 的最大子序列和。

#include <iostream>
using namespace std;

int Add(int* arr, int n)
{
	int max = arr[0];
	int total = max;

	for(int i = 1; i<n; i++)
	{
		if(total < 0)	//如果为负，就需要更新total
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