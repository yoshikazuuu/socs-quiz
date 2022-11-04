#include <stdio.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

int main() {
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
                printf("*");
        }
        putchar('\n');
    }
    return 0;
}