// 本题要求编写程序，计算学生们的平均成绩，并统计及格（成绩不低于60分）的人数。题目保证输入与输出均在整型范围内。

// 输入格式:
// 输入在第一行中给出非负整数N，即学生人数。第二行给出N个非负整数，即这N位学生的成绩，其间以空格分隔。

// 输出格式:
// 按照以下格式输出：

// average = 成绩均值
// count = 及格人数
// 其中平均值精确到小数点后一位。

// 输入样例:
// 5
// 77 54 92 73 60
// 输出样例:
// average = 71.2
// count = 4

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int pass_numbers = 0;
    double total = 0.0;
    double average;
    int current;
    for (int i = 0; i < N;i++)
    {
        scanf("%d", &current);
        if(current>=60)
        {
            pass_numbers++;
        }
        total += current;

    }
    if(N==0)  // when there is no student
    {
        average = 0.0;
    }
    else
    {
        average = total / N;
    }
    
    printf("average = %.1f\ncount = %d\n", average, pass_numbers);
    return 0;
}