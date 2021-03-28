#include <stdio.h>

int main()
{
    int x, mi, ma,n;
    scanf("%d",&n);
    if(n>0)
        {scanf("%d",&x);
        mi = x;
        ma = x;
        for(int i = 0;i < n-1; i++)
        {
            scanf("%d", &x);
            if(x < mi)
                mi = x;
            if(x > ma)
                ma = x;
        }
        printf("Smallest value: %d\nLargest Value: %d", mi, ma);}
        return 0;
}
