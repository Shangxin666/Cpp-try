#include <stdio.h>
int main()
{
	int n,m,GCD;
	printf("Enter two integers:"); 
	scanf("%d %d",&n,&m);
	for(n!=0;n=m%n;m=n)
	 ; 
	GCD = m;  
	printf("Greatest common divisor: %d",GCD);
	return 0;
} 
