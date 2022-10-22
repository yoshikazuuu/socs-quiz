#include <stdio.h>
#include <math.h>
#include <string.h>

void solve() {
    long double v, a;
    scanf("%Lf %Lf", &v, &a);
    int o = (v - 2) / a;
    printf("%d\n", o);
}

int main() {
    solve();
    return 0;
}

