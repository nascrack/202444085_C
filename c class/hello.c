#include <stdio.h>
int main (void)
{    
    int x;
    int y;
    int sum;
    int dif;
    int mul;
    int div;
    x = 20;
    y = 10;
    sum = x + y;
    dif = x - y;
    mul = x * y;
    div = x / y;
    printf("두수의 합 :  %d\n 두수의 차 : %d\n 두수의 곱 : %d\n 두수의 몫 : %d\n", sum, dif, mul ,div);
    return 0;
}