#include <stdio.h>

int mini(int x,int y)
{
    if(x<y)
        return x;
    return y;
}

int maxi(int x,int y)
{
    if(x<y)
        return y;
    return x;
}

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
            mi=mini(x,mi);
            ma=maxi(x,ma);
        }
        printf("Smallest value: %d\nLargest Value: %d", mi, ma);}
        return 0;
}
