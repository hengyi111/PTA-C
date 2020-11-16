// 习题8-4 报数 (20分)**
// 报数游戏是这样的：有n个人围成一圈，按顺序从1到n编好号。从第一个人开始报数，报到m（<n）的人退出圈子；下一个人从1开始报数，报到m的人退出圈子。如此下去，直到留下最后一个人。

// 本题要求编写函数，给出每个人的退出顺序编号。

// 函数接口定义：
// void CountOff( int n, int m, int out[] );
// 其中n是初始人数；m是游戏规定的退出位次（保证为小于n的正整数）。函数CountOff将每个人的退出顺序编号存在数组out[]中。因为C语言数组下标是从0开始的，所以第i个位置上的人是第out[i-1]个退出的。

// 裁判测试程序样例：
// #include <stdio.h>
// #define MAXN 20

// void CountOff( int n, int m, int out[] );

// int main()
// {
//     int out[MAXN], n, m;
//     int i;

//     scanf("%d %d", &n, &m);
//     CountOff( n, m, out );   
//     for ( i = 0; i < n; i++ )
//         printf("%d ", out[i]);
//     printf("\n");

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// 11 3
// 输出样例：
// 4 10 1 7 5 2 11 9 3 6 8 

#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    // out保存以索引为编号的人推出的顺序，取值为1-n
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
// 常规方法为利用队列的push和pop来实现

// 这里利用将数组标识为0来表示该处元素被剔除
void CountOff( int n, int m, int out[] )
{
    int array[MAXN]; // 利用宏定义的数字，不会报错
    // count统计报数过程，index标识退出顺序
    int count = 0, index = 1;
    for (int i = 0; i < n;i++)
    {
        array[i] = 1; // 将原始的列表全部元素，初始化为1,表示该人存在
    }

    int pos=0;  // 用于一直右移报数的索引
    while(index<=n)  // index取值从1到n
    {
        if(array[pos]==1)// 该人存在，则计数加1
        {
            count++;
        }
        if(count==m)  // 计数到了指定的数m
        {
            array[pos] = 0;  // 剔除pos的人
            out[pos] = index;  // pos处数字的退出编号为index
            index++;  // 退出编号增加
            count = 0;// 计数归零，重新开始
        }
        pos++;  // 对pos递增，相当于右移计数
        if(pos==n)  // 越界后从头开始，n就对应于重新开始的第一位
        {
            pos = 0;
        }
    }
}