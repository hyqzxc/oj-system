#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	int a[100]={0},b[100]={0};
	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{
		unsigned int a, b;
		char c;
		scanf(" %d %c %d", &a, &c, &b);
		for (j = 0; j < 100; j++)
		{
			a[j]=
		}
		switch (c)
		{
		case'+':
			 break;
		case'-':d = a - b;
			 break;
		case'*':d = a * b;
			 break;
		case'/':d = a / b;
			 break;
		default:break;
		}
	}
	system("pause");
	return 0;
}