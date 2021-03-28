#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = a + b;
    float avg = sum / 2.0;
    int sumsq = a * a + b * b;
    printf("Sum: %d\nAverage: %f\nSum of squares: %d", sum, avg, sumsq);
    return 0;
}
