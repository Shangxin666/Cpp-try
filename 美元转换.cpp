#include <stdio.h>
int main (void)
{
	int val = 0,a = 0,b = 0,c = 0,d = 0;
	printf("Enter a dollar amount:");
	scanf("%d",&val);
	a = val/20;
	b = (val - a*20)/10;
	c = (val - a*20 - b*10)/5;
	d = (val - a*20 - b*10 -c*5); 
	printf("$20 bills:%d\n",a);
	printf("$10 bills:%d\n",b);
	printf(" $5 bills:%d\n",c);
	printf(" $1 bills:%d\n",d);
	return 0;
 } 
