7.��дһ�������жϵ�ǰ�����Ǵ�˴洢����С�˴洢��
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