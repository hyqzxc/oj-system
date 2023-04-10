#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int n, z, i, j, k;
	while ((scanf("%d", &n)) != EOF)
	{
		for (i = 2; i <= n; i++)
		{
			int flag = 0, p = 0;
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					flag = 1; break;
				}
			}
			if (flag == 0)
			{
				z = n - i;
				for (k = 2; k <= sqrt(z); k++)
				{
					if (z % k == 0)
					{
						p = 1; break;
					}
				}
			}
			if (flag == 0 && p == 0)break;
		}
		printf("%d+%d\n", i, z);
	}
	system("pause");
	return 0;
}
