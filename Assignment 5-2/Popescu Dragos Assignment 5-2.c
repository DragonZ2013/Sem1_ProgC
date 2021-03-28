#include <stdio.h>
#include <stdlib.h>


int string_length(char *s)
{
   int c = 0;

   while( *(s + c) != '\0' )
      c++;

   return c;
}

void replace(char c[])
{
    int n = string_length(c)-1;

    for (int i = 0; i < n; i++)
        if (c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
            c[i]='#';
}
int main()
{
    char c;
    printf("this program WILL delete \"data.txt\" and replace it\nContinue?: Y/N\n");
    scanf("%c",&c);
    if(c=='Y'||c=='y')
    {char line[101];
    FILE *f = fopen( "data.txt","r" );
    FILE *g = fopen( "temp.txt","w" );
    if (f==NULL)
        return -1;
    while (fgets(line,100,f)) {
        replace(line);
        fprintf(g,"%s",line);
    }
fclose(f);
fclose(g);
remove("data.txt");
rename("temp.txt","data.txt");}
    return 0;
}
