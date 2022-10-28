#include <stdio.h>
#include <math.h>
#include <string.h>

void solve() {
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x - i - 1 ; j++) {
            putchar(' ');
        }
        for (int j = 0; j < i + 1; j++) {
            putchar('*');
        }
        for (int j = 0; j < i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}