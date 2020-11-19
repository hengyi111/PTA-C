// 习题7-2 求一批整数中出现最多的个位数字 (20分)
// 给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。例如给定3个整数1234、2345、3456，其中出现最多次数的数字是3和4，均出现了3次。

// 输入格式：
// 输入在第1行中给出正整数N（≤1000），在第二行中给出N个不超过整型范围的非负整数，数字间以空格分隔。

// 输出格式：
// 在一行中按格式“M: n1 n2 ...”输出，其中M是最大次数，n1、n2、……为出现次数最多的个位数字，按从小到大的顺序排列。数字间以空格分隔，但末尾不得有多余空格。

// 输入样例：
// 3
// 1234 2345 3456
// 输出样例：
// 3: 3 4

// way 1:consider the input as numbers
/*
#include<stdio.h>

int main()
{
    int n;
    int count[10] = {0};  // count the amount of digits
    scanf("%d\n",&n);
    int k[1000];
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &k[i]);  // read data
        // count the numbers,save counts in count[]
        if(k[i]==0)
        {
            count[0]++;
        }
        else
        {
            while(k[i]!=0)
            {
                count[k[i] % 10]++;
                k[i] /= 10;
            }
        }
    }
    int max_count = 0;  
    for (int i = 0; i < 10;i++)
    {
        if(count[i]>max_count)
        {
            max_count = count[i];
        }
    }
    printf("%d:", max_count);
    for (int i = 0; i < 10; i++)
    {
        if(count[i]==max_count)
        {
            printf(" %d", i);
        }
    }
    return 0;
}
*/

// way 2:consider the input as strings
#include<stdio.h>

int main()
{
    char ch;
    int count[10] = {0};
    int n;
    scanf("%d\n", &n);
    // 逗号表达式，结果为第二个式子的
    while(scanf("%c",&ch),ch!='\n')
    {
        if(ch>='0'&&ch<='9')
        {
            count[ch - '0']++;
        }
    }
    // below is the same as way 1
    int max_count = 0;  
    for (int i = 0; i < 10;i++)
    {
        if(count[i]>max_count)
        {
            max_count = count[i];
        }
    }
    printf("%d:", max_count);
    for (int i = 0; i < 10; i++)
    {
        if(count[i]==max_count)
        {
            printf(" %d", i);
        }
    }
    return 0;

}
