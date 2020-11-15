// 练习8-8 移动字母 (10分)
// 本题要求编写函数，将输入字符串的前3个字符移到最后。

// 函数接口定义：
// void Shift( char s[] );
// 其中char s[]是用户传入的字符串，题目保证其长度不小于3；函数Shift须将按照要求变换后的字符串仍然存在s[]里。

// 裁判测试程序样例：
// #include <stdio.h>
// #include <string.h>

// #define MAXS 10

// void Shift( char s[] );

// void GetString( char s[] ); /* 实现细节在此不表 */

// int main()
// {
//     char s[MAXS];

//     GetString(s);
//     Shift(s);
//     printf("%s\n", s);

//     return 0; 
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// abcdef
// 输出样例：
// defabc

#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0; 
}

/* 你的代码将被嵌在这里 */

void Shift( char s[] )
{
    char a[3];  // 用来保存那三个数
    for (int i = 0; i < 3;i++)
    {
        a[i] = s[i];
    }
    for (int j = 3; j<strlen(s);j++)  // 左移
    {
        s[j - 3] = s[j];
    }
    for (int k = 0; k < 3;k++)  // 将保存的三个数放到最后
    {
        s[strlen(s) - 1 - (2 - k)] = a[k];
    }
}