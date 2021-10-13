#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool digit_seen[10] = {false};
	int digit,i = 0,j;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld",&n);
	
	
	while(n > 0)
	{
		digit = n % 10;   //digit = 8             1
		if(digit_seen[digit])     // [8] false      [1]
		{
			a[i] = digit;
			i++;
		}
		digit_seen[digit] = true; //[8] 变成了true     [1]变成了true 
		n/= 10;  //              
	}
		
	
	if (i > 0)
	   {
	   printf("Repeated digit: ");
       for( j = 0;j < i  ;j++)
	   printf(" %d",a[j]);
	   }
	else 
	   printf("No repeated digit\n");
	return 0;
 } 
