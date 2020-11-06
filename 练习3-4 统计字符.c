// 本题要求编写程序，输入10个字符，统计其中英文字母、空格或回车、数字字符和其他字符的个数。

// 输入格式:
// 输入为10个字符。最后一个回车表示输入结束，不算在内。

// 输出格式:
// 在一行内按照

// letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数
// 的格式输出。

// 输入样例:
// aZ &
// 09 Az
// 输出样例:
// letter = 4, blank = 3, digit = 2, other = 1

// 还可以使用ctype.h头文件中的函数来判断字符

#include<stdio.h>

int main()
{
    char c;
    int letter = 0, blank = 0, digit = 0, other = 0;
    for (int i = 0; i < 10;i++)  // only read the fisrt 10 chars
    {
        //c = getchar()  可以用getchar()来获取标准输入的字符
        scanf("%c", &c);
        //C语言中没有连续判断不等，这样会先判断左侧两个，结果再和第三个比
        //if('a'<=c<='z'||'A'<=c<='Z') 不正确
        if(('a'<=c&&c<='z')||('A'<=c&&c<='Z'))
        {
            letter++;
        }
        else if('0'<=c&&c<='9')
        {
            digit++;
        }
        else if(c==' '||c=='\n')
        {
            blank++;
        }
        else
        {
            other++;
        }

    }

    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}