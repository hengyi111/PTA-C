// 习题11-5 指定位置输出字符串 (20分)**
// 本题要求实现一个函数，对给定的一个字符串和两个字符，打印出给定字符串中从与第一个字符匹配的位置开始到与第二个字符匹配的位置之间的所有字符。

// 函数接口定义：
// char *match( char *s, char ch1, char ch2 );
// 函数match应打印s中从ch1到ch2之间的所有字符，并且返回ch1的地址。

// 裁判测试程序样例：
// #include <stdio.h>

// #define MAXS 10

// char *match( char *s, char ch1, char ch2 );

// int main()
// {
//     char str[MAXS], ch_start, ch_end, *p;

//     scanf("%s\n", str);
//     scanf("%c %c", &ch_start, &ch_end);
//     p = match(str, ch_start, ch_end);
//     printf("%s\n", p);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例1：
// program
// r g
// 输出样例1：
// rog
// rogram
// 输入样例2：
// program
// z o
// 输出样例2：
// (空行)
// (空行)
// 输入样例3：
// program
// g z
// 输出样例3：
// gram
// gram
#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */

// 调用库的方法,需要下面这两个库，并且使用strchr函数
/*
#include<stdlib.h>
#include<string.h>
char *p1 = strchr(s, ch1);
char *p2 = strchr(s, ch2);
*/

// 常规通用方法,??不是很懂
char *match( char *s, char ch1, char ch2 )
{
    char *p = s;
    while(*p&&*p!=ch1)  // *p存在且不等于ch1，则右移
    {
        p++;
    }
    // 此时p指向ch1
    
    // 输出前闭后开的字符串
    int i;
    for (i = 0; (*(p + i)) && (*(p + i)) != ch2;i++)
    {
        printf("%c", *(p + i));
    }
    // 输出字符串的最后一个字符
    if(*(p + i))
    {
        printf("%c", *(p + i));
    }
    printf("\n");
    return p;
}