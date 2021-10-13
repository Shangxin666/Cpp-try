#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main()

{
	int i, low_rate, num_years, year;
	double value[5];
	
	printf("Enter interest rate: ");
    scanf("%d",&low_rate);
	printf("Enter number of years: ");
	scanf("%d",&num_years);
	
	printf("\nYears"); 
	for(i = 0; i < NUM_RATES; i++)             
	{
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
	}
	printf("\n");         //打印表格第一排 
	
	for(year = 1;year <= num_years; year++)
	{
		printf("%3d    ",year);              
		for(i = 0;i < NUM_RATES; i++)
		{
			value[i] += (low_rate + i )/100.0 * value[i];   //计算新利率 
			printf("%7.2f",value[i]) ;      // 打印新利率 
		}
		printf("\n");		
	} 
	
	return 0;
 } 
