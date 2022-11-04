#include <stdio.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

char alp[] = "ABCDEFGHIJKLMNOPGRSTUVWXYZ";
char vow[] = "AEIOU";
int loc[] = {1, 5, 9, 15, 21, 27};
int counter = 1;

void solve() {
    char str[1001];
    char temp[1001];
    scanf("%s", str);
    getchar();
    printf("Case #%d:\n", counter);
    for (int i = 0; str[i] != '\0'; i++) {
        int flag = 0;
        for (int j = 0; j < 5; j++) {
            if (str[i] == vow[j]) {
                putchar(str[i]);
                temp[i] = str[i];
                flag = 1;
                break;
            }
        }
        if (flag) continue;
        int pt;
        int currLoc = str[i] - 'A' + 1;
        // printf("%d\n", currLoc);
        for (int k = 0; k <= 5; k++) {
            if (currLoc > loc[k]) continue;
            else {
                pt = k - 1;
                break;
            }
        }
        putchar(vow[pt]);
        temp[i] = vow[pt];
        // (currLoc - loc[pt] > loc[pt + 1] - currLoc) ? putchar(vow[pt]) : putchar(vow[pt+1]);
    }
    putchar('\n');
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%d", str[i] - temp[i]);
    }
    putchar('\n');
}

int main() {
    int n;
    scanf("%d", &n);
    for (;counter <= n; counter++) {
        solve();
    }
    return 0;
}