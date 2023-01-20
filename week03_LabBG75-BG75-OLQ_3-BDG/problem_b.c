#include <stdio.h>
#include <math.h>
#include <string.h>

int n, counter = 1;

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a * b % 2 == 0) printf("Case #%d: Party time!\n", counter++);
    else printf("Case #%d: Need more frogs\n", counter++);
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        solve();
    }
    return 0;
}