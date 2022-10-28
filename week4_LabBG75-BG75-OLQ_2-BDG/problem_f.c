#include <stdio.h>
#include <math.h>
#include <string.h>

char b[] = "SEBOR";
int a[] = {264, 135, 100, 74, 37};

void solve() {
    int x;
    scanf("%d", &x);
    while (x > 73) {
        if (x >= a[0] * 2) putchar(b[0]), x -= a[0] * 2;
        else if (x >= a[1] * 2) putchar(b[1]), x -= a[1] * 2;
        else if (x >= a[2] * 2) putchar(b[2]), x -= a[2] * 2;
        else if (x >= a[3] * 2) putchar(b[3]), x -= a[3] * 2;
        else putchar(b[4]), x -= a[4] * 2;
        
        if (x > 73) putchar(' ');
    }
    putchar('\n');
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}