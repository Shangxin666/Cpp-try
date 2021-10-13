#include <stdio.h> 

void swap(int *p,int *q);

int main(void)
{
	int i = 3,n = 5;

	swap(&i,&n);
	printf("%d %d",i,n);
	return 0;
}

void swap(int *p, int *q)
{
  int temp;

  temp = *p;
  *p = *q;
  *q = temp;
}
