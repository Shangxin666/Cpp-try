#include <stdio.h>
#define N 10
int main()
{
	int a[N][N];
	int row , col;
	
	for(row = 0; row < N;row++)
	  for(col = 0;col < N ;col++)
	    if(row == col)
	       a[row][col] = 1.0;
	    else
	       a[row][col] = 0.0;
	
	return 0;
 } 
