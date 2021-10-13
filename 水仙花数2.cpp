#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&j);
    for(i=0; i<j; i++)
    {
        int m,n,z=0;
        scanf("%d %d",&m,&n);
        int x;
        for(x=m; x<=n; x++)
        {
            int a,b,c;
            a=x/100;
            b=x%100/10;
            c=x%10;

            if(x==a*a*a+b*b*b+c*c*c)
            {
                printf("%d ",x);
                z+=1;
            }
        }
        if(z==0)
        {
            printf("-1");
        }

    }
    return 0;
}

