#include <stdio.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

int n;

void solve() {
    char str[1001];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == n - 1) {
            if (str[i] != 'X') printf("hogwarts express on maintenance\n");
            break;
        }
        if (str[i] == 'X') {
            printf("found\n"); 
            break;
        }
        else printf("pass\n");
    }
}

int main() {
    scanf("%d", &n);
    solve();

    return 0;
}