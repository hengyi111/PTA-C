// 练习7-4 找出不是两个数组共有的元素 (20分)**
// 给定两个整型数组，本题要求找出不是两者共有的元素。

// 输入格式:
// 输入分别在两行中给出两个整型数组，每行先给出正整数N（≤20），随后是N个整数，其间以空格分隔。

// 输出格式:
// 在一行中按照数字给出的顺序输出（先第一个数组，再第二个数组）不是两数组共有的元素，数字间以空格分隔，
// 但行末不得有多余的空格。题目保证至少存在一个这样的数字。同一数字不重复输出。

// 输入样例:
// 10 3 -5 2 8 0 3 5 -15 9 100
// 11 6 4 8 2 6 -5 9 0 100 8 1
// 输出样例:
// 3 5 -15 6 4 1


// 思路：（1）array1中的每个元素逐个与array2中的全部元素进行对比，得到不同的
// 元素，如果该元素没有出现在保存两者不共有元素的out数组中，则加入out中。
//（2）array2中的每个元素逐个与array1中的全部元素进行对比，得到不同的元素，
// 如果该元素没有出现在保存两者不共有元素的out数组中，则加入。
// 注意：printf(" "); // printf的输出，全部使用双引号“”，就算是换行printf("\n")也是,
// 不然会报错。因为其输出的就是字符串。同样的scanf也是使用双引号。

#include<stdio.h>

int main()
{
    int n1, n2, array1[20], array2[20];
    int out[40], out_len = 0;  // 用来保存不是两个数组共有的元素的数组out
    // read in 2 arrays
    scanf("%d", &n1);
    for (int i = 0; i < n1;i++)
    {
        scanf("%d", &array1[i]);
    }
    scanf("%d", &n2);
    for (int i = 0; i < n2;i++)
    {
        scanf("%d", &array2[i]);
    }
    // 遍历找是否相等
    // （1）array1中的每个元素逐个与array2中的全部元素进行对比
    for (int i = 0; i < n1;i++)
    {
        int flag = 1;  // 默认为不相等
        for (int j = 0; j < n2;j++)
        {
            if(array1[i]==array2[j])
            {
                flag = 0;  // 一旦相等，则flag置为0，并且break
                break;
            }
        }
        if (flag==1)  // 如果遍历完都不相等
        {
            // 判断该数是否与已有数组中元素重复，未重复则加入
            int flag1 = 1; // 默认为不重复
            for (int k = 0; k < out_len;k++)
            {
                if(array1[i]==out[k])  // 如果重复
                {
                    flag1 = 0;
                    break;
                }
            }
            if (flag1==1)  // 遍历完之后不重复,则将元素增添到out中
            {
                out[out_len] = array1[i];
                out_len++;  // out的长度计数加一
            }
        }
    }

    // （2）array2中的每个元素逐个与array1中的全部元素进行对比，与上面基本相同
    for (int i = 0; i < n2;i++)
    {
        int flag = 1;  // 默认为不相等
        for (int j = 0; j < n1;j++)
        {
            if(array2[i]==array1[j])
            {
                flag = 0;  // 一旦相等，则flag置为0，并且break
                break;
            }
        }
        if (flag==1)  // 如果遍历完都不相等
        {
            // 判断该数是否与已有数组中元素重复，未重复则加入
            int flag1 = 1;
            for (int k = 0; k < out_len;k++)
            {
                if(array2[i]==out[k])  // 如果重复
                {
                    flag1 = 0;
                    break;
                }
            }
            if (flag1==1)  // 遍历完之后不重复,则将元素增添到out中
            {
                out[out_len] = array2[i];
                out_len++;  // 计数加一
            }
        }
    }

    // 输出两数组中，不重复的元素
    for (int q = 0; q < out_len;q++)
    {
        printf("%d", out[q]);
        if(q<out_len-1)
        {
            printf(" "); // printf的输出，全部使用双引号“”
        }
    }
    return 0;
}
    
