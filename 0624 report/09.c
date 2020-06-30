#include <stdio.h>

// �Լ������� Ÿ�� ����
typedef int (*calcFuncPtr)(int, int);


// ���� �Լ�
int plus (int first, int second)
{
    return first + second;
}
// ���� �Լ�
int minus (int first, int second)
{
    return first - second;
}
// ���� �Լ�
int multiple (int first, int second)
{
    return first * second;
}
// ������ �Լ�
int division (int first, int second)
{
    return first / second;
}

// �Ű������� �Լ������͸� ���� calculator �Լ�
int calculator (int first, int second, calcFuncPtr func)
{
    return func (first, second);     // �Լ��������� ���
}

int main(int argc, char** argv)
{
    calcFuncPtr calc = NULL;
    int a = 0, b = 0;
    char op = 0;
    int result = 0;

    scanf ("%d %c %d", &a, &op, &b);

    switch (op)    // �Լ������� calc�� op�� �´� �Լ����� �ּҸ� ����
    {
        case '+' :
            calc = plus;
            break;

        case '-':
            calc = minus;
            break;

        case '*':
            calc = multiple;
            break;

        case '/':
            calc = division;
            break;
    }

    result = calculator (a, b, calc);

    printf ("result : %d", result);

    return 0;
}
