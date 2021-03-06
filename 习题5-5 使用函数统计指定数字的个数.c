// 习题5-5 使用函数统计指定数字的个数 (15分)
// 本题要求实现一个统计整数中指定数字的个数的简单函数。

// 函数接口定义：
// int CountDigit( int number, int digit );
// 其中number是不超过长整型的整数，digit为[0, 9]区间内的整数。函数CountDigit应返回number中digit出现的次数。

// 裁判测试程序样例：
// #include <stdio.h>

// int CountDigit( int number, int digit );

// int main()
// {
//     int number, digit;

//     scanf("%d %d", &number, &digit);
//     printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// -21252 2
// 输出样例：
// Number of digit 2 in -21252: 3

#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit( int number, int digit )
{
    int count = 0;
    if(number<0)
    {
        number = -number;
    }
    do  // 用do while 保证输入为0 0时也能执行一次
    {
        if(number%10==digit)
        {
            count += 1;
        }
        number /= 10;  
    } while (number);

    return count;
}

