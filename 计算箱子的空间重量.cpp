#include <stdio.h>
int main (void)
{
	int length = 12,height = 8,volume,width = 10;
	
	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	
	printf("Dimensions:%dx%dx%d\n",length,width,height);
	printf("Volume(cubic inches):%d\n",volume);
	printf("Dimensional weight (pounds):(%d + 165) / 166\n",volume);   //printf("XXX:%d",XX) 会显示XXX的值是XX 
	
	return 0;
}
