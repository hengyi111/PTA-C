// 练习7-3 将数组中的数逆序存放 (20分)
// 本题要求编写程序，将给定的n个整数存入数组中，将数组中的这n个数逆序存放，再按顺序输出数组中的元素。

// 输入格式:
// 输入在第一行中给出一个正整数n（1≤n≤10）。第二行输入n个整数，用空格分开。

// 输出格式:
// 在一行中输出这n个整数的处理结果，相邻数字中间用一个空格分开，行末不得有多余空格。

// 输入样例:
// 4
// 10 8 1 2
// 输出样例:
// 2 1 8 10

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[10];
    for (int i = 0; i < n;i++)  // 实际有多少个就存入多少个
    {
        scanf("%d", &array[i]);
    }
    
    // 对数组中元素进行逆序
    for (int i = 0; i < n/2;i++)  
    {
        int temp = array[n - 1 - i];
        array[n - 1 - i] = array[i];
        array[i] = temp;
    }
    // 输出数组时，数组里面有多少个元素，就输出多少个元素
    // 因为数组的长度是已知的
    for (int i = 0; i < n;i++)
    {
        if(i==n-1)
        {
            printf("%d", array[i]);
        }
        else
        {
            printf("%d ", array[i]);
        }
    }
    return 0;
}