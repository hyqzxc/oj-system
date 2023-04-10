

#include <stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {

    int NO1 = 0;
    int NO2 = 0;
    int NO3 = 0;
    int b = 0;
    int n, a[50],i=0;
        while ((scanf("%d", &a[i])) != EOF)
        {
            if (a[i] == 1)
            {
                NO1++;
            }
            else if (a[i] == 2)
            {
                NO2++;
            }
            else if (a[i] == 3)
            {
                NO3++;
            }
            else if(a[i]==-1)
            {
                break;
            }
            i++;
    }
    printf("1 % d\n2 % d\n3 % d", NO1,NO2,NO3);
    system("pause");
    return 0;
}
