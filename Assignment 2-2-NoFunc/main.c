#include <stdio.h>
#include <stdlib.h>

int mark[1000];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if(mark[i]==0)
            for(int j=2*i;j<=n;j+=i)
                mark[j]=1;
    for(int i=1;i<=n;i++)
        if(mark[i]==0)
            printf("%d ",i);


    return 0;
}
