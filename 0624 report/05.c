#include <stdio.h>
int sum_mat(int a[][3], int n);
int main(void)
{
    int mat_a[3][3]={{3, 8, 6}, {4, 1, 7}, {5, 2, 9}};
    int sum;
    sum=sum_mat(mat_a, 3);
    printf("��Ŀ���� ��: %d\n", sum);
    return 0;
}
int sum_mat(int a[][3], int n)
{
    int i, j, total=0;
    for(i=0;i<n; i++)
        for(j=0;j<n;j++)
            total+=a[i][j];
    return total;
}


