#include<stdio.h>
#include<stdlib.h>
int s(int a)
{
	int b = 0;
	while (a)
	{
		b = b * 10 + a % 10;
		a = a / 10;
	}
	return b;
}
int main()
{
	int x,y;
	while ((scanf("%d", &x) != EOF))
	{
		y = s(x);
		if (x == y)
			printf("yes\n");
		else
			printf("no\n");
	}
	system("pause");
	return 0;
}
