#include <stdio.h>

int main(){
    char time[1001][1001];
    int n, counter = 1;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        scanf("%[^\n]", &time[i][0]);
        getchar();
        if (time[i][6] == 'a') {
            if (time[i][0] == '1' && time[i][1] == '2') {
                time[i][0] = '0';
                time[i][1] = '0';
            }
        } else {
            if (time[i][0] == '1' && time[i][1] == '2') {
                time[i][0] = '1';
                time[i][1] = '2';
            } else if (time[i][0] == '0') {
                time[i][0] = '1';
                time[i][1] += 2;
                if (time[i][1] == ';' || time[i][1] == ':') {
                    time[i][0] = '2';
                    time[i][1] -= 10;
                }
            } else if (time[i][1] != '2') {
                time[i][0] = '2';
                time[i][1] += 2;
            }
        }
    }   

    for (int i = 0; i < n; i++) {
        printf("Case #%d: ", counter);
        counter++;
        for (int j = 0; j < 5; j++) {
            printf("%c", time[i][j]);
        }
        putchar('\n');
    }
}
