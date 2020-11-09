// 习题3-5 三角形判断 (15分)
// 给定平面上任意三个点的坐标(x​1,y1)、(x2,y2)、(x3,y3)，检验它们能否构成三角形。

// 输入格式:
// 输入在一行中顺序给出六个[−100,100]范围内的数字，即三个点的坐标x
// (x​1,y1)、(x2,y2)、(x3,y3)

// 输出格式:
// 若这3个点不能构成三角形，则在一行中输出“Impossible”；若可以，则在一行中输出该三角形的周长和面积，格式为“L = 周长, A = 面积”，输出到小数点后2位。

// 输入样例1:
// 4 5 6 9 7 8
// 输出样例1:
// L = 10.13, A = 3.00
// 输入样例2:
// 4 6 8 12 12 18
// 输出样例2:
// Impossible

#include<stdio.h>
#include<math.h>

// calculate the distance between two points.
double distance(double a1, double b1, double a2, double b2);//function statement

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    c = distance(x1, y1, x2, y2);
    b = distance(x1, y1, x3, y3);
    a = distance(x2, y2, x3, y3);
    double L, S;
    if((a+b>c)&&(a+c>b)&&(b+c>a))  // 判断能否构成三角形
    {
        L = a + b + c;
        // way1:use helen formula to caculate the area of triangle
        double P = L / 2.0;
        S = sqrt(P * (P - a) * (P - b) * (P - c));

        // way2:利用正弦定理计算三角形面积，S=0.5absinC
        // 测评点输入为实数时，这种方法不对。
        // double cosc = (a * a + b * b - c * c) / (2 * a * b);
        // double sinc = sqrt(1 - cosc * cosc);
        // S = 0.5 * a * b * sinc;

        printf("L = %.2lf, A = %.2lf\n", L, S);

    }
    else
    {
        printf("Impossible\n");
    }

    return 0;
}

double distance(double a1,double b1,double a2,double b2)
{
    double length = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2));
    return length;
}
