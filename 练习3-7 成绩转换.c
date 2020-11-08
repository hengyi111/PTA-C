// 本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

// 大于等于90分为A；
// 小于90且大于等于80为B；
// 小于80且大于等于70为C；
// 小于70且大于等于60为D；
// 小于60为E。
// 输入格式:
// 输入在一行中给出一个整数的百分制成绩。

// 输出格式:
// 在一行中输出对应的五分制成绩。

// 输入样例:
// 90
// 输出样例:
// A

#include<stdio.h>

int main()
{
    int score;
    char level;
    scanf("%d", &score);
    switch (score/10)
    {
    case 10:
    case 9:
        level = 'A';
        break;
    case 8:
        level = 'B';
        break;
    case 7:
        level = 'C';
        break;
    case 6:
        level = 'D';
        break;
    default:
        level = 'E';
        break;
    }
    printf("%c", level);
    return 0;
}