 #include <stdio.h>
 int main()
 {
 	int a[10];
 	*a = 7;
 	*(a+1)=8;
 	printf("%d",a[1]);
 	return 0;
  } 
