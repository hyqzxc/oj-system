#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i,j;
	while ((scanf("%d", &n)) != EOF)
	{
		int s = 1, s1 = 1;
		if (n != 0)
		{
			for (i = 1; i <= n; i++)
			{
			    s1 = 1;
				for (j = 1; j <= i; j++)
				{
					s1 = s1 * j;
				}
				s = s + s1;
			}
		}
		printf("%d\n", s);
	}
	system("pause");
	return 0;
}