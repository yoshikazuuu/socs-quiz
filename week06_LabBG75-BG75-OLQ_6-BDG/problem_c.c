#include <stdio.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == x && j == y) putchar('C');
            else putchar('#');
        }
        putchar('\n');
    }
    return 0;
}