#include <stdio.h>

int main(void)

{
    int num1;
    int num2;
    int num3;
    printf("첫번째 숫자를 입력하시오:");
    scanf("%d", &num1);
    printf("두번째 숫자를 입력하시오:");
    scanf("%d", &num2);
    num3 = num1 + num2;
    printf("두수의 합: %d\n", num3);
    return 0;
    
}
    
    