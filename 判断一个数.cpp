#include <stdio.h>
#include<stdbool.h>
int main()
{
    long int num,temp;
    int i=1;
    printf("请输入一个整数：");
    scanf("%ld",&num);
    temp = num;
    
    //获取所输入整数的位数。
    while(temp/10>0){
        i+=1;
        temp = temp/10;
    }
    
    //打印所输入整数的位数，并定义一个bool型数组。
    printf("该数为%d位数。\n",i);
    bool a[i+1];
    
    //初始化数组中所有元素为0.
    for(int j=0;j<i+1;j++){
        a[j] = 0;
    }
    
    //判断是否有重复的数字。
    do{
        int n = num % 10;
        if(a[n]==1){
            printf("出现重复了。\n");
            break;
        }
        a[n] = 1;
        num /= 10;
    }while(num);
    
    if(num==0){
        printf("没有重复。\n");
    }
    
    return 0;
}

