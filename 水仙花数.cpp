#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 100;
	int a, b, c;
	for (n; n <1000; n++)
	{
		a = n / 100;
		b = n / 10 % 10;
		c = n  % 10;
		if (a * a * a + b * b * b + c * c * c == n)
		{
			printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}