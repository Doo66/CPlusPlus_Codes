7.编写一个程序判断当前机器是大端存储还是小端存储。
#include iostream
using namespace std;

union MyUnion
{
	int a;
	short c;
};

bool JudgeModeIsLittle()
{
	MyUnion un;
	un.c = 0xffff0000;
	if(un.c == 0)
		return true;
	else
		return false;
}

int main()
{
	coutJudgeModeIsLittle()endl;
	system(pause);
	return 0;
}