// 输入一个非负整数n，生成一张3的乘方表，输出3
// ​0
// ​​ ~3
// ​n
// ​​ 的值。可调用幂函数计算3的乘方。

// 输入格式:
// 输入在一行中给出一个非负整数n。

// 输出格式:
// 按照幂的递增顺序输出n+1行，每行格式为“pow(3,i) = 3的i次幂的值”。题目保证输出数据不超过长整型整数的范围。

// 输入样例:
// 3
// 输出样例:
// pow(3,0) = 1
// pow(3,1) = 3
// pow(3,2) = 9
// pow(3,3) = 27

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n;i++)
    {
        // %ld-long int,(long)convert the return value of power to long integer
        printf("pow(3,%i) = %ld\n", i, (long)pow(3, i));  
    }

    return 0;

}