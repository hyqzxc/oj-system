#include<stdio.h>
#include<string.h>
int main()
{
	char s[6];		int n, i;
	while (scanf("%s", s) != EOF)
	{
		if (s[1] == 0)
		{
			break;
		}
		else
		{
			n = strlen(s);
			int a[6], k = 0;
			for (i = 0; i < 6; i++) {
				if (s[i] >= '0' && s[i] <= '7') {
					a[k++] = s[i] - '0';
				}
			}
			int sum = 0;
			for (i = 0; i < k; i++) {
				sum += sum * 7 + a[i];
			}
			printf("%d", sum);
		}
	}
	return 0;
}

