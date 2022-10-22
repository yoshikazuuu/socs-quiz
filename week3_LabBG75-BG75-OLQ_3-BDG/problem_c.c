#include <stdio.h>
#include <math.h>
#include <string.h>

void solve() {
    long a, b, c, d;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);

    if (a * b == c - d) printf("True\n");
    else printf("False\n");
}

int main() {
    solve();
    return 0;
}