// 习题11-7 奇数值结点链表 (20分)**
// 本题要求实现两个函数，分别将读入的数据存储为单链表、将链表中奇数值的结点重新组成一个新的链表。链表结点定义如下：

// struct ListNode {
//     int data;
//     ListNode *next;
// };
// 函数接口定义：
// struct ListNode *readlist();
// struct ListNode *getodd( struct ListNode **L );
// 函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。

// 函数getodd将单链表L中奇数值的结点分离出来，重新组成一个新的链表。返回指向新链表头结点的指针，同时将L中存储的地址改为删除了奇数值结点后的链表的头结点地址（所以要传入L的指针）。

// 裁判测试程序样例：
// #include <stdio.h>
// #include <stdlib.h>

// struct ListNode {
//     int data;
//     struct ListNode *next;
// };

// struct ListNode *readlist();
// struct ListNode *getodd( struct ListNode **L );
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
//     struct ListNode *L, *Odd;
//     L = readlist();
//     Odd = getodd(&L);
//     printlist(Odd);
//     printlist(L);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// 1 2 2 3 4 5 6 7 -1
// 输出样例：
// 1 3 5 7 
// 2 2 4 6 

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
{
    int data;
    struct ListNode *head = NULL;  // 头指针置空
    struct ListNode *ptr;  // 当前节点指针
    while(scanf("%d",&data)&&data!=-1)  // 当读到−1时表示输入结束
    {
        // 申请新内存,地址存入q中
        struct ListNode *q = (struct ListNode*)malloc(sizeof(struct ListNode));
        if (q != NULL)   // 申请内存成功，则构建节点q
        {
            q->data = data;
            q->next = NULL;
        }
        else
        {
            exit(1);  // 失败则退出
        }
        // 如果头结点不为空，也即不是第一个读入的数据。则当前节点ptr指向新节点q
        if(head!=NULL)   
        {
            ptr->next = q;
        }
        // 否则的话，头结点指向q
        else
        {
            head = q;
        }
        ptr = q;  // 当前节点指针ptr永远指向新加入的节点 
    }
    return head;  // 返回头节点
}

// 思路：直接将原链表分成奇数和偶数两个链表，然后返回
struct ListNode *getodd( struct ListNode **L )
{
    struct ListNode *head0=NULL,*p0;  // 用来保存偶数
    struct ListNode *head1=NULL,*p1;  // 用来保存奇数
    while((*L)!=NULL)  // *L是指针，当其不为空
    {
        int data=(*L)->data;  // 获得*L指向的数据
        struct ListNode *q=(struct ListNode*)malloc(sizeof(struct ListNode));
        if(data%2)  // 如果为奇数
        {
            if(q!=NULL)
            {
                q->data=data;
                q->next=NULL;
            }
            else 
            {
                exit(1);
            }
            if(head1!=NULL)
            {
                p1->next=q;
            }
            else
            {
                head1=q;
            } 
            p1=q;  
        }         
        else // 如果为偶数
        {
            if(q!=NULL)
            {
                q->data=data;
                q->next=NULL;
            }
            else 
            {
                exit(1);
            }
            if(head0!=NULL)
            {
             p0->next=q;
            }
            else 
            {
                head0=q;
            }
            p0=q;
        }
        *L=(*L)->next;    // 原链表指针*L指向下一个数据
    }
    *L=head0; //分离结束以后 L 储存偶数的值 
    return head1; //返回奇数的值 
}