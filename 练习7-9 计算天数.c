// 练习7-9 计算天数 (15分)
// 本题要求编写程序计算某年某月某日是该年中的第几天。

// 输入格式:
// 输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

// 输出格式:
// 在一行输出日期是该年中的第几天。

// 输入样例1:
// 2009/03/02
// 输出样例1:
// 61
// 输入样例2:
// 2000/03/02
// 输出样例2:
// 62
#include<stdio.h>

int main()
{
    int year, month, day;
    int count = 0;
    // 这种方式可以只读入数字，而不读入分隔符
    scanf("%d/%d/%d", &year, &month, &day);
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
        days[2] = 29;
    }
    while(month)
    {
        count += days[month - 1];
        month--;
    }
    count += day;
    printf("%d", count);
    return 0;
}

