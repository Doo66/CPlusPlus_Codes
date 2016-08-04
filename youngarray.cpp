//@:���Ͼ���Ĳ���
#include <iostream>
using namespace std;

const int N = 4;

bool findkey(int arr[][4], int key)
{
	//�����Ͻǿ�ʼ��
	int i = 0;
	int j = N-1;
	while(i<N && i>-1 && j<N && j>-1)
	{
		//���ڻ�׼������һ���ƶ�
		if(key > arr[i][j])
		{
			i++;
		}
		//С�ڻ�׼����ǰһ���ƶ�
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