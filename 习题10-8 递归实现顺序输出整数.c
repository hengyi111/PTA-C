// 习题10-8 递归实现顺序输出整数 (15分)
// 本题要求实现一个函数，对一个整数进行按位顺序输出。

// 函数接口定义：
// void printdigits( int n );
// 函数printdigits应将n的每一位数字从高位到低位顺序打印出来，每位数字占一行。

// 裁判测试程序样例：
// #include <stdio.h>

// void printdigits( int n );

// int main()
// {
//     int n;

//     scanf("%d", &n);
//     printdigits(n);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// 12345
// 输出样例：
// 1
// 2
// 3
// 4
// 5

#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printdigits(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
// 输出利用递归做了一个逆序
void printdigits( int n )
{
    if(n<=9)
    {
        printf("%d\n", n);
    }
    else
    {
        printdigits(n / 10);   // 先递归完
        printf("%d\n", n % 10);  // 然后再输出最后一位
    }
}