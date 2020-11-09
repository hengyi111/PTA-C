// 练习4-7 求e的近似值 (15分)
// 自然常数 e 可以用级数 1+1/1!+1/2!+⋯+1/n!+⋯ 来近似计算。本题要求对给定的非负整数 n，求该级数的前 n+1 项和。

// 输入格式:
// 输入第一行中给出非负整数 n（≤1000）。

// 输出格式:
// 在一行中输出部分和的值，保留小数点后八位。

// 输入样例:
// 10
// 输出样例:
// 2.71828180

#include<stdio.h>

// 当n=1000时，1000！超过了int范围，则采用double
double factorial(int n)  
{
    double out = 1;
    while(n)
    {
        out *= n;
        n--;
    }
    return out;
}

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 0; i <= n;i++)
    {
        sum += 1.0 / factorial(i);
    }
    printf("%.8lf", sum);

    return 0;
}