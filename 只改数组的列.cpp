#include <stdio.h>

#define NUM_ROWS 10
#define NUM_COLS 10 

int main()
{
	int a[NUM_ROWS][NUM_COLS],(*P)[NUM_COLS],5;
	
	for(p = &a[0];p < &a[NUM_ROWS];P++) //p指向第0行的第一个元素 
    (*p) [5] = 0;
	

	return 0;
} 
