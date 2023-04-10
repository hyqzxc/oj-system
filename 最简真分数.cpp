#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n, a[600];
    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], a[j]) == 1) { // ÅÐ¶ÏÊÇ·ñ»¥ÖÊ
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}