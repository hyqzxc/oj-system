#include<stdio.h>
#include<stdlib.h>
int ex(int x)
{
	if (x == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	
	int n, k,i,j;
	while ((scanf("%d %d", &n, &k)) != EOF)
	{
		char a[10000] = { 0 };
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= k; j++)
			{
				if (i % j == 0)
				{
					a[i] = ex(a[i]);
				}
				else
				{
					a[i] = a[i];
				}
			}
		}
		for (i = 1; i <= n; i++)
		{
			if (a[i] == 1)
			{
				printf("%d\n", i);
			}
		}
	}
	system("pause");
	return 0;
}