#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void zhuanxiaoxie(char str[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
	}
}
int main()
{
	int n = 0;
	char s1[500]={0},s2[500] = { 0 };
	gets_s(s1);
	int len = strlen(s1);
	zhuanxiaoxie(s1, len);
	for (n = 0; n <= len; n++)
	{
		s2[n] = s1[n];
	}
	puts(s2);
	return 0;
}
