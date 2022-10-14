#include <stdio.h>

int main(){
	float P,N;
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		scanf("%lf %lf", &P, &N);
		printf("%.2lf\n", P / 100 * N);
	}
return 0;
}
