/*print a pattern 11111
                  22222
                  33333
                  44444
                  55555*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}

