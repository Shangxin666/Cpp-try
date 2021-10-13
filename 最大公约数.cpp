#include <stdio.h>
int main()
{
	int n,m,GCD,remainder;
	printf("Enter two integers:"); 
	scanf("%d %d",&n,&m);
	while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  } 
	GCD = m;  
	printf("Greatest common divisor: %d",GCD);
	return 0;
} 
