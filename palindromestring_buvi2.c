//check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
void main()
/*{
    char string1[50],string2[50];
    printf("enter a string:");
    gets(string1);
    strcpy(string2,string1);
    strrev(string2);
    if(strcmp(string1,string2)==0)
        printf("%s is palindrome",string1);
    else
        printf("%s is not palindrome",string1);
}
alter method without using string function*/
{
    char string[50];
    int length=0,start,end,middle;
    printf("enter a string:");
    gets(string);
    while(string[length]!='\0')
        length++;
    end=length-1;
    middle=length/2;
    for(start=0;start<middle;start++)
    {
    if(string[start]!=string[end])
    {

        printf("%s is not palindrome",string);
        break;
    }
        end--;
    }
    if(string[start]==string[end])
        printf("%s is a palindrome",string);
}
