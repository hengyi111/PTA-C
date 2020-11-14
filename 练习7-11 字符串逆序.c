// 练习7-11 字符串逆序 (15分)
// 输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。

// 输入格式：
// 输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

// 输出格式：
// 在一行中输出逆序后的字符串。

// 输入样例：
// Hello World!
// 输出样例：
// !dlroW olleH

#include<stdio.h>

int main()
{
    char string[80];
    int p = 0;
    // read string
    while((string[p]=getchar())!='\n')
    {
        p++;
    }
    string[p] = '\0';

    // print the string by reversed order
    for (int i = p-1; i >= 0;i--)
    {
        printf("%c", string[i]);
    }
    return 0;
}