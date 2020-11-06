// 本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

// 输入格式:
// 输入在一行中给出一个正整数N。

// 输出格式:
// 在一行中输出部分和的值，结果保留三位小数。

// 输入样例:
// 5
// 输出样例:
// 0.917

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int numerator = 1, denominator = 1; // 分子，分母
    double sign = -1.0;
    double out = 1.0;
    for (int i = 0; i < N-1;i++)
    {
        numerator += 1;
        denominator += 2;
        out += sign*numerator / denominator;
        sign = -sign;

    }
    printf("%.3f", out);
}