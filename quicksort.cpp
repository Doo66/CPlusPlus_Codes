//2.写一个针对整数的快速排序。

#include <iostream>
using namespace std;

int findkey(int* arr, int left, int right)
{
	int key = arr[left];
	int i = left;
	while(left < right)
	{
		while(left < right && arr[right] >= key)
			right--;
		while(left < right && arr[left] <= key)
			left++;
		if(left < right)
			swap(arr[left], arr[right]);
	}
	swap(arr[i], arr[left]);
	return left;
}

void quicksort(int* arr, int left, int right)
{
	if(left < right)
	{
		int ret = findkey(arr, left, right);
		quicksort(arr, left, ret-1);
		quicksort(arr, ret+1, right);
	}
}

void Test()
{
	int arr[] = {1,2,7,3,4,6,9,8,0,5};
	quicksort(arr, 0, 9);
	for(int i = 0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}