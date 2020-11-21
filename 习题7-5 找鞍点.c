// 习题7-5 找鞍点 (20分)
// 一个矩阵元素的“鞍点”是指该位置上的元素值在该行上最大、在该列上最小。

// 本题要求编写程序，求一个给定的n阶方阵的鞍点。

// 输入格式：
// 输入第一行给出一个正整数n（1≤n≤6）。随后n行，每行给出n个整数，其间以空格分隔。

// 输出格式：
// 输出在一行中按照“行下标 列下标”（下标从0开始）的格式输出鞍点的位置。如果鞍点不存在，则输出“NONE”。题目保证给出的矩阵至多存在一个鞍点。

// 输入样例1：
// 4
// 1 7 4 1
// 4 8 3 6
// 1 6 1 2
// 0 7 8 9
// 输出样例1：
// 2 1
// 输入样例2：
// 2
// 1 7
// 4 1
// 输出样例2：
// NONE


// 思路：先找到每行的最大值和每列的最小值
// 然后遍历矩阵，看元素是否同时满足这两个条件
#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int matrix[6][6];
    int max_row[6], min_col[6];  
    // 数组赋值，需要遍历赋值。
    // 保存最大值的赋最小初值，保存最小值的赋最大初值
    for (int i = 0; i < n;i++)
    {
        max_row[i] = INT_MIN;
        min_col[i] = INT_MAX;
    }
    // 找出每行的最大值和每列的最小值的元素
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);   
            // 在该行上最大
            if (matrix[i][j] > max_row[i])
            {
                max_row[i] = matrix[i][j];
            }
            // 在该列上最小
            if (matrix[i][j] < min_col[j])
            {
                min_col[j] = matrix[i][j];
            }
        }
    }
    // 遍历找到同时满足行最大和列最小的点
    int flag = 0;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            if((matrix[i][j]==min_col[j])&&(matrix[i][j]==max_row[i]))
            {
                flag = 1;
                // 因为设定只有一个，所以找到一个就可以直接输出
                printf("%d %d\n", i, j);
                goto FLAG;
            }

        }
    }
    FLAG:
    if (flag==0)
    {
        printf("NONE\n");
    }
    return 0;
}