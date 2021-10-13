#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	
	printf("Enter numbers: ");
	scanf("%ld",&n);
	
    do{
	
		while(n > 0)
		{digit = n % 10;   
		if(digit_seen[digit])     //从最低位开始记录各个数位上的数字 
		    break;                // 记录一次之后则使数组相应数字变为true，若另一个数位也是该数字，结束循环 
 		digit_seen[digit] = true;    //记录各个数位上的数字 
		n/= 10;                      //记录更高数位 
        }
	if (n > 0)
	   printf("Repeated digit\n");     //结束循环时若不为零，说明上述循环以break结束，同一数字检测两次，有重复 
	else 
	   printf("No repeated digit\n");   //若为0，则上述循环以无更高数位记录结束，则无重复 
    printf("%ld",n);
    printf("\n");
    
	bool digit_seen[10] = {false};  //重置数组 
    scanf("%ld",&n);                //检测下一个数 
	}while(n > 0);
	return 0;
 } 	
