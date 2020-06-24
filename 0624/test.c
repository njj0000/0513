#include<stdio.h>
void rec(int a)
{
	if(a!=0)
	{
		printf("%d\n",a);
		rec(a-1);
		printf("%d\n",a);
	}
}
int main()
{
	int i=5;
	rec(i);
	
	return 0;
}
