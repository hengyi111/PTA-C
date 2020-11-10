// 习题4-8 高空坠球 (20分)
// 皮球从某给定高度自由落下，触地后反弹到原高度的一半，再落下，再反弹，……，如此反复。问皮球在第n次落地时，在空中一共经过多少距离？第n次反弹的高度是多少？

// 输入格式:
// 输入在一行中给出两个非负整数，分别是皮球的初始高度和n，均在长整型范围内。

// 输出格式:
// 在一行中顺序输出皮球第n次落地时在空中经过的距离、以及第n次反弹的高度，其间以一个空格分隔，保留一位小数。题目保证计算结果不超过双精度范围。

// 输入样例:
// 33 5
// 输出样例:
// 94.9 1.0

#include<stdio.h>

int main()
{
    long h, n;
    scanf("%ld %ld", &h, &n);
    double distance=h, height = h;
    if(n==0)  // 单独考虑n为0的特殊情况
    {
        distance=0;
        height=0;
    }
    else
    {
        int count = 1;
        // 反正会落一次，使用do while
        do
        {
            height /= 2.0;  // 第一次反弹高度
            distance += 2 * height;  // 第二次总高度
            count++;
        } while (count<n);  // --n与n--在此处效果不同
        // 循环结束后，distance是第n次的，height是第n-1次的。
        height /= 2.0; // 所以height需要再减半
    }
    
    printf("%.1f %.1f", distance, height);
    return 0;
}