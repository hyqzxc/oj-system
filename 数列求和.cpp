#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a , b ,n,i,c;
	double s, s1;
	while ((scanf("%d", &n)) != EOF)
	{
		a = 2;
		b = 1;
		s = 0.0;
		for (i = 1; i <= n; i++)
		{
			s1 = 1.0 * a / b;
			c = a;
			a = b;
			b = c;
			a = a + b;
			if (i % 2 == 0)
			{
				s = s - s1;
			}
			else
				s = s + s1;
		}
		printf("%.4f\n", s);
	}
	system("pause");
	return 0;
}