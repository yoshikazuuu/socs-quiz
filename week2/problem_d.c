#include <stdio.h>
#include <ctype.h>

int main() {
    char a[10001];
    char bruh[] = {'I', 'R', 'E', 'A', 'S', 'G', 'T', 'B', 'P', 'O'};
    scanf("%[^\n]", a);

    // string a = "hello"

    for (int i = 0; a[i] != '\0'; i++) {
        int auth = 0;
        for (int j = 0; j < 10; j++) {
            if (toupper(a[i]) == bruh[j]) {
                if (j + 1 == 10) {
                    printf("%d", 0);
                } else {
                    printf("%d", j + 1);
                }
                auth = 1;
                break;
            }
        }
        if (auth) {
            continue;
        } else {
            putchar(toupper(a[i]));
        }
    }
    putchar('\n');
    return 0;
}