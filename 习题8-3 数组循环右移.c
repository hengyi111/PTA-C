// 习题8-3 数组循环右移 (20分)
// 本题要求实现一个对数组进行循环右移的简单函数：一个数组a中存有n（>0）个整数，将每个整数循环向右移m（≥0）个位置，即将a中的数据由
// （a0a1⋯an−1）变换为（an−m⋯an−1a0a1⋯an−m−1）
// （最后m个数循环移至最前面的m个位置）。

// 函数接口定义：
// int ArrayShift( int a[], int n, int m );
// 其中a[]是用户传入的数组；n是数组的大小；m是右移的位数。函数ArrayShift须将循环右移后的数组仍然存在a[]中。

// 裁判测试程序样例：
// #include <stdio.h>
// #define MAXN 10

// int ArrayShift( int a[], int n, int m );

// int main()
// {
//     int a[MAXN], n, m;
//     int i;

//     scanf("%d %d", &n, &m);
//     for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

//     ArrayShift(a, n, m);

//     for ( i = 0; i < n; i++ ) {
//         if (i != 0) printf(" ");
//         printf("%d", a[i]);
//     }
//     printf("\n");

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// 6 2
// 1 2 3 4 5 6
// 输出样例：
// 5 6 1 2 3 4
#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
//（a0a1⋯an−1）变换为（an−m⋯an−1a0a1⋯an−m−1）
int ArrayShift( int a[], int n, int m )
{
    m = m % n;  // 当m大于n时，对m进行取余
    // 这个保存在pta中可以直接运行
    int mid[n]; // 用来存右移后的数组

    // 得到原数组后端数据，存入mid前端
    for (int i = 0; i < m;i++)
    {
        mid[i] = a[n - m + i];
    }
    // 得到原数组前端数据，存入mid后端
    for (int i = 0; i < n - m;i++)
    {
        mid[m + i] = a[i];
    }
    // 将mid中的数据存到a中
    for (int i = 0; i < n;i++)
    {
        a[i] = mid[i];
    }
    return 0;
}

