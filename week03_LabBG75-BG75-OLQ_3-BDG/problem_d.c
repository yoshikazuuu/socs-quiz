#include <stdio.h>
#include <math.h>
#include <string.h>

unsigned long long total = 1;

void solve() {
    long long a;
    scanf("%lld", &a);
    for (int i = 1; i <= a; ++i) {
        total = (total * i) % 1000000007;
    }
}

int main() {
    int n, m, counter = 1;
    scanf("%d", &n);
    
    while (n--) {
        total = 1;
        scanf("%d", &m);
        while (m--) {
            solve();
        }
        printf("Case #%d: %llu\n", counter, total);
        counter++;
    }
    return 0;
}