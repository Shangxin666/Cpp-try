#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
int main(void)
{
    char a[10][10];
    int i, j;
    generate_random_walk(a);//函数调用
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c  ", a[i][j]);

        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    print_array(a);
    return 0;
}

void generate_random_walk(char walk[10][10])//调用函数，打印矩阵星图。
{
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            walk[i][j] = '.';
}

void print_array(char walk[10][10])//随即步
{
    srand((unsigned)time(NULL));//产生随机数
    char walker = 'A';//初始化变量为A，随机某个位置，也就是说只需要这一个不是伪随机数就行
    int tmp, i = 0, j = 0;
    walk[i][j] = walker;
    walker++;
    for (;;)//终止条件在循环内部，只要能继续走，无限循环下去
    {
        tmp = rand() % 4;//四种方向，随机数模4刚好三种结果。
        if (tmp == 0 && walker <= 'Z')//对零进行约束，且此代表一个大循环条件就是数组元素最多到Z
        {
            if (i >= 1 && walk[i - 1][j] == '.')
            {
                walk[i - 1][j] = walker;
                walker++;
                i = i - 1;//左移
            }//约束不满足，换一个方向，
            else if (i < 9 && walk[i + 1][j] == '.')
            {
                walk[i + 1][j] = walker;
                walker++;
                i = i + 1;//右移
            }
            else if (j > 0 && walk[i][j - 1] == '.')
            {
                walk[i][j - 1] = walker;
                walker++;
                j = j - 1;//下移
            }
            else if (j < 9 && walk[i][j + 1] == '.')
            {
                walk[i][j + 1] = walker;
                walker++;
                j = j + 1;//上移
            }//打印处必须为点，且移动步数不超过矩阵
            else//四个方向都不满足，则终止程序
                break;
        }
        else if (tmp == 1 && walker <= 'Z')//对一进行约束
        {
            if (i < 9 && walk[i + 1][j] == '.')
            {
                walk[i + 1][j] = walker;
                walker++;
                i = i + 1;
            }
            else if (j > 0 && walk[i][j - 1] == '.')
            {
                walk[i][j - 1] = walker++;
                j--;
            }
            else if (j < 9 && walk[i][j + 1] == '.')
            {
                walk[i][j + 1] = walker++;
                j++;
            }
            else if (i > 0 && walk[i - 1][j] == '.')
            {
                walk[i - 1][j] = walker++;
                i--;
            }

            else
                break;//否则不能运行
        }
        else if (tmp == 2 && walker <= 'Z')//
        {
            if (j > 0 && walk[i][j - 1] == '.')
            {
                walk[i][j - 1] = walker;
                walker++;
                j = j - 1;
            }
            else if (j < 9 && walk[i][j + 1] == '.')
            {
                walk[i][j + 1] = walker++;
                j++;
            }
            else if (i > 0 && walk[i - 1][j] == '.')
            {
                walk[i - 1][j] = walker++;
                i--;
            }
            else if (i < 9 && walk[i + 1][j] == '.')
            {
                walk[i + 1][j] = walker++;
                i++;
            }
            else
                break;//否则不能运行
        }
        else if (tmp == 3 && walker <= 'Z')//
        {
            if (j < 9 && walk[i][j + 1] == '.')
            {
                walk[i][j + 1] = walker;
                walker++;
                j = j + 1;
            }
            else if (j > 0 && walk[i][j - 1] == '.')
            {
                walk[i][j - 1] = walker++;
                j--;
            }

            else if (i < 9 && walk[i + 1][j] == '.')
            {
                walk[i + 1][j] = walker++;
                i++;
            }
            else if (i > 0 && walk[i - 1][j] == '.')
            {
                walk[i - 1][j] = walker++;
                i--;
            }
            else
                break;//否则不能运行
        }
        else
            break; //除上述，不能运行。

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c  ", walk[i][j]);
        }
        printf("\n");//打印处理好的矩阵
    }
}
	
