// 习题10-3 递归实现指数函数 (15分)
// 本题要求实现一个计算x
// ​n
// ​​ （n≥1）的函数。

// 函数接口定义：
// double calc_pow( double x, int n );
// 函数calc_pow应返回x的n次幂的值。建议用递归实现。题目保证结果在双精度范围内。

// 裁判测试程序样例：
// #include <stdio.h>

// double calc_pow( double x, int n );

// int main()
// {
//     double x;
//     int n;

//     scanf("%lf %d", &x, &n);
//     printf("%.0f\n", calc_pow(x, n));

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// 2 3
// 输出样例：
// 8

#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double calc_pow( double x, int n )
{
    if(n==1)
    {
        return x;
    }
    else
    {
        return x * calc_pow(x, n - 1);
    }
    
}

// 一个return语句的写法
/*
double calc_pow( double x, int n ){
    double result;
    if(n==1)
        result=x;
    else
        result=x*calc_pow(x,n-1);
    return result;
}
*/