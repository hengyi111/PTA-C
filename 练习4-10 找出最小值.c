// 练习4-10 找出最小值 (20分)
// 本题要求编写程序，找出给定一系列整数中的最小值。

// 输入格式：
// 输入在一行中首先给出一个正整数n，之后是n个整数，其间以空格分隔。

// 输出格式：
// 在一行中按照“min = 最小值”的格式输出n个整数中的最小值。

// 输入样例：
// 4 -2 -123 100 0
// 输出样例：
// min = -123

#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    int min_number = INT_MAX;  // fisrt include limits.h
    scanf("%d", &n);
    int input_number;
    while(n)
    {
        scanf("%d", &input_number);
        n--;
        if(input_number<min_number)
        {
            min_number = input_number;
        }

    }
    printf("min = %d\n", min_number);

    return 0;
}
