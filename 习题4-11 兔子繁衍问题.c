// 习题4-11 兔子繁衍问题 (15分)
// 一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。假如兔子都不死，请问第1个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到N对？

// 输入格式:
// 输入在一行中给出一个不超过10000的正整数N。

// 输出格式:
// 在一行中输出兔子总数达到N最少需要的月数。

// 输入样例:
// 30
// 输出样例:
// 9

// 看到这种就应该想到斐波那契数列，实际情况也是如此
// 每个月份的兔子数为 1 1 2 3 5 8
/*
#include<stdio.h>

int fib(int x)  // 输出斐波拉契数列的第x个数
{
    if(x==1||x==2)
    {
        return 1;
    }
    return fib(x - 1) + fib(x - 2);
}

int main()
{
    int N;
    scanf("%d", &N);
    int count = 1;
    while(fib(count)<N)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}

*/

// 第二种方法：用循环的方法来做
// 每个月的兔子总对数可以归纳为一个分段函数：
// f(n) = 1 (n=1,2)
// f(n) = f(n-1) + f(n-2) (n=3,4,5)

#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N==1)
    {
        printf("1");
    }
    else
    {
        int x1=1, x2=1;  // 前两个月的兔子数
        int x3;  // 第三个月的兔子数
        int count = 2;  // 月份计数，从二月开始
        for (int i = 2; x2 < N;i++)
        {
            x3 = x1 + x2;
            x1 = x2;
            x2 = x3;
            count++;  // 计数加一
        }
        printf("%d", count);
    }
    return 0;
}





// 另一种斐波那契
/*
#include <stdio.h>

int main()
{
    int i, n;
    int nums[3] = {1, 1};  // 斐波那契数列，用三个数来循环表示出来
    scanf("%d", &n);
	if(n == 1)
		printf("1\n");
	else 
    {
		for(i = 1; nums[i % 3] < n; ++i)  // 当兔子数小于n时循环
			nums[(i + 1) % 3] = nums[i % 3] + nums[(i - 1) % 3];
		printf("%d\n", i + 1);   // 下个月即可达到N
	}
	return 0;
}
*/