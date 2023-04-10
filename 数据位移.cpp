#include<stdio.h>
#include<stdlib.h>
void MoveElements(int a[], int n, int k)
{
	int i;
	for (i = 0; i < k; i++)
	{
		int m = k - 1 - i;
		int j = m + 1;
		while (j < n - i)
		{
			a[m] += a[j];
			a[j] = a[m] - a[j];
			a[m] -= a[j];
			m++;
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
void Input(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d",a[])
	}
}
int main(void)
{
	int k; int a[N] = { 0 };
	Input(a, N);
	int n = sizeof(a) / sizeof(a[1]);
	Print(a, n);
	scanf("%d", &k);
	MovElemebts(a, n, k);
	return 0;
}
