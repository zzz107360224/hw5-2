#include<stdio.h>
#include<stdlib.h>
void maxi(int a[], int i);
int max = 0;
void main(void)
{
	int num, i;
	int a[80];
	printf("�A�n��J�X�Ӿ�Ƥ�j�p:");
	scanf_s("%d", &num);
	printf("�п�J%d�Ӿ��:", num);
	for (i = 0; i < num; i++)
	{
		scanf_s("%d", &a[i]);
	}
	maxi(a, num);
	system("pause");
	return 0;
}
void maxi(int a[], int i)
{

	if (i == 0)
	{
		printf("%d�O�̤j��\n", max);
	}
	else
	{
		if (a[i - 1] > max)
		{
			max = a[i - 1];
		}
		maxi(a, i - 1);
	}
}