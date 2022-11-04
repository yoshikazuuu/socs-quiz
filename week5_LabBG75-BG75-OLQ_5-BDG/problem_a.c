#include <stdio.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

int counter = 1;

void solve() {
    int x, i = 1, rep = 0;
    scanf("%d", &x);
    for (int j = 1; i <= x; j++) {
        i += j;
        rep++;
    }
    printf("Case #%d: %d\n", counter++, rep);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) solve();
    return 0;
}