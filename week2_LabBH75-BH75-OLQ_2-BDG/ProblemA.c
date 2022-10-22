#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d", &a);
	
	printf("%d plus %d is ", a, a);
	b = a+a;
	printf("%d\n", b);
	b-= 1;
	printf("minus one is %d\n", b);
return 0;
}
