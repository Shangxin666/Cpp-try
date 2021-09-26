#include <stdio.h>
int main ()
{
	int i = 0;
	printf("Enter an message: ");
	while( getchar()!= '\n')
	  ++i;
	printf("Your message was %d character(s) long ",i);
	
	return 0;
}
