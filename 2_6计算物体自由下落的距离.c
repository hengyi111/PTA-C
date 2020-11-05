// 练习2-6 计算物体自由下落的距离 (5分)
// 一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为10米/秒
// ​2
// ​​ 。

// 输入格式:
// 本题目没有输入。

// 输出格式:
// 按照下列格式输出

// height = 垂直距离值
// 结果保留2位小数。

#include<stdio.h>

int main()
{
    int time = 3;
    const int G = 10;
    double height;
    height = 0.5 * G * time * time;
    printf("height = %.2f", height);
    return 0;
}