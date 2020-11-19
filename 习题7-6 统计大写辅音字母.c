// 习题7-6 统计大写辅音字母 (15分)
// 英文辅音字母是除A、E、I、O、U以外的字母。本题要求编写程序，统计给定字符串中大写辅音字母的个数。

// 输入格式：
// 输入在一行中给出一个不超过80个字符、并以回车结束的字符串。

// 输出格式：
// 输出在一行中给出字符串中大写辅音字母的个数。

// 输入样例：
// HELLO World!
// 输出样例：
// 4

#include<stdio.h>
#include<stdbool.h>

// 判断是否是大写元音字母,是则返回true
bool vowel(char c)
{
    bool ret = false;
    char vowel[5] = "AEIOU"; //字符数组
    for (int i = 0; i < 5;i++)
    {
        if(c==vowel[i])
        {
            ret = true;
        }
    }
    return ret;
}

int main()
{
    char c;
    int count = 0;
    while((c=getchar())!='\n')
    {
        if(c>='A'&&c<='Z'&&!vowel(c))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}