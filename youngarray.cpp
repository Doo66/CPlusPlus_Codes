//@:杨氏矩阵的查找
#include <iostream>
using namespace std;

const int N = 4;

bool findkey(int arr[][4], int key)
{
	//从右上角开始找
	int i = 0;
	int j = N-1;
	while(i<N && i>-1 && j<N && j>-1)
	{
		//大于基准，往下一行移动
		if(key > arr[i][j])
		{
			i++;
		}
		//小于基准，往前一列移动
		else if(key < arr[i][j])
		{
			j--;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void Test()
{
	int youngarray[N][N] = 
	{
		{1,5,10,15},
		{2,6,11,16},
		{4,13,18,20},
		{9,17,23,30}
	};
	bool res = findkey(youngarray, 9);
	cout<<res<<endl;
	//cout<<true<<endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}