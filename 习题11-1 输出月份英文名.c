// 习题11-1 输出月份英文名 (15分)
// 本题要求实现函数，可以返回一个给定月份的英文名称。

// 函数接口定义：
// char *getmonth( int n );
// 函数getmonth应返回存储了n对应的月份英文名称的字符串头指针。如果传入的参数n不是一个代表月份的数字，则返回空指针NULL。

// 裁判测试程序样例：
// #include <stdio.h>

// char *getmonth( int n );

// int main()
// {
//     int n;
//     char *s;

//     scanf("%d", &n);
//     s = getmonth(n);
//     if ( s==NULL ) printf("wrong input!\n");
//     else printf("%s\n", s);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例1：
// 5
// 输出样例1：
// May
// 输入样例2：
// 15
// 输出样例2：
// wrong input!

#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *getmonth( int n )
{
    // 这是一个一维数组，数组中的每一个元素都是一个char *的字符串
    char *month[12] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    if(n<=0||n>12)
    {
        return NULL;
    }
    else
    {
        return month[n - 1];
    }
    
}
