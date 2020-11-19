// 习题9-4 查找书籍 (20分)
// 给定n本书的名称和定价，本题要求编写程序，查找并输出其中定价最高和最低的书的名称和定价。

// 输入格式:
// 输入第一行给出正整数n（<10），随后给出n本书的信息。每本书在一行中给出书名，即长度不超过30的字符串，随后一行中给出正实数价格。题目保证没有同样价格的书。

// 输出格式:
// 在一行中按照“价格, 书名”的格式先后输出价格最高和最低的书。价格保留2位小数。

// 输入样例:
// 3
// Programming in C
// 21.5
// Programming in VB
// 18.5
// Programming in Delphi
// 25.0
// 输出样例:
// 25.00, Programming in Delphi
// 18.50, Programming in VB


// 注解：关于输入函数
// 首先知道：空白符指的是：空格符、制表符、回车
// 1.gets功能为读入一行，并将换行符转换为字符串结束符。
// 2.scanf("%s",s);读入时，遇到空白字符，包括空格，制表符，换行符时均会停止输入。
// 从功能上可以看出不同之处：
// 1)终止条件不同。gets只有遇到\n时才会结束输入，而scanf遇到空格或制表符时，也会结束输入。
// 2)终止后，对终止字符处理不同。比如输入为"test\nabcd"。
// 执行gets后，\n不会留在缓冲区中，即这时调用getchar得到的字符是'a'。
// 执行scanf后，\n会留在缓冲区，这时调用getchar得到的字符是'\n'。
// 综上：使用scanf,会在缓冲区留下一个多余的换行符
// 要么在使用getchar或者scanf读入换行符，要么在使用scanf的时候就把换行符读进去。
// 如下：scanf("%lf\n", &books[i].price);  

#include<stdio.h>

struct book_info
{
    char name[31];
    double price;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct book_info books[10];
    int index_max = 0, index_min = 0;
    for (int i = 0; i < n;i++)
    {
        getchar();  // 用这个先去掉多余的缓冲符
        // 系统提示,gets并不安全,且被抛弃了
        gets(books[i].name);  // 读入字符串,遇到换行结束
        scanf("%lf", &books[i].price);  
        if(books[i].price>books[index_max].price)
        {
            index_max = i;
        }
        if(books[i].price<books[index_min].price)
        {
            index_min = i;
        }
    }
    printf("%.2lf, %s\n",books[index_max].price,books[index_max].name);
    printf("%.2lf, %s\n",books[index_min].price,books[index_min].name);
    return 0;
}


// 第二种方法，直接读入换行
/*
#include<stdio.h>

struct book_info
{
    char name[31];
    double price;
};

int main()
{
    int n;
    scanf("%d\n", &n);  // 直接读入换行
    struct book_info books[10];
    int index_max = 0, index_min = 0;
    for (int i = 0; i < n;i++)
    {
        // 系统提示,gets并不安全,且被抛弃了
        gets(books[i].name);  // 读入字符串,遇到换行结束
        scanf("%lf\n", &books[i].price);  // 读入换行
        if(books[i].price>books[index_max].price)
        {
            index_max = i;
        }
        if(books[i].price<books[index_min].price)
        {
            index_min = i;
        }
    }
    printf("%.2lf, %s\n",books[index_max].price,books[index_max].name);
    printf("%.2lf, %s\n",books[index_min].price,books[index_min].name);
    return 0;
}
*/

