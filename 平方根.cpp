#include <stdio.h>

int main(void)
{
   float num,x,ave,y;
   int i;
   printf("输入一个数： ");
   scanf("%f",&x);
   y = num=1;
   for(i = 0;i < 20;i++)
   {
   	   ave=(y + x/y)/2;
   	   y = ave;
   }
   
    printf("%f的平方根是%f",x,ave);
	return 0;
}  


