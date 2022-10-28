#include <stdio.h>
#include <math.h>
#include <string.h>

int counter = 0;

void solve() {
    unsigned long long x, a = 0, b = 1, c = 0;
    scanf("%llu", &x);
    for (int i = 2; i < x ; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    if (x == 2 || x == 3) c = b;
    printf("Case #%d: %llu\n", ++counter, c);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}