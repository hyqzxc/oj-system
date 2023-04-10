#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, n;
	scanf("%d", &n);
	for (n; n > 0; n--)
	{
		scanf(" %d %d", &a, &b);
		if (a < b)
		{
			c = a;
			a = b;
			b = c;
		}
		while (b != 0)
		{
			c = b;
			b = a % b;
			a = c;
		}
		printf("%d\n", a);
	}
	system("pause");
	return 0;
}