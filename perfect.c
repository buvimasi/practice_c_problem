//check whether a given number is perfect or not
#include<stdio.h>
void main()
{
    int number,remainder,sum=0,i=1;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number>0)
    {
    while(i<=(number-1))
    {
        remainder=number%i;
        if(remainder==0)
        {
            sum+=i;
        }
        i++;

    }
    if(sum==number)
    {
        printf("%d is perfect number",number);
    }
    else
        printf("%d is not perfect number",number);
    }
    else
        printf("input should be positive integer");

}
