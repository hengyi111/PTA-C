// 练习4-11 统计素数并求和 (20分)
// 本题要求统计给定整数M和N区间内素数的个数并对它们求和。

// 输入格式:
// 输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

// 输出格式:
// 在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

// 输入样例:
// 10 31
// 输出样例:
// 7 143

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int x)
{
    if(x<=1)  // consider the special situation
    {
        return false;
    }
    else if(x==2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= (int)(sqrt(x) + 1); i++)  // speed up
        {
            if(x%i==0)
            {
                return false;
            }
        }
        return true;
    }
    
}

int main()
{
    int M, N;
    int count = 0;
    int total = 0;
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N;i++)
    {
        if(isPrime(i))
        {
            count++;
            total += i;
        }
    }
    printf("%d %d\n", count, total);
    return 0;
}