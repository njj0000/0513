#include<stdio.h>
int main()
{
	int out1, out2;
	int a,b;
 	out1 =	printf("Hello C World\n");
 	printf("%d\n", out1);
 	printf("두개의 정수 입력 : ");
 	out2 = scanf("%d %d", &a,&b);
	printf("%d %d", &a,&b);
	printf("scanf 함수가 입력받은 데이터 개수는 %d입니다", out2);
	return 0;
}
