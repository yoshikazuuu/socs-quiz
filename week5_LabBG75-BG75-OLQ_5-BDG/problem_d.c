#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef unsigned long long ull;

int counter = 1;

void solve() {
    char str[1001];
    scanf("%[^\n]", str);
    getchar();
    printf("Case #%d: ", counter++);
    for (int i = 0; str[i] != '\0'; i++) {
        if (toupper(str[i]) == 'A' || toupper(str[i]) == 'I' || toupper(str[i]) == 'U' || toupper(str[i]) == 'E' || toupper(str[i]) == 'O') continue;
        else putchar(str[i]);
    }    
    putchar('\n');
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    while(n--) {
        solve();
    }
    return 0;
}