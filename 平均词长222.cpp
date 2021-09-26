#include <stdio.h>
int main()
{
	int i=1 , sum=0;
	char ch;
	
	printf("Enter a sentence: ");
	
	while((ch = getchar()) != '\n')
	{
		switch(ch)
		{
			case' ':
				i++;
				break;
			default:
			    sum++;
			    break;
		}
	}
	printf("Average word length: %.1f\n",(float)sum/(float)i);
	printf("%d\n%d\n",sum,i);
	return 0;
}
