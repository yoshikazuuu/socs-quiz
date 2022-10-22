#include<stdio.h>

int main(){
    int a,b,c,n,x = 1;
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
        printf("Case #%d: ",x);
        x++;
        if(b+c < a) printf("no\n",x);
        else printf("yes\n",x);
    }
    return 0;
}