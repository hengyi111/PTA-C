// 习题8-9 分类统计各类字符个数 (15分)
// 本题要求实现一个函数，统计给定字符串中的大写字母、小写字母、空格、数字以及其它字符各有多少。

// 函数接口定义：
// void StringCount( char *s );
// 其中 char *s 是用户传入的字符串。函数StringCount须在一行内按照

// 大写字母个数 小写字母个数 空格个数 数字个数 其它字符个数
// 的格式输出。

// 裁判测试程序样例：
// #include <stdio.h>
// #define MAXS 15

// void StringCount( char *s );
// void ReadString( char *s ); /* 由裁判实现，略去不表 */

// int main()
// {
//     char s[MAXS];

//     ReadString(s);
//     StringCount(s);

//     return 0;
// }

// /* Your function will be put here */
// 输入样例：
// aZ&*?
// 093 Az
// 输出样例：
// 2 2 1 3 4

#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount( char *s )
{
    int count[5] = {0};
    for (int i = 0; s[i];i++)  // s[i]到最后就是为0，则条件不成立
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            count[0]++;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            count[1]++;
        }
        else if (s[i] == ' ')
        {
            count[2]++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            count[3]++;
        }
        else
        {
            count[4]++;
        }
    }
    printf("%d %d %d %d %d\n", count[0], count[1], count[2], count[3], count[4]);
}