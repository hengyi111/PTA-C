// 习题9-1 时间换算 (15分)
// 本题要求编写程序，以hh:mm:ss的格式输出某给定时间再过n秒后的时间值（超过23:59:59就从0点开始计时）。

// 输入格式：
// 输入在第一行中以hh:mm:ss的格式给出起始时间，第二行给出整秒数n（<60）。

// 输出格式：
// 输出在一行中给出hh:mm:ss格式的结果时间。

// 输入样例：
// 11:59:40
// 30
// 输出样例：
// 12:00:10
#include<stdio.h>

typedef struct time
{
    int h;
    int m;
    int s;
}T;

int main()
{
    T t1;
    int n;
    scanf("%d:%d:%d\n", &t1.h, &t1.m, &t1.s);
    scanf("%d", &n);  // n<60
    if(t1.s+n<=59)
    {
        t1.s += n;
    }
    else if(t1.m+1<=59)  // min+1
    {
        t1.m += 1;
        t1.s = (t1.s+n) % 60;
    }
    else if(t1.h+1<=23)  // hour+1
    {
        t1.h += 1;
        t1.m = (t1.m + 1) % 60;
        t1.s = (t1.s + n) % 60;
    }
    else
    {
       t1.s=(t1.s+n)%60;
       t1.m=0;
       t1.h=0;
    }
    // 02d，保证显示两位整数
    printf("%02d:%02d:%02d", t1.h, t1.m, t1.s);
    return 0;
}