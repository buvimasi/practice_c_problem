//print all prime prime number upto n
#include<stdio.h>
void main()
{
    int num,i,j,flag;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("prime number upto %d are:",num);
    for(i=1;i<=num;i++)
    {    flag=0;
        for(j=1;j<=num;j++)
        {
            if((i%j)==0)
                flag++;
        }
        if(flag==2)
            printf("\t%d",i);
    }
}
