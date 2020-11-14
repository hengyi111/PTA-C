// 习题6-8 统计一行文本的单词个数 (15分)
// 本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。

// 输入格式:
// 输入给出一行字符。

// 输出格式:
// 在一行中输出单词个数。

// 输入样例:
// Let's go to room 209.
// 输出样例:
// 5

/*
#include<stdio.h>

int main()
{
    char word[1024];
    int count = 0;
    while(scanf("%s",word)!=EOF)  // scanf read word
    {
        count++;
    }
    printf("%d", count);
    return 0;
}
*/

// way 2
#include<stdio.h>

int main()
{

    char word[1024];
    // gets从标准输入设备读字符串函数，其可以无限读取，
    // 不会判断上限，以回车结束读取，所以程序员应该确保buffer的空间足够大，以便在执行读操作时不发生溢出。
    gets(word);
    int total = 0;
    for (int i = 0; word[i] != '\0';i++)
    {
        if((word[i]!=' ')&&(word[i+1]==' '))  // 通过字符结束和空格开始来判断一个单词
        {
            total++;
        }
        if((word[i]!=' ')&&(word[i+1]=='\0'))
        {
            total++;
        }
    }
    printf("%d", total);
}


