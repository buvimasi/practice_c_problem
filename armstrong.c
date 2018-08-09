//check whether a number is armstrong number or not
#include<stdio.h>
void main()
{
    int number,originalnumber,remainder,sum=0;
    printf("Enter a number:");
    scanf("%d",&originalnumber);
    number=originalnumber;//To preserve originalnumber
    if(number>0)
    {
        while(number!=0)
        {
            remainder=number%10;
            sum+=(remainder*remainder*remainder);
            number/=10;

        }
        if(sum=originalnumber)//check whether a number is armstrong
        {
            printf("%d is armstrong number",originalnumber);
        }
        else
        {
            printf("%d is not armstrong",originalnumber);

        }

    }
    else
        printf("give a proper input value");
}
