// 习题7-3 判断上三角矩阵 (15分)
// 上三角矩阵指主对角线以下的元素都为0的矩阵；主对角线为从矩阵的左上角至右下角的连线。

// 本题要求编写程序，判断一个给定的方阵是否上三角矩阵。

// 输入格式：
// 输入第一行给出一个正整数T，为待测矩阵的个数。接下来给出T个矩阵的信息：每个矩阵信息的第一行给出一个不超过10的正整数n。随后n行，每行给出n个整数，其间以空格分隔。

// 输出格式：
// 每个矩阵的判断结果占一行。如果输入的矩阵是上三角矩阵，输出“YES”，否则输出“NO”。

// 输入样例：
// 2
// 3
// 1 2 3
// 0 4 5
// 0 0 6
// 2
// 1 0
// -8 2
// 输出样例：
// YES
// NO


// 思路：对角线下方元素，行索引要大于列索引
// 如果是上三角矩阵，则下方0的个数为n*（n-1）/2个，n为矩阵的尺寸
#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int k = 0; k < T; k++) // matrix's number
    {
        int n;
        scanf("%d", &n);  // matrix's size
        int count_zero = 0;  // count zero‘s number
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n;j++)
            {
                int temp;
                // read matrix's element
                scanf("%d", &temp);
                if((i>j)&&(temp==0))
                {
                    count_zero++;
                }
            }
        }
        // the core formula
        (count_zero == n * (n - 1) / 2) ? printf("YES\n") : printf("NO\n");
        // if(count_zero == n * (n - 1) / 2)
        // {
        //     printf("YES\n");
        // }
        // else
        // {
        //     printf("NO\n");
        // }
    }
    return 0;
}