#include <stdio.h>

int main(){
	float n,a,b,a1,b1,a2,b2,hasil,hasil1,hasil2;
	scanf("%f",&n);
	for(int i = 0; i < n; i++){
		scanf("%f %f", &a, &b);
		scanf("%f %f", &a1, &b1);
		scanf("%f %f", &a2, &b2);
		hasil=b*a/100;
		hasil1=b1*a1/100;
		hasil2=b2*a2/100;
		printf("%.2f\n", hasil);
		printf("%.2f\n", hasil1);
		printf("%.2f\n", hasil2);
	}
return 0;
}
