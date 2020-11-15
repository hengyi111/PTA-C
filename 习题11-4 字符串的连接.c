// 习题11-4 字符串的连接 (15分)
// 本题要求实现一个函数，将两个字符串连接起来。

// 函数接口定义：
// char *str_cat( char *s, char *t );
// 函数str_cat应将字符串t复制到字符串s的末端，并且返回字符串s的首地址。

// 裁判测试程序样例：
// #include <stdio.h>
// #include <string.h>

// #define MAXS 10

// char *str_cat( char *s, char *t );

// int main()
// {
//     char *p;
//     char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

//     scanf("%s%s", str1, str2);
//     p = str_cat(str1, str2);
//     printf("%s\n%s\n", p, str1);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// abc
// def
// 输出样例：
// abcdef
// abcdef

#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    // 提前给str1准备两倍长度的空间
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

/* 你的代码将被嵌在这里 */
// way 1
/*
char *str_cat( char *s, char *t )
{
    return strcat(s, t);
}
*/

//way 2
/*
char *str_cat( char *s, char *t )
{
    int len = strlen(s);
    strcpy(&s[len], t);
    return s;
}
*/

// way 3
char *str_cat( char *s, char *t )
{
    int len = strlen(s);
    for (int i = 0; i < len;i++)
    {
        //s[len + i] = t[i];  // 当作数组操作
        *(s + len + i) = *(t + i);  // 当作指针操作
    }
    return s;
}