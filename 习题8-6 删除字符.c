// 习题8-6 删除字符 (20分)
// 本题要求实现一个删除字符串中的指定字符的简单函数。

// 函数接口定义：
// void delchar( char *str, char c );
// 其中char *str是传入的字符串，c是待删除的字符。函数delchar的功能是将字符串str中出现的所有c字符删除。

// 裁判测试程序样例：
// #include <stdio.h>
// #define MAXN 20

// void delchar( char *str, char c );
// void ReadString( char s[] ); /* 由裁判实现，略去不表 */

// int main()
// {
//     char str[MAXN], c;

//     scanf("%c\n", &c);
//     ReadString(str);
//     delchar(str, c);
//     printf("%s\n", str);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// a
// happy new year
// 输出样例：
// hppy new yer

#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* 你的代码将被嵌在这里 */
// 思路：新建一个新的字符串，将元素字符串中不与待删除字符相等的部分复制过去
// 新得到的字符串就是原始字符串删除给定字符后的形态了
#include<string.h>
void delchar( char *str, char c )
{
    char buffer[MAXN];
    strcpy(buffer, str);
    int len = strlen(buffer);
    int count = 0;
    for (int i = 0; i < len;i++)
    {
        if(buffer[i]!=c)
        {
            str[count++] = buffer[i];
        }
    }
    str[count] = '\0';  // 给字符串最后补上字符串的结尾标志
}