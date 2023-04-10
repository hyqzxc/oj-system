#include<stdio.h>
void str_back(char *str);
int main()
{
	int i = -1;
	char str[100] = { 0 };
	do
	{
		i++;
		str[i] = getchar();
	} while (str[i] != '\n');
	str_back(str);
	return 0;
}
void str_back(char* str)
{
	int len = 0, i = 0, tmp;
	tmp = len;
	for (i = 0; i < tmp; i++, len--)
	{
		if (str[i] == str[len - 1])
			continue;
		else
		{
			printf("no\n");
			return;
		}
	}
	printf("yes\n");
}
