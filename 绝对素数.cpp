#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(unsigned int);
unsigned int rev(unsigned int);
int main()
{
	int a,b;
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		unsigned int n, m;
		scanf("%u", &n);
		if (n > 0 && n < 100000)
		{
			if (prime(n) != 0)
				m = rev(n);
			else
			{
				printf("0\n");
				return 0;
			}
			if (prime(m) != 0)
				printf("1\n");
			else
				printf("0\n");
		}
		else
			printf("ÊäÈë´íÎó\n");
	}
	system("pause");
	return 0;
}
int prime(unsigned int x)
{
	int i, k;
	k = sqrt(x);
	for (i = 2; i <= k; i++)
	{
		if (x % i == 0)
			return 0;
		else if (i > k)
			return 1;
	}
}
unsigned int rev(unsigned int y)
{
	int z;
	z = y / 10 + (y % 10) * 10;
	return z;
}