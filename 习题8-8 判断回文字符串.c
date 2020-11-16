// 习题8-8 判断回文字符串 (20分)
// 本题要求编写函数，判断给定的一串字符是否为“回文”。所谓“回文”是指顺读和倒读都一样的字符串。如“XYZYX”和“xyzzyx”都是回文。

// 函数接口定义：
// bool palindrome( char *s );
// 函数palindrome判断输入字符串char *s是否为回文。若是则返回true，否则返回false。

// 裁判测试程序样例：
// #include <stdio.h>
// #include <string.h>

// #define MAXN 20
// typedef enum {false, true} bool;

// bool palindrome( char *s );

// int main()
// {
//     char s[MAXN];

//     scanf("%s", s);
//     if ( palindrome(s)==true )
//         printf("Yes\n");
//     else
//         printf("No\n");
//     printf("%s\n", s);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例1：
// thisistrueurtsisiht
// 输出样例1：
// Yes
// thisistrueurtsisiht
// 输入样例2：
// thisisnottrue
// 输出样例2：
// No
// thisisnottrue

#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome( char *s )
{
    int len = strlen(s);
    for (int i = 0; i < len / 2;i++)
    {
        if(s[i]!=s[len-1-i])  // 比较首尾是否相等
        {
            return false;
        }
    }
    return true;
}