#include <stdio.h>
#include <math.h>
#include <string.h>

int counter = 0;

void solve() {
    int a, b, sum = 0, i = 1;
    scanf("%d %d", &a, &b);
    while (a > 0 || b > 0) {
        sum += (a + b) % 10 * i;
        i *= 10;
        a /= 10;
        b /= 10;
    }
    printf("Case #%d: %d\n", ++counter, sum);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}