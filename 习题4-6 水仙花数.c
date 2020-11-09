// 习题4-6 水仙花数 (20分)
// 水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=13+5​3+33。 
// 本题要求编写程序,计算所有N位水仙花数。

// 输入格式:
// 输入在一行中给出一个正整数N（3≤N≤7）。

// 输出格式:
// 按递增顺序输出所有N位水仙花数，每个数字占一行。

// 输入样例:
// 3
// 输出样例:
// 153
// 370
// 371
// 407



#include<stdio.h>
#include<math.h>

// 使用math.h中自带的浮点数pow会超时
// 于是下面自定义了一个只适用于整数的my_pow
int my_pow(int base, int index)
{
	int result = 1;

	for(int i = 0; i < index; ++i)
    {
        result *= base;
    }
	return result;
}


// 每个位上的数字的N次幂之和
int power_N(int N,int number)  // N为位数，number为数值
{
    int out = 0;
    while(number)
    {
        out += my_pow(number % 10,N);
        number /= 10;
    }
    return out;
}

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = my_pow(10, N - 1); i <= my_pow(10, N) - 1;++i)
    {
        if(i==power_N(N,i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}