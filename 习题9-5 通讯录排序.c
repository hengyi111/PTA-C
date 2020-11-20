
// 习题9-5 通讯录排序 (20分)
// 输入n个朋友的信息，包括姓名、生日、电话号码，本题要求编写程序，按照年龄从大到小的顺序依次输出通讯录。题目保证所有人的生日均不相同。

// 输入格式:
// 输入第一行给出正整数n（<10）。随后n行，每行按照“姓名 生日 电话号码”的格式给出一位朋友的信息，其中“姓名”是长度不超过10的英文字母组成的字符串，“生日”是yyyymmdd格式的日期，“电话号码”是不超过17位的数字及+、-组成的字符串。

// 输出格式:
// 按照年龄从大到小输出朋友的信息，格式同输出。

// 输入样例:
// 3
// zhang 19850403 13912345678
// wang 19821020 +86-0571-88018448
// qian 19840619 13609876543
// 输出样例:
// wang 19821020 +86-0571-88018448
// qian 19840619 13609876543
// zhang 19850403 13912345678

// 这个程序运行会有警告
//warning: format '%s' expects argument of type 'char *',
// but argument 2 has type 'char (*)[11]'
#include<stdio.h>

// typedef重命名为F
typedef struct friends
{
    char name[11];
    int birthday;
    char number[18];
}F;

int main()
{
    int n;
    scanf("%d\n", &n);
    F f[10];  // 结构体数组
    // 结构体数组数据读入
    for (int k = 0; k < n;k++)
    {
        scanf("%s %d %s\n", &f[k].name, &f[k].birthday, &f[k].number);
    }
    int max_index;  // 年龄大的索引
    F temp;  // 年龄大的结构体
    // selection sort
    for (int i = 0; i < n - 1;i++)
    {
        max_index = i;
        for (int j = i+1; j < n;j++)
        {
            // 年龄大，则birthday数值小
            if(f[j].birthday<f[max_index].birthday)
            {
                max_index = j;
            }
        }
        // 结构体的选择排序
        temp = f[i];
        f[i] = f[max_index];
        f[max_index] = temp;
    }
    for (int k = 0; k < n;k++)
    {
        printf("%s %d %s\n", f[k].name, f[k].birthday, f[k].number);
    }
    return 0;
}
