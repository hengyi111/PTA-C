// 习题10-7 十进制转换二进制 (15分)
// 本题要求实现一个函数，将正整数n转换为二进制后输出。

// 函数接口定义：
// void dectobin( int n );
// 函数dectobin应在一行中打印出二进制的n。建议用递归实现。

// 裁判测试程序样例：
// #include <stdio.h>

// void dectobin( int n );

// int main()
// {
//     int n;

//     scanf("%d", &n);
//     dectobin(n);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// 10
// 输出样例：
// 1010

#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void dectobin( int n )
{
    // 这个比较好理解
    if(n==1)
		printf("1");
	if(n==0)
		printf("0");
	if(n>=2)  // 大于2时没法直接用二进制表示
	{
		dectobin(n/2);    //调用函数辗转相除每次除2直到n=1或0
		printf("%d",n%2); //先除后余求进制位上的数字 
	}
}

// 这种方法不是很好理解
/*
void dectobin( int n )
{
    // n/2是必须的
    if(n/2>0)
    {
        dectobin(n / 2);
    }
    printf("%d", n % 2);  // 一直递归完，这个才开始输出
}
*/

