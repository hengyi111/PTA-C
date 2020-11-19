// 习题8-10 输出学生成绩 (20分)
// 本题要求编写程序，根据输入学生的成绩，统计并输出学生的平均成绩、最高成绩和最低成绩。建议使用动态内存分配来实现。

// 输入格式：
// 输入第一行首先给出一个正整数N，表示学生的个数。接下来一行给出N个学生的成绩，数字间以空格分隔。

// 输出格式：
// 按照以下格式输出：

// average = 平均成绩
// max = 最高成绩
// min = 最低成绩
// 结果均保留两位小数。

// 输入样例：
// 3
// 85 90 95
// 输出样例：
// average = 90.00
// max = 95.00
// min = 85.00

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n, total = 0;
    int max_n = INT_MIN, min_n = INT_MAX;
    scanf("%d", &n);
    int *scores = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &scores[i]);
        total += scores[i];
        if(scores[i]>max_n)
        {
            max_n = scores[i];
        }
        if(scores[i]<min_n)
        {
            min_n = scores[i];
        }
    }
    printf("average = %.2f\n", (double)total / n);
    printf("max = %.2f\n", (double)max_n);
	printf("min = %.2f\n", (double)min_n);
}