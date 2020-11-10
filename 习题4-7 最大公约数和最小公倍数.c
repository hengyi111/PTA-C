// 习题4-7 最大公约数和最小公倍数 (15分)
// 本题要求两个给定正整数的最大公约数和最小公倍数。

// 输入格式:
// 输入在一行中给出两个正整数M和N（≤1000）。

// 输出格式:
// 在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。

// 输入样例:
// 511 292
// 输出样例:
// 73 2044

//最大公约数 = 小数 与 （大数%小数） 的最大公约数，用辗转相除法
//最小公倍数 = 两数相乘 / 最大公约数
// 最大公约数：GCD ；最小公倍数：LCM

#include<stdio.h>

int greatest_common_divisor(int m,int n)
{
    int temp;
    if(m<n)  // let m is bigger than n
    {
        temp = n;
        n = m;
        m = temp;
    }
    while(n!=0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }
    return m;
}

int least_common_multiple(int m,int n)
{
    return (m * n / greatest_common_divisor(m, n));
}

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int gcd = greatest_common_divisor(M, N); 
    int lcd = least_common_multiple(M, N);
    printf("%d %d", gcd, lcd);
    return 0;
}