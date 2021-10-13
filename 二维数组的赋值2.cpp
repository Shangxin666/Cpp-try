#include <stdio.h>
int main()
{
	int row, m, n, a=0, b=0;
	int nums[5][5];
	
	for (row = 0; row < 5; row++)
	{
		for (m = 0; m < 5; m++)
		{
			scanf("%d", &nums[row][m]);
			a += nums[row][m];
		}
		printf("第%d行数字和为%d\n", row + 1, a);
		a = 0;
	}
	for (n = 0; n < 5; n++)
	{
		b = 0;
		int k;
		for (k = 0; k < 5; k++)
		{
			b += nums[k][n];
		}
		printf("第%d列数字和为%d\n", n + 1, b);
		b = 0;
	}
	return 0;
}

