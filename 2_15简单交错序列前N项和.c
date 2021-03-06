// 本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。

// 输入格式:
// 输入在一行中给出一个正整数N。

// 输出格式:
// 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。

// 输入样例:
// 10
// 输出样例:
// sum = 0.819

#include<stdio.h>

int main()
{

    int N;
    int sign = 1;
    scanf("%d", &N);
    double S=0;
    int denominator = 1; // 分母
    for (int i = 0; i < N;i++)
    {
        
        S += sign*1.0 / denominator;
        sign = -sign;
        denominator += 3;
    }
    printf("sum = %.3f", S);
    return 0;
}