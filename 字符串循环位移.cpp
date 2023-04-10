#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
	char s1[100] = { 0 }, s2[100] = { 0 };
	int i,k,n;
	scanf_s("%d\n", &k);
	gets_s(s1);
	n= strlen(s1);
		for (i = 0; i < n -k; i++)
		{
			s2[i] = s1[i+k];
		}
		for (i = 0; i < k; i++)
		{
			s2[n-k+i] = s1[i];
		}
	puts(s2);
	system("pause");
	return 0;
}