// Sample code to perform I/O:
#include <stdio.h>
 
int main(){
	int L,N,H,W;
	scanf("%d", &L);              			// Reading input from STDIN// Writing output to STDOUT
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
	scanf("%d",&W);
	scanf("%d",&H);
	if(W<L||H<L)
	{
	    printf("UPLOAD ANOTHER\n");
	}
	else 
	 {
	     if((W==L)&&(H==L)||(W==H))
	      printf("ACCEPTED\n");
	      else
	      printf("CROP IT\n");
	 }
	}
    
}