// 习题4-5 换硬币 (20分)
// 将一笔零钱换成5分、2分和1分的硬币，要求每种硬币至少有一枚，有几种不同的换法？

// 输入格式:
// 输入在一行中给出待换的零钱数额x∈(8,100)。

// 输出格式:
// 要求按5分、2分和1分硬币的数量依次从大到小的顺序，输出各种换法。每行输出一种换法，格式为：“fen5:5分硬币数量, fen2:2分硬币数量, fen1:1分硬币数量, total:硬币总数量”。最后一行输出“count = 换法个数”。

// 输入样例:
// 13
// 输出样例:
// fen5:2, fen2:1, fen1:1, total:4
// fen5:1, fen2:3, fen1:2, total:6
// fen5:1, fen2:2, fen1:4, total:7
// fen5:1, fen2:1, fen1:6, total:8
// count = 4

#include<stdio.h>

int main()
{
    int change;
    scanf("%d", &change);
    int count = 0, total = 0;
    // 先考虑最大面值的硬币，然后逐渐减小。for循环中用递减
    for (int fen5 = change/5; fen5 > 0;fen5--)
    {
        for (int fen2 = (change-5*fen5)/2; fen2>0;fen2--)
        {
            for (int fen1 = (change-5*fen5-2*fen2); fen1 > 0;fen1--)
            {
                if(fen5*5+fen2*2+fen1*1==change)
                {
                    total = fen1 + fen2 + fen5;
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, total);
                    count++;
                }
            }
        }
    }
    printf("count = %d", count);
    return 0;
}