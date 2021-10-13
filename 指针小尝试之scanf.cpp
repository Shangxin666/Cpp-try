#include <stdio.h>
int main(void)
{
	int i,*p;
	p = &i;
	scanf("%d",p);
	printf("%d",i);
	return 0;
}
