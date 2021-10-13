#include <Stdio.h>

int judge (int a,int b,int c,int d,int l)
{
	if(a == b*b*b + c*c*c + d*d*d)
	{
	printf("%d ",a);
    l++;
	}
}

int main()
{
    int T,m1,m2,m3,n1,n2,n3,m,n,i,l=0;  //将三位数m和n的每一个数位分开 
    scanf("%d",&T) ;
	
	
	for(i = 0;i < T;i++)    //检测每一行的数的范围 
	{
	   scanf("%1d%1d%1d %1d%1d%1d",&m1,&m2,&m3,&n1,&n2,&n3);
	   m = 100*m1 + 10*m2 + m3;
	   n = 100*n1 + 10*n2 + n3;
	   if(m1 < n1)
	   {
	    for(;m1<n1;m1++)
	     {
	        for(;m2<=9;m2++)
	        {
	 	       for(;m3<=9;m3++)
	 	       {	
			   m = 100*m1 + 10*m2 + m3;
	 	       judge (m,m1,m2,m3,l);
	 	       }
	 	       m3 = 0;
	 	    }
	 	    m2 = 0;
	     }
       }
       else
         {
         	if(m2 < n2)
         	{
			    for(;m2 < n2;m2++)
         	     {
         	     	for(;m3 < 10;m3++)
         	     	{
         	     		m = 100*m1 + 10*m2 + m3;
	 	                judge (m,m1,m2,m3,l);
					}  
					m3 = 0;	
				 }
		    }
		    else
		    {
		    	for(;m3 <= n3;m3++)
		    		{
					m = 100*m1 + 10*m2 + m3;
	 	            judge (m,m1,m2,m3,l);
					}
			}
		 }
        if(l==0)
        printf("-1");
	}
	
	
	
	return 0;
} 
