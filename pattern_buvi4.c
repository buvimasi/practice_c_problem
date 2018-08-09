/*print a pattern AAAAA
                  BBBBB
                  CCCCC
                  DDDDD
                  EEEEE */
#include<stdio.h>
void main()
{
    char i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}

