#include <stdio.h>
#include <ctype.h>

int main() {
    int n, counter = 1;
    char a[10001];
    char bruh[] = {'O', 'I', 'Z', 'E', 'A', 'S', 'G', 'T', 'B', 'P'};

    scanf("%d", &n);
    getchar();
    while (n--) {
        scanf("%[^\n]", a);
        getchar();
        printf("Case #%d: ", counter);
        counter++;
        for (int i = 0; a[i] != '\0'; i++) {
            int auth = 0;
            for (int j = 0; j < 10; j++) {
                int convert = toupper(a[i]) - '0';
                if (convert == j) {
                    putchar(bruh[j]);
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
    }
    return 0;
}