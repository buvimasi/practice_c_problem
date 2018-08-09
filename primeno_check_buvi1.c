//check whether a number is prime or not
#include<stdio.h>
#include<stdlib.h>
void main()
{

    int num,i,flag=0;
    printf("enter a number to check:");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("The number is not a prime");
        exit(1);

    }
    for(i=2;i<=num/2;i++)
    {
        if((num%2)==0)
            flag=1;
        break;
    }
    if(flag==0)
    {
        printf("%d is prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
}
