#include <stdio.h>
#include <stdlib.h>


void abc(int[],int k);

int main(void)
{
	
	int a[] = { 1,3,54,6,9,17,2 };
	int i;
	i = sizeof(a)/sizeof(int);
	abc(a,i);
	
	system("pause");
}
void abc(int*m,int k)
{
	int b,z,left,right,ox,mid;
	int  j,v;

	
	
	for (b = 0; b< k - 1; b++)
	{
		z = 0;
		for (j = 0; j < k - 1 - b; j++)
		{
			if (*(m+j) > *(m +j+1))
			{
				v = *(m + j);
				*(m + j) = *(m + j + 1);
				*(m + j + 1) = v;
				z = 1;
			}
			
			
		}
		if (z == 0)
		{
			break;
		}
			
		
	}

	printf("�п�J�@�ӭ�");

	
	while (scanf_s("%d", &b)==1)
	{
		left = 0;
		right = k -1;
	
		ox = 0;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (b == m[mid])
			{
				ox = 1;
				break;
			}
			if (b < m[mid])
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		
		}
		if (ox == 1)
		{
			printf("�ba[%d]���%d.\n", mid, b);
		}
		else
		{
			printf("�d�L�����\n");
		}
		printf("�п�J�@�ӭ�");
		
	}

}