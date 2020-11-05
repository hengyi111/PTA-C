// 练习2-9 整数四则运算 (10分)
// 本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。

// 输入格式:
// 输入在一行中给出2个正整数A和B。

// 输出格式:
// 在4行中按照格式“A 运算符 B = 结果”顺序输出和、差、积、商。

// 输入样例:
// 3 2
// 输出样例:
// 3 + 2 = 5
// 3 - 2 = 1
// 3 * 2 = 6
// 3 / 2 = 1

#include<stdio.h>
int main()
{
    int A, B;
    //scanf("%d %d", &A, &B);  // input numbers using pointer &
    (void)scanf("%d %d", &A, &B);  // to eliminate the warning
    printf("%d + %d = %d\n", A, B, A + B);
    printf("%d - %d = %d\n", A, B, A - B);
    printf("%d * %d = %d\n", A, B, A * B);
    printf("%d / %d = %d\n", A, B, A / B);

    return 0;
}
//warning: ignoring return value of ‘scanf’, declared 
//with attribute warn_unused_result [-Wunused-result]
//solutions:https://www.e-learn.cn/content/wangluowenzhang/88661
