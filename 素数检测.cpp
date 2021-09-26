#include <stdio.h>
int main ()
{
	int n,d;
	printf("Enter a number to check prime number : ");
	scanf("%d",&n);
	
	for(d = 2;  d <= n ; d++)
    if(!(n%d)) break;
    if(d < n)
      printf("%d is not prime number",n);
	else
	  printf("%d is prime number",n);
    
	 
	return 0;
 } 
