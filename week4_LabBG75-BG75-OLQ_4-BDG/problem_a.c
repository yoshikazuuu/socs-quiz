#include <stdio.h>
#include <math.h>
#include <string.h>

int counter = 0;

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) printf("Case #%d: Go-Jo\n", ++counter);
    else printf("Case #%d: Bi-Pay\n", ++counter);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}