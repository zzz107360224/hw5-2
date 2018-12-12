#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 13
int main(void)
{
	int a[size] = { 0 };

	int i, j,k,l;
	srand(time(NULL));
	for (i = 1; i <= 36000; i++)
	{
		j = rand() % 6 + 1;
		k= rand() % 6 + 1;
		l = j + k;
		a[l] = a[l] + 1;
	}
	printf("%4s%17s\n", "­È", "¦¸¼Æ");
	for (i = 2; i <= 12; i++)
	{
		printf("%4d%17d", i, a[i]);
		printf("\n");
	}

	system("pause");
}
