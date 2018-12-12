#include<stdio.h>
#include<stdlib.h>

void abc(char *m);

int main(void)
{
	char a[70];
	printf("½Ð¿é¤J¦r¦ê:");
	scanf_s("%s", a, 70);
	abc(a);
	printf("\n");
	system("pause");
}
void abc(char *m)
{
	int i, j,k;
	
	k = strlen(m)-1;

	for (i = k; i >=0; i--)
	{
		printf("%c", *(m+i));
	}

}