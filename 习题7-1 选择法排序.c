// 习题7-1 选择法排序 (20分)
// 本题要求将给定的n个整数从大到小排序后输出。

// 输入格式：
// 输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。

// 输出格式：
// 在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。

// 输入样例：
// 4
// 5 1 7 6
// 输出样例：
// 7 6 5 1


// 思路：选择排序(Selection-sort)
// 首先在未排序序列中找到最大元素，存放到排序序列的起始位置.然后，
// 再从剩余未排序元素中继续寻找最大元素，然后放到已排序序列的第二位。
// 以此类推，直到所有元素均排序完毕。 
#include<stdio.h>

int main()
{

    int n;
    int array[10];  // save the numbers 
    scanf("%d\n", &n);
    // read in the array
    for (int k = 0; k < n;k++)
    {
        scanf("%d", &array[k]);
    }
    int max_index, temp;  // save the index of the max number and the max number
    // selection sort
    for (int i = 0; i < n - 1;i++)  // 0 to n-2
    {
        max_index = i;
        for (int j = i + 1; j < n ;j++)  // 1 to n-1
        {
            if(array[j]>array[max_index])
            {
                max_index = j;
            }
        }
        // 交换最大值和该次循环的起始位置
        temp = array[i];
        array[i] = array[max_index];
        array[max_index] = temp;
    }

    for (int k = 0; k < n;k++)
    {
        printf("%d", array[k]);
        // 行末没有空格
        if(k<n-1)
        {
            printf(" ");
        }
    }
    return 0;
}

