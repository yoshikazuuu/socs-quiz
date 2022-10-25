#include <stdio.h>

int main()
{
    int n,num,isPrime,x=1;

    scanf("%d", &n);
    getchar();

    for(int k = 0; k < n; k++){
        int sum=0;
        scanf("%d", &num);

        for(int i=2; i<=num; i++){
            if(num%i==0){
                isPrime = 1;
                for(int j=2; j<=i/2; j++){   
                    if(i%j==0){   
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime==1){
                    sum+=i;
                }
            }
        }   
        printf("Case #%d: ", x++);
        printf("%d\n", sum);
    }
        
    return 0;
}
