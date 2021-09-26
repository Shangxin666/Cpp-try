#include <stdio.h>
int main()
{
    int d = 0,n = 0;
    float v1;
    char ch;
    
	printf("Enter a sentence: ");
    
	
	while( getchar()!= '\n')
	  ++n;
      
    v1 = n / d;
	
	printf("Average word length: %d",n);
	return 0;
}
