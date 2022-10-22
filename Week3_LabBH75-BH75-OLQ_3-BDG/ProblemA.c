#include <stdio.h>

int main(){
    int a,b,n,res;
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%d %d",&a,&b);
        res = ((a/b)<<b);
        printf("%d\n",res);
    }
}