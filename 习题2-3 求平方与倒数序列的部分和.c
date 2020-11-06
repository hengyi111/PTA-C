// 习题2-3 求平方与倒数序列的部分和 (15分)
// 本题要求对两个正整数m和n（m≤n）编写程序，计算序列和
//m2+1/m+(m+1)2+1/(m+1)+⋯+n​2+1/n。

// 输入格式:
// 输入在一行中给出两个正整数m和n（m≤n），其间以空格分开。

// 输出格式:
// 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。

// 输入样例:
// 5 10
// 输出样例:
// sum = 355.845635

#include<stdio.h>

double func(int x)
{
    double out = x * x + 1.0 / x;
    return out;
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    double S=0.0;
    while (m<=n)
    {
        S += func(m);
        m++;
    }
    printf("sum = %.6f", S);

    return 0;
}