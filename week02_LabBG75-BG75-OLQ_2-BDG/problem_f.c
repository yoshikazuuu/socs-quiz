#include <stdio.h>
#include <ctype.h>

int main() {
    char a[101];
    scanf("%s", a);

    for (int i = 0; a[i] != '\0'; i++) {
        if (isupper(a[i])) {
            putchar(a[i]);
        }
    }
    putchar('\n');
    return 0;
}