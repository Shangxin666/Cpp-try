#include <stdio.h>
int main ()
{
	int nums[5][5];
	int row,m,a;
	
	printf("Enter row 1: ");
	for (row = 0; row < 5; row++)
	{
		for (m = 0; m < 5; m++)       
		{
			scanf("%d", &nums[row][m]);
			a += nums[row][m];
		}
		printf("第%d行数字和为%d\n", row + 1, a);
		if(row<4)printf("Enter row %d: ",row+2);
		a = 0;
	}
	
	
	return 0;
 } 
