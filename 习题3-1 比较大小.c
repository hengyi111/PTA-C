// 习题3-1 比较大小 (10分)
// 本题要求将输入的任意3个整数从小到大输出。

// 输入格式:
// 输入在一行中给出3个整数，其间以空格分隔。

// 输出格式:
// 在一行中将3个整数从小到大输出，其间以“->”相连。

// 输入样例:
// 4 2 8
// 输出样例:
// 2->4->8

#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int out1, out2, out3;  // 1-3 more and more bigger
    if(a>=b)
    {
        if(b>=c)
        {
            out1 = c;
            out2 = b;
            out3 = a;
        }
        else if(a>=c)
        {
            out1 = b;
            out2 = c;
            out3 = a;
        }
        else
        {
            out1 = b;
            out2 = a;
            out3 = c;
        }
    }
    else
    {
        if(b<c)
        {
            out1 = a;
            out2 = b;
            out3 = c;
        }
        else if(a<c)
        {
            out1 = a;
            out2 = c;
            out3 = b;
        }
        else
        {
            out1 = c;
            out2 = a;
            out3 = b;
        }
        
        
    }
    printf("%d->%d->%d\n", out1, out2, out3);
    return 0;
}


