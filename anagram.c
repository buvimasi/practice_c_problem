#include<stdio.h>
#include<string.h>
void f(char a[],char b[])
{
    int count=strlen(a),i,j;
    int v[strlen(b)];
    for(i=0;i<strlen(b);i++)
    {
        v[i]=-1;
    }
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
            if(v[j]==-1 && a[i]==b[j])
            {
                v[j]=1;
                count--;
                break;
            }
        }
    }

    for(i=0;i<strlen(b);i++)
    {
        if(v[i]==-1)
        {
           count++;
        }

    }
    printf("%d\n",count);
}
int main(){
	int num,i;
	char a[10000],b[10000];
	scanf("%d", &num);
	for(i=0;i<num;i++)
	{
	    scanf("%s",a);
	    scanf("%s",b);
	    f(a,b);
	}
}
