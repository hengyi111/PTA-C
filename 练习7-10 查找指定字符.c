// 练习7-10 查找指定字符 (15分)
// 本题要求编写程序，从给定字符串中查找某指定的字符。

// 输入格式：
// 输入的第一行是一个待查找的字符。第二行是一个以回车结束的非空字符串（不超过80个字符）。

// 输出格式：
// 如果找到，在一行内按照格式“index = 下标”输出该字符在字符串中所对应的最大下标（下标从0开始）；否则输出"Not Found"。

// 输入样例1：
// m
// programming
// 输出样例1：
// index = 7
// 输入样例2：
// a
// 1234
// 输出样例2：
// Not Found

#include<stdio.h>

int main()
{
    char c, string[80];  // 
    scanf("%c\n", &c);  // 这个换行符一定要有，很重要
    // 如果用gets，不超过80个字符，加上最后一个'\0'需要string有81个空间，缓冲区一定要够
    //gets(string);  //适用于读字符串，以回车结束。读取的换行符被转换为‘\0’空字符，并由此来结束字符串
    int i = 0;
    while((string[i]=getchar())!='\n')  // 只识别换行结束
    {
        i++;
    }
    string[i]='\0';  // 最后加上'\0'，使其为字符串

    int index = -1;
    for (int j = 0;j<sizeof(string)/sizeof(string[0]);j++)
    {
        if((c==string[j])&&(j>index))
        {
            index = j;
        }
    }
    if(index==-1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("index = %d", index);
    }
    return 0;
}