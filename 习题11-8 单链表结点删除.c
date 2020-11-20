// 习题11-8 单链表结点删除 (20分)**
// 本题要求实现两个函数，分别将读入的数据存储为单链表、将链表中所有存储了某给定值的结点删除。链表结点定义如下：

// struct ListNode {
//     int data;
//     ListNode *next;
// };
// 函数接口定义：
// struct ListNode *readlist();
// struct ListNode *deletem( struct ListNode *L, int m );
// 函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。

// 函数deletem将单链表L中所有存储了m的结点删除。返回指向结果链表头结点的指针。

// 裁判测试程序样例：
// #include <stdio.h>
// #include <stdlib.h>

// struct ListNode {
//     int data;
//     struct ListNode *next;
// };

// struct ListNode *readlist();
// struct ListNode *deletem( struct ListNode *L, int m );
// void printlist( struct ListNode *L )
// {
//      struct ListNode *p = L;
//      while (p) {
//            printf("%d ", p->data);
//            p = p->next;
//      }
//      printf("\n");
// }

// int main()
// {
//     int m;
//     struct ListNode *L = readlist();
//     scanf("%d", &m);
//     L = deletem(L, m);
//     printlist(L);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// 10 11 10 12 10 -1
// 10
// 输出样例：
// 11 12 

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) 
     {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
// 和11-7一样
struct ListNode *readlist()
{
    struct ListNode *head=NULL,*ptr;
    int data;
    while(scanf("%d",&data)&&data!=-1)
    {
        struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
        if(q!=NULL)
        {
            q->data = data;
            q->next = NULL;
        }
        else
        {
            exit(1);
        }
        if(head!=NULL)
        {
            ptr->next = q;
        }
        else
        {
            head = q;
        }
        ptr = q;
    }
    return head;
}

// 要注意考虑待删除节点就是头结点的情况
struct ListNode *deletem( struct ListNode *L, int m )
{
    struct ListNode *ptr = L, *q=NULL;
    while(ptr!=NULL)  // 当指向存在时
    {
        if(ptr->data == m)
        {
            if(ptr==L)  // 如果就是第一个节点要被删除
            {
                L = ptr->next;  // 头结点重新指向
            }
            else
            {
                q->next = ptr->next;  // 指向跳过中间元素
            }
        }
        else
        {
            q = ptr;  // q用来指向ptr的前面一个节点
        }
        ptr = ptr->next;   // 每次ptr都需要右移
    }
    return L;
}
