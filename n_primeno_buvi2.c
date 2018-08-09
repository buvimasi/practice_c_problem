//print first n prime numbers
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num,c,i,j=3;
    printf("enter a number of prime number required:");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("no prime numbers exits");
        exit(1);

    }
    printf("The prime numbers are:");
    printf("2 ");//print a number 2 intially
    for(i=2;i<=num;j++)
    {
        for(c=2;c<j;c++)//to check whether a number is prime or not
        {
            if((j%c)==0)
                break;
        }

    if(c==j)//print a prime number
    {
        printf("\t%d",j);
          i++;
    }
    }
}
