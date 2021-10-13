int day_of_year(int month,int day,int year)
{
	int Day,m,i,sum;
	int a[12] = {31,m,31,30,31,30,31,31,30,31,30,31};
	if(year%4 == 0 && year%100 != 0 || year%400 == 0)  //如果是闰年 
	   {
	   	   a[1] = 28;
	   	   for(i = 0;i < month - 1;i++)
	   	   sum  += a[i];
	   	   Day = sum + day;
	   }
	else                                    //如果不是闰年 
	   {
	   	   a[1] = 27;
	   	   for(i = 0;i < month - 1;i++)
	   	   sum  += a[i];
	   	   Day = sum + day;
	   }
	   return Day;
}
