#include <stdio.h>

int main()
{
    int h, m, x, y;
    scanf("%d %d %d %d", &h, &m, &x, &y);
    m = m + y;
    if(m >= 60)
    {
        h += m / 60;
        m %= 60;
    }
    h += x;
    if(h > 24)
        h %= 24;
    printf("The new time is %d:%d", h, m);
    return 0;
}
