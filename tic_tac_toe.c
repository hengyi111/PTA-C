//读入一个3X3的矩阵，矩阵中的数字为1表示该位置上有一个X，
//为0表示为O.程序判断这个矩阵中是否有获胜的一方，
//输出表示获胜一方的字符X或O，或输出无人获胜
#include<stdio.h>

int main()
{
    int board[3][3];// 棋盘大小
    printf("请输入9个取值为0和1的数字：\n");
    // 读入棋子
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    // 默认result为-1表示没人赢，0表示O赢，1表示X赢
    int result = -1;  

    // 1.检查行
    for (int i = 0 ; i < 3&& result == -1; i++)  //result不等于-1了就停止循环 
    {
        int num_x = 0, num_o = 0;  // 每一行重新初始化一次
        for (int j = 0; j < 3;j++)  // 遍历每行的各列
        {
            if(board[i][j]==0)  // 只有可能有两种取值
            {
                num_o++;
            }
            else
            {
                num_x++;
            }
            // 判断是否有人胜利
            if(num_x==3)
            {
                result = 1;
            }
            else if(num_o==3)
            {
                result = 0;
            }
            
        }
    }

    // 2.检查列
    if(result==-1)
    {
        for (int j = 0; j < 3 && result == -1;j++)
        {
            int num_o = 0, num_x = 0;
            for (int i = 0; i < 3;i++)
            {
                if(board[i][j]==0)  // 只有可能有两种取值
                {
                    num_o++;
                }
                else
                {
                    num_x++;
                }
                // 判断是否有人胜利
                if(num_x==3)
                {
                    result = 1;
                }
                else if(num_o==3)
                {
                    result = 0;
                }
            }
        }
    }

    int num_x, num_o;
    // 3.检查主对角线
    if(result==-1)
    {
        num_x = num_o = 0;
        for (int i = 0; i < 3;i++)
        {
            if(board[i][i]==1)
            {
                num_x++;
            }
            else
            {
                num_o++;
            }
            if(num_x==3)
            {
                result = 1;
            }
            else if(num_o==3)
            {
                result = 0;
            }
        }
    }

    // 检查副对角线
    if(result==-1)
    {
        num_x = num_o = 0;
        for (int i = 0; i < 3;i++)
        {
            if(board[i][2-i]==1)
            {
                num_x++;
            }
            else
            {
                num_o++;
            }
            if(num_x==3)
            {
                result = 1;
            }
            else if(num_o==3)
            {
                result = 0;
            }
        }
    }

    // 对结果进行判断
    if(result==-1)
    {
        printf("没人赢！\n");
    }
    else if(result==1)
    {
        printf("X赢了！\n");
    }
    else
    {
        printf("O赢了！\n");
    }
    
    return 0;
}