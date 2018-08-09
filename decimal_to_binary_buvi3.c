//convert decimal to binary
#include<stdio.h>
void main()
{

    long number,decimal,base=1,binary=0,rem;//for convert larger decimal value use long datatype
    printf("enter a decimal number:");
    scanf("%ld",&number);
    decimal=number;
    while(number>0)
    {
        rem=number%2;
        binary=binary+rem*base;
        number/=2;
        base*=10;
    }
    printf("equivalent binary number for %ld is %ld",decimal,binary);
}
