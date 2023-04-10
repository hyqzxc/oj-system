#include<stdio.h>
#include<stdlib.h>
int max(int ,int );
int main()
{
	int i, a=0,b=0,n, m;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		m = max(a, b);
		b = m;
		a = 0;
	}
	printf("%d\n", m);
	system("pause");
	return 0;
}
int max(int x ,int y)
{
	return x > y ? x : y;
}