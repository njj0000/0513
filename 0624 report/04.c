#include <stdio.h>
void print_array(char a[]);
int main(void)
{
    char str[10];
    printf("���ڿ��� �Է�:");
    scanf("%s", str);
    print_array(str);
    return 0;
}
void print_array(char a[])
{
    printf("�Էµ� ���ڿ�:");
    printf("%s\n", a);
}


