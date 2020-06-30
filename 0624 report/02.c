#include<stdio.h>
void Number(int a,int b)
{
	int suu;
	
	suu=a;
	a=b;
	b=suu;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	Number(num1, num2);
	printf("%d %d\n",num1,num2);
	
	return 0;
}
