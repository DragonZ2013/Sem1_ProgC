#include <stdio.h>

int main()
{
    int sum;
    scanf("%d",&sum);
    int num5, num2, num1;
    num5 = sum / 5;
    sum = sum - num5 * 5;
    num2 = sum / 2;
    sum = sum - num2 * 2;
    num1 = sum;
    printf("To use the minimum amount of coins, you have to use %d coins of 5 units, %d coins of 2 units and %d coins of 1 unit", num5, num2, num1);
    return 0;
}
