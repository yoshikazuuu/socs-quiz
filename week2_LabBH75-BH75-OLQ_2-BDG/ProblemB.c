#include <stdio.h>

int main(){
    double P,N;
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%lf %lf", &P, &N);
        printf("%.2lf\n", N * P / 100 );
    }
    return 0;
}
