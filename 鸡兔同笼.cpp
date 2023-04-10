#include <stdio.h>
#include<stdlib.h>
int main()
{
    int m, n, a, b, t;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (n > m)
        {
            t = n; n = m; m = t;
        }
        if (m % 2 == 0 && m >= 2 * n && m <= 4 * n)
        {
            b = (m - 2 * n) * 0.5;
            a = n - b;
        }
        if (m < 0 || n < 0 || m % 2 != 0 || m < 2 * n || m>4 * n)
        {
            a = -1, b = -1;
        }            printf("%d %d\n", a, b);

    }
    system("pause");
    return 0;
}
