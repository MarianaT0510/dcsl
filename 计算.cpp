#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	int i;
	printf("��ѡ��ʽ��1��2����");
	scanf("%d", &i);
	float a2, d2, An2, Sn2;
	int n2;
	if (i == 1)
	{
		float a1, d, Sn, An;
		int n;
		printf("������a1��");
		scanf("%f", &a1);
		printf("������n��");
		scanf("%d", &n);
		printf("������d��");
		scanf("%f", &d);
		An = a1 + (n - 1) * d;
		Sn = (n * a1) + (n * (n - 1) * d) / 2;
		printf("An=%f,Sn=%f\n���������", An, Sn);
		return 0;
	}
	else
		printf("������a1��");
		scanf("%f", &a2);
		printf("������n��");
		scanf("%d", &n2);
		printf("������d��");
		scanf("%f", &d2);
		An2 = a2 + (n2 - 1) * d2;
		Sn2 = (n2 * a2) + (n2 * (n2 - 1) * d2) / 2;
		printf("An=%f,Sn=%f\n���������", An2, Sn2);
}