#include <stdio.h>

int main(){
    int T;
    
    scanf("%d",&T);
    while(T--){
        long long int A,B;
        scanf("%lld %lld",&A,&B);

        double res = (double) B * A /360;
        
        printf("%.2lf\n", res);
    }
    return 0;
}