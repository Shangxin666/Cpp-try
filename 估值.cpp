#include <stdio.h>
int main()
{
	double num,*p;
	p = &num;
	*p = 2/ *p;
	printf("%d",num);
	return 0;
}
