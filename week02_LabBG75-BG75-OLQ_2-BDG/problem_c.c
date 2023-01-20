#include <stdio.h>

int main() {
    char a[101], b[9], c[100];
    scanf("%[^\n]\n", a);
    scanf("%s\n", b);
    scanf("%s", c);

    printf("Name: %s\n", a);
    printf("NIS: %s\n", b);
    printf("Age: %s\n", c);
    return 0;
}