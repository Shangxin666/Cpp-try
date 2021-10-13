#include <stdio.h>

void split_time(long total_sec,int *hr,int *min,int *sec);

int main(void)
{
	int sec,hour,min,second;
	sec = 3721;
	split_time(sec,&hour,&min,&second);
	printf("%d:%d:%d",hour,min,second);
	return 0;
}



void split_time(long total_sec,int *hr,int *min,int *sec)
{
	*sec = total_sec % 60;
	*min = (total_sec - *sec) / 60 % 60;
	*hr = (total_sec - *sec - 60*(*min))/3600;  
} 
