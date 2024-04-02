#include <stdio.h>
int add(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
float div(int a, int b);

int main(void)
{
    int a, b;
    int result = 0;

    printf("input 2 integer :");
    scanf("%d %d", &a, &b);
    result = add(a, b);
    printf("%d + %d= %d\n", a, b, result);
    result = minus(a, b);
    printf("%d - %d= %d\n", a, b, result);
    result = multi(a, b);
    printf("%d * %d= %d\n", a, b, result);

    result = (float)div(a, b);
    printf("%d / %d= %.2f\n", a, b, result);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

float div(int a, int b)
{
    return (float)a / b;
}