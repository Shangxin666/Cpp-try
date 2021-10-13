#include <stdio.h>

void abcd (double x,long *,double *); 

int main(void)
{
	long i;
	double j;
	abcd(3.14159,&i,&j);
	printf("%d %f",i,j); 
	return 0;
}

void abcd(double x,long *int_pact,double *frac_pact)
{
	*int_pact = (long) x;
	*frac_pact = x - *int_pact; 
 } 
