#include <stdio.h>

int main(){
	char n[1003];
	int a = 0;
	scanf("%s", &n);

	for(int i = 0; n[i] != '\0'; i++){
	if(n[i] == 'p' && n[i + 1] =='o' && n[i + 2] == 'c' && n[i + 3] == 'u' && n[i + 4] == 's'){
	a++;
	}	
}
printf("%d\n", a);
	return 0;
}
