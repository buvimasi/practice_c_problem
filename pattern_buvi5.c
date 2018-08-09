/*print a pattern ABCDE
                  ABCDE
                  ABCDE
                  ABCDE
                  ABCDE */
#include<stdio.h>
void main()
{
    char i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}


