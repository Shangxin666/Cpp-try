#include<stdio.h> 
int main()
{
	int n,i,m,j,k;
	scanf("%d", &n);
	m = (n + 1) / 2;
	for (i = 1; i <= n; i++)  //一行一行的循环打印
	{
		if (i <= m)           //分两种情况，上半部分和下半部分
		{
			for (j = m - i; j > 0; j--)
				printf(" ");
			for (k = i; k > 0; k--)
				printf("* ");
		}
		else
		{
			for (j = i-m; j > 0; j--)
				printf(" ");
			for (k = 2*m-i; k > 0; k--)
				printf("* ");
		}
		printf("\n");        //注意换行
	}
}

