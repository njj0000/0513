#include<stdio.h>
#include<string.h>
int main()
{

char str[80]
	int i;
	
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	

	for(i = strlen(str); i >= 0; i--)
	putchar(str[i]);
	
	return 0;
}
