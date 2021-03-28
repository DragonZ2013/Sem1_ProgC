#include <stdio.h>

int main()
{
    float len;
    scanf("%f", &len);
    float inch = len / 2.54;
    int feet = inch / 12;
    inch = inch - feet * 12;
    inch *= 10;
    inch = (int)(inch);
    inch /= 10;
    printf("The specified length is equal to %d foot %f inches", feet, inch);
    return 0;
}
