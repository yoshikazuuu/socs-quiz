#include <stdio.h>

int main(){
    int t = 1,n,a,b,c,dic;
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);

       printf("Case #%d: ",t);
       t++;
        dic = a * b/100;
            if  (dic >= c) printf("%d\n", c);

            else if(dic < c) printf("%d\n", dic);
    }
    return 0;
}