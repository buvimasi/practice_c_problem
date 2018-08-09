//compute sum of digits of number
#include<stdio.h>
void main()
{
 int tempvar,digit,remainder,sum=0;
 printf("Enter a digit:");
 scanf("%d",&digit);
 tempvar=digit;//copy a digit as tempvar to preserve digit value
 if(tempvar>0)
 {
 while(tempvar!=0)
 {
     remainder=tempvar%10;
     sum+=remainder;
     tempvar/=10;
 }
 printf("sum of digit %d is %d",digit,sum);
 }
else
printf("give a positive value as input");
}
