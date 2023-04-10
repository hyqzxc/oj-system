#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	while ((scanf("%d", &n)) != EOF)
	{
		i = 0;
		while (n != 1)
		{
			if (n % 2 == 0)
			{
				n = n / 2;
			}
			else
			{
				n = (3 * n + 1) / 2;
			}
			i++;
		}
		printf("%d\n", i);
	}
	system("pause");
	return 0;
}