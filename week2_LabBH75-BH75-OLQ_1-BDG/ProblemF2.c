#include <stdio.h>

int main(){
    char a[1003];
    int counter = 0;
    scanf("%s", a);

    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == 'p') {
            if (a[i + 1] == 'o') {
                if (a[i + 2] == 'c') {
                    if (a[i + 3] == 'u') {
                        if (a[i + 4] == 's') {
                            counter++;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", counter);
}