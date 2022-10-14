#include <stdio.h>

int main(){
    char time[1000];
    int n, counter = 1;
    scanf("%d", &n);
    getchar();
    while (n--) {
        scanf("%[^\n]", time);
        getchar();
        if (time[6] == 'a') {
            if (time[0] == '1' && time[1] == '2') {
                time[0] = '0';
                time[1] = '0';
            }
        } else {
            if (time[0] == '0') {
                time[0] = '1';
                time[1] += 2;
            } else if (time[1] != '2') {
                time[0] = '2';
                time[1] += 2;
            }
        }
        
        printf("Case #%d: ", counter);
        counter++;

        for (int i = 0; i < 5; i++) {
            printf("%c", time[i]);
        }
        printf("\n");
    }   
}
