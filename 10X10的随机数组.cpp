#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char a[10][10];
	int row,col,record,times = 25,n;
    const char letters[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R'
	,'S','T','U','V','W','X','Y','Z'};
    //  letters[]数组储存字母，使抽到的相应的a[][]数组赋值为相应字母 
	bool b[10][10] = {false};  //b[][]数组用于存储字母的bool值，是步数不会走到相同的格子 
	
	for(row = 0;row < 10;row++)
	   {
	    for(col = 0;col < 10;col++)
	      a[row][col] = {'.'};    	       //初始化数组全为 '.'
	   } 
	
	srand((unsigned) time(NULL));
	
	row = rand() % 4;
	col = rand() % 4; 
	a[row][col] = letters[0];
	b[row][col] = true;  //使某一个字符为A  
	
	while(times > 0)
	{
	  for(n = 1;n < 26;n++)
	  {  
	    restart: 
	   if(!b[row+1][col] || !b[row-1][col] || !b[row][col+1] || !b[row][col-1]) //判定上下左右是否有路可走 
	   {
		
		record = rand() % 4;   //使record 随机为0 1 2 3中的一个数并储存在record中 
	    switch(record)
	    {
		   	
		   case 0:                      //向左走一格 
			  if(col -1 < 0)
				goto restart;      //走出方格重新选数 
			  if(!b[row][col - 1])            //判定是不是走到相同的地方 
			    {
			    col--;
				a[row][col] = letters[n]; 
			    b[row][col] = true;
				break;
			    }
			  else         //若走到相同的地方，则重新选一个数字 
				goto restart;
	       case 1:                      //向右走一格 
			  if(col+1 > 9)
				goto restart;
			  if(!b[row][col+1])
			    {
			    col++;
			    a[row][col] = letters[n];
			    b[row][col] = true;
			    break;
		        }
		      else
				goto restart;
	       case 2:                      //向上走一格 
			  if(row -1 < 0)
				goto restart;
			  if(!b[row -1][col])
			    {
			    row--;
			    a[row][col] = letters[n];
			    b[row][col] = true;
			    break;
		        }
		      else
				goto restart;
	       default:                     //向下走一格       
			  if(row +1 > 9)
				goto restart;
			  if(!b[row +1][col])
			    {
			    row++;
			    a[row][col] = letters[n];
			    b[row][col] = true;
			    break;
		        }
		      else
				goto restart;
	    }
		times--;
       }
        else
         goto endding;
     }
    }
    endding:
	
	for(row = 0 ;row < 9;row++)
     {
     	for(col = 0;col < 9;col++)
     	  printf("%c ",a[row][col]);
     	printf("\n");
	 }
    
	return 0;
}
