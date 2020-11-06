// 本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。

// 输入格式:
// 输入在一行中给出一个不超过12的正整数N。

// 输出格式:
// 在一行中输出整数结果。

// 输入样例:
// 5
// 输出样例:
// 153

#include<stdio.h>

long factorial(int N)
{
    long out = 1;
    while(N>0)
    {
        out *= N;
        N--;
    }
    return out;
}

int main()
{
    int N;
    scanf("%d", &N);
    long out = 0;
    while(N>0)
    {
        out += factorial(N);
        N--;
    }
    printf("%ld", out);
    return 0;
}