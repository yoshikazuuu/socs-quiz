#include <stdio.h>

int main(){
    int t, a, b, counter = 0;
    double hold;
    scanf("%d", &t);
    while (t--){
        int flag = 0, sum = 0;
        double hold = 0;

        scanf("%d %d", &a, &b);

        sum = a, hold = a;
        while (hold >= b){
            hold -= b;
            hold++; 
            flag++;        
        }
        sum += flag;

        printf("Case #%d: %d\n", ++counter, sum);
    }
}