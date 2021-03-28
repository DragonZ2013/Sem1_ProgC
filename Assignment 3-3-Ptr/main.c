#include <stdio.h>

void read_str(char *in_str)
{
    scanf("%s",in_str);
}

int string_length(char *s)
{
   int c = 0;

   while( *(s + c) != '\0' )
      c++;

   return c;
}

void reverse(char *c)
{
    int n = string_length(c);

    for (int i = 0; i < n / 2; i++)
        {
            int temp;
            temp=*(c+i);
            *(c+i)=*(c+n-i-1);
            *(c+n-i-1)=temp;
        }
}
int main()
{
    char str[100];
    read_str(str);
    reverse(str);
    printf("%s",str);
    return 0;
}
