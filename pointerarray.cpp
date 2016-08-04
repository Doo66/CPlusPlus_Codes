//指针数组的传参
#include <iostream>
using namespace std;

void print(char* arr[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}

}

void Test()
{
	
	char *arr[4] = 
	{
		"aaaaa",
		"bbbbb",
		"ccccc",
		"ddddd"
	};
	print(arr, 4);
}

int main()
{
	Test();
	system("pause");
	return 0;
}