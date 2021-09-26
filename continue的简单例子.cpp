#include <stdio.h>
int main()
{
	int n = 0, sum = 0,i;
	while(n < 10)
	{
		scanf("%d",&i);
		if(i == 0)
		  continue;
		  sum += i;
		  n++;
	}
	printf("The sum of former ten numbers is %d",sum);
	return 0;
}
