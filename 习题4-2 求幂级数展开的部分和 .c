// 已知函数ex可以展开为幂级数1+x+x​2/2!+x3/3!+⋯+x​k/k!+⋯。现给定一个实数x，要求利用此幂级数部分和求e
// ​x的近似值，求和一直继续到最后一项的绝对值小于0.00001。

// 输入格式:
// 输入在一行中给出一个实数x∈[0,5]。

// 输出格式:
// 在一行中输出满足条件的幂级数部分和，保留小数点后四位。

// 输入样例:
// 1.2
// 输出样例:
// 3.3201

#include<stdio.h>
#include<math.h>

// 当n=1000时，1000！超过了int范围，则采用double
double factorial(int n)  // 0!=1,1!=1
{
    double out = 1;
    while(n)
    {
        out *= n;
        n--;
    }
    return out;
}

int main()
{
    double total=0.0;
    double mid, x;
    scanf("%lf", &x);
    int count = 0;
    do
    {
        mid = pow(x, count) / factorial(count);
        total += mid;
        count++;  // 多加了一次

    } while (mid>=0.00001);
    //求和一直继续到最后一项的绝对值小于0.00001。
    mid = pow(x, count) / factorial(count);
    total += mid;
    printf("%.4f", total);

    return 0;
}