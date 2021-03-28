#include <stdio.h>
#include <stdlib.h>

int string_length(char *s)
{
   int c = 0;

   while( *(s + c) != '\0' )
      c++;

   return c;
}

void reverse(char c[])
{
    int n = string_length(c)-1;

    for (int i = 0; i < n / 2; i++)
        {int temp;
        temp=c[i];
        c[i]=c[n-i-1];
        c[n-i-1]=temp;}
}

int main()
{

    char line[101],cl=0;
    FILE *f = fopen( "input.txt","r" );
    if (f==NULL)
        return -1;
    while (fgets(line,100,f)) {
        if(cl%2==1)
            reverse(line);
        cl++;
        printf(line);
    }
fclose(f);
    return 0;
}
