#include <stdio.h>

int main(){
    char time[1001];
    int n, counter = 1;
    scanf("%d", &n);
    getchar();

    for (int i = 1; i <= n; i++) {
        scanf("%[^\n]", time);
        getchar();
        int hour = (int) (time[0] - '0') * 10 + time[1] - '0';
        int minute = (int) (time[3] - '0') * 10 + time[4] - '0';

        if (time[6] == 'p') {
            if (hour != 12) {
                hour += 12;
            }
        } else {
            if (hour == 12) {
                hour -= 12;
            }
        }

        printf("Case #%d: %02d:%02d\n", i, hour, minute);
    }
}
