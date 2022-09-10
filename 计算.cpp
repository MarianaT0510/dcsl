#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	int i;
	printf("请选择公式（1或2）：");
	scanf("%d", &i);
	float a2, d2, An2, Sn2;
	int n2;
	if (i == 1)
	{
		float a1, d, Sn, An;
		int n;
		printf("请输入a1：");
		scanf("%f", &a1);
		printf("请输入n：");
		scanf("%d", &n);
		printf("请输入d：");
		scanf("%f", &d);
		An = a1 + (n - 1) * d;
		Sn = (n * a1) + (n * (n - 1) * d) / 2;
		printf("An=%f,Sn=%f\n运算结束。", An, Sn);
		return 0;
	}
	else
		printf("请输入a1：");
		scanf("%f", &a2);
		printf("请输入n：");
		scanf("%d", &n2);
		printf("请输入d：");
		scanf("%f", &d2);
		An2 = a2 + (n2 - 1) * d2;
		Sn2 = (n2 * a2) + (n2 * (n2 - 1) * d2) / 2;
		printf("An=%f,Sn=%f\n运算结束。", An2, Sn2);
}