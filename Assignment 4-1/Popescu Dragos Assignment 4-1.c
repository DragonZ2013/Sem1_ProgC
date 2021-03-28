#include <stdio.h>
#include <stdlib.h>


int main()
{
    ///made without dynamic alloc
    int a[20][20], b[20][20], c[20][20], x;
    int i,j,n,n2,k,m;
    printf("Numar linii mat A: ");
    scanf("%d", &n);
    printf("Numar coloane mat A: ");
    scanf("%d", &m);
    printf("Numar linii mat B: ");
    scanf("%d", &n2);
    printf("Numar coloane mat B: ");
    scanf("%d", &k);
    if(n!=n2)
        printf("Dimensiuni invalide! (col A != lin B)");
    else
    {

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                printf("a[%d][%d] = ", i,j);
                scanf("%d", &a[i][j]);
            }
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<k; j++)
            {
                printf("b[%d][%d] = ", i,j);
                scanf("%d", &b[i][j]);
            }
        }

        // produs(a,b,c,n,k);
        for(i=0; i<n; i++)
        {
            for(j=0; j<k; j++)
            {
                c[i][j] = 0;
                for(x=0; x<n; x++)
                {
                    c[i][j] += a[i][x]*b[x][j];
                }
            }
        }
        printf("\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;

}

