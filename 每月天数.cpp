#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y ,day;
	while ((scanf("%d %d", &x, &y)) != EOF)
	{
		switch (y)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:day = 31; break;
		case 4:
		case 6:
		case 9:
		case 11:day = 30; break;
		case 2: {
			if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0))
				day = 29;
			else
				day = 28; break;
		}
		}
		printf("%d\n", day);
	}
	system("pause");
	return 0;
}