#include<stdio.h>

int main()
{
	char binus[100];
	
	scanf("%[^\n]s\n", &binus);

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"");
	
	int a,b;
	a=37;
	b=44;

	printf("%c", a); 
	
	printf("s\\n\"");
	
	printf("%c", b); 
    
	printf("\"");
	printf("%s", &binus);
    printf("\");\n");
	printf("    return 0;\n");
    printf("}\n");

return 0;
}
