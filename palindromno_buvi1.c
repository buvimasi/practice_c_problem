//check whether a number is palindrome or not
#include<stdio.h>
void main()
{
    int number,reverseno=0,remainder,originalno;
    printf("enter a number:");
    scanf("%d",&number);
    originalno=number;
    while(number>0)
    {
        remainder=number%10;
        reverseno=reverseno*10+remainder;
        number=number/10;
    }
    if(originalno==reverseno)
        printf("%d is a palindrome",originalno);
    else
        printf("%d is not a palindrome",originalno);
}
