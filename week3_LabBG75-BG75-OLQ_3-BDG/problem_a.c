#include <stdio.h>
#include <math.h>
#include <string.h>

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a / b << b);
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        solve();
    }
    return 0;
}