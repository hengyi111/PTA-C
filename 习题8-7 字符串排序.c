// 习题8-7 字符串排序 (20分)
// 本题要求编写程序，读入5个字符串，按由小到大的顺序输出。

// 输入格式：
// 输入为由空格分隔的5个非空字符串，每个字符串不包括空格、制表符、换行符等空白字符，长度小于80。

// 输出格式：
// 按照以下格式输出排序后的结果：

// After sorted:
// 每行一个字符串
// 输入样例：
// red yellow blue green white
// 输出样例：
// After sorted:
// blue
// green
// red
// white
// yellow

#include<stdio.h>
#include<string.h>

#define M 5
#define N 80

int main()
{
    char ch[M][N];
    for (int i = 0; i < M;i++)
    {
        scanf("%s", &ch[i]);  // scanf遇到空格断开
    }
    // 利用strcmp进行字符串比较，利用strcpy进行字符串拷贝
    // 利用选择排序进行排序,最小的放最前面
    /*
    int min_index;
    char temp[N];
    for (int i = 0; i < M - 1;i++)
    {
        min_index = i;
        for (int j = i + 1; j < M;j++)
        {
            if(strcmp(ch[j],ch[min_index])<0)
            {
                min_index = j;
            }
        }
        // 将后处复制到前处
        strcpy(temp, ch[min_index]);
        strcpy(ch[min_index], ch[i]);
        strcpy(ch[i], temp);
    }
    */

    // bubble sort
    // 最大的在最后面
    char temp[N];
    for (int i = 0; i < M - 1;i++)
    {
        for (int j = 0; j < M - 1 - i;j++)
        {
            // 如果前面的比后面的大，则交换
            if(strcmp(ch[j],ch[j+1])>0)
            {
                strcpy(temp, ch[j]);
                strcpy(ch[j], ch[j+1]);
                strcpy(ch[j+1], temp);
            }
        }
    }
    printf("After sorted:\n");
    for (int i = 0; i < M;i++)
    {
        printf("%s\n", ch[i]);
    }
    return 0;
}