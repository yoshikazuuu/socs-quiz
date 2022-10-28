#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n, p, counter = 0;
    scanf("%d %d", &n, &p);
    while (n--) {
        int x;
        scanf("%d", &x);
        if (x < p) counter++;
    }
    printf("%d\n", counter);
    return 0;
}