//11.设计函数参数， 使得函数可以接收一个二维数组。
#include <iostream>
using namespace std;


//@1:传递一个数组指针
void print1(int(*arr)[4], int n)
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
//@2：传递一个二级指针
void print2(int** arr, int n)
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			printf("%d ", *(arr+i*n+j));
		}
		cout<<endl;
	}
}
//@3：传递二维数组
void print3(int arr[][4], int n)
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Test()
{
	int arr[4][4] = 
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	print1(arr, 4);
	print2((int**)arr, 4);
	print3(arr, 4);
	//cout<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}