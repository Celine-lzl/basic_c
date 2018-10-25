#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu(void)					// 打印菜单，让玩家进行选择
{
    printf("************************\n");      
    printf("***  1.开始  0.退出  ***\n");
    printf("************************\n");
}

void init(char arr[ROW][COL], int row, int col)	 // 二维数组的初始化
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr[i][j] = ' ';
        }
    }
}
 void printboard(char arr[ROW][COL], int row, int col)	// 打印棋盘
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        printf("------------------------\n");
        printf("|      |       |       |\n");
        printf("|   %c  |   %c   |   %c   |\n",arr[i][0],arr[i][1],arr[i][2]);
        printf("|      |       |       |\n");


    }
			printf("------------------------\n");
}

 void playermove(char arr[ROW][COL], int row, int col)  // 玩家落子
 {
     int x = 0;
     int y = 0;
     while (1)
     {
         printf("玩家走\n请输入坐标:>");										
         scanf("%d%d", &x, &y);
         if ((x - 1) < row && (x - 1) >= 0 && (y - 1) < col && (y - 1) >= 0)// 落子时要考虑取值范围，不能超过棋盘
         {
             if (arr[x-1][y-1] == ' ')      // 此处为空时，才可以落子
             {
                 arr[x - 1][y - 1] = 'X';  // 玩家落子用'X'表示
                 break;
             }
             else							// 否则进行重新选择
             {
                 printf("此坐标已有棋子，请重新选择坐标!\n");
             }
         }
         else
         {
             printf("输入坐标错误!\n");
         }
     }

 }

	 void computermove(char arr[ROW][COL], int row, int col)	 	//电脑落子
 {
     int x = 0;
     int y = 0;
     printf("电脑走:>\n");
     while (1)
     {
         x = rand() % row;			// 取余对随机数范围进行限定
         y = rand() % col;  
         if (x< row && x >= 0 && y < col && y >= 0)  // 判断坐标合法
         {
             if (arr[x][y] == ' ')    // 且所选择的坐标为空
             {
                 arr[x][y] = '@';   // 电脑落子用'@'表示
                 break;
             }
         }
     }
 }



 int win(char arr[ROW][COL], int row, int col)	 // 判断输赢或平局
 {
     int i = 0;
     int j = 0;
     int full = 1;  

         for (i = 0; i < row; i++)
         {
             for (j = 0; j < col; j++)	//此处利用穷举法,列出了所有赢得可能性
             {
                 if (arr[i][j] == 'X' && arr[i + 1][j + 1] == 'X' && arr[i + 2][j + 2] == 'X' && i<(row-2)&& i<(col - 2)
                     || arr[i][j] == 'X' && arr[i][j + 1] == 'X' && arr[i][j + 2] == 'X' && j<(col-2)
                     || arr[i][j] == 'X' && arr[i + 1][j] == 'X' && arr[i + 2][j] == 'X' && i<(row-2)
                     || arr[i][j] == 'X' && arr[i + 1][j - 1] == 'X' && arr[i + 2][j - 2] == 'X' && i<(row-2)&&(j>=2))  									
                 {
                     printf("恭喜你赢了！\n");
                     return 1;
                 }
             }
         }
         for (i = 0; i < row; i++)	//判断是否电脑赢了
         {
             for (j = 0; j < col; j++)  // 同理，和玩家赢的情况一样
             {
                 if (arr[i][j] == '@'&&arr[i + 1][j + 1] == '@'&&arr[i + 2][j + 2] == '@'&& i<(row - 2) && i<(row - 2)
                     || arr[i][j] == '@'&&arr[i][j + 1] == '@'&&arr[i][j + 2] == '@'&&j<(col - 2)
                     || arr[i][j] == '@'&&arr[i + 1][j] == '@'&&arr[i + 2][j] == '@'&&i<(row - 2)
                     || arr[i][j] == '@'&&arr[i + 1][j - 1] == '@'&&arr[i + 2][j - 2] == '@' && i<(row - 2) && (j >= 2))
                 {
                     printf("电脑赢了！\n");
                     return 1;
                 }
             }
         }

         for (i = 0; i < row; i++)	//判断棋盘满没满,棋盘满了要么有人赢,要么是平局。
         {
             for (j = 0; j < col; j++)
             {
                 if (arr[i][j] == ' ')
                 {
                     full = 0;
                 }
             }
         }
         if(1 == full)
         { 
             printf("平局！\n");
             return 1;
         }
     return 0;
 }
