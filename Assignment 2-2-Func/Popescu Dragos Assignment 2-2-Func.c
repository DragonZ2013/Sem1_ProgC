#include <stdio.h>
#include <stdlib.h>

int mark[1000];
void markfunc(int x,int n)
{
    for(int j=2*x;j<=n;j+=x)
        mark[j]=1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if(mark[i]==0)
            markfunc(i,n);
    for(int i=1;i<=n;i++)
        if(mark[i]==0)
            printf("%d ",i);


    return 0;
}
