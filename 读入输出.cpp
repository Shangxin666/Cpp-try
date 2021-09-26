#include <stdio.h>
int main (void)
{
	int weight ,length ,height ,width,volume;
	scanf("%d",&length);
	scanf("%d",&height);
	scanf("%d",&width);
	volume = length * width * height;
	weight = (volume +165)/166; 
	
	printf("Dimensions:%dx%dx%d\n",length,width,height);
	printf("Volume(cubic inches):%d\n",volume);
	printf("Dimensional weight (pounds):%d\n",weight);
	
	return 0;
 } 
