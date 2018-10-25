#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu(void)					// ��ӡ�˵�������ҽ���ѡ��
{
    printf("************************\n");      
    printf("***  1.��ʼ  0.�˳�  ***\n");
    printf("************************\n");
}

void init(char arr[ROW][COL], int row, int col)	 // ��ά����ĳ�ʼ��
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
 void printboard(char arr[ROW][COL], int row, int col)	// ��ӡ����
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

 void playermove(char arr[ROW][COL], int row, int col)  // �������
 {
     int x = 0;
     int y = 0;
     while (1)
     {
         printf("�����\n����������:>");										
         scanf("%d%d", &x, &y);
         if ((x - 1) < row && (x - 1) >= 0 && (y - 1) < col && (y - 1) >= 0)// ����ʱҪ����ȡֵ��Χ�����ܳ�������
         {
             if (arr[x-1][y-1] == ' ')      // �˴�Ϊ��ʱ���ſ�������
             {
                 arr[x - 1][y - 1] = 'X';  // ���������'X'��ʾ
                 break;
             }
             else							// �����������ѡ��
             {
                 printf("�������������ӣ�������ѡ������!\n");
             }
         }
         else
         {
             printf("�����������!\n");
         }
     }

 }

	 void computermove(char arr[ROW][COL], int row, int col)	 	//��������
 {
     int x = 0;
     int y = 0;
     printf("������:>\n");
     while (1)
     {
         x = rand() % row;			// ȡ����������Χ�����޶�
         y = rand() % col;  
         if (x< row && x >= 0 && y < col && y >= 0)  // �ж�����Ϸ�
         {
             if (arr[x][y] == ' ')    // ����ѡ�������Ϊ��
             {
                 arr[x][y] = '@';   // ����������'@'��ʾ
                 break;
             }
         }
     }
 }



 int win(char arr[ROW][COL], int row, int col)	 // �ж���Ӯ��ƽ��
 {
     int i = 0;
     int j = 0;
     int full = 1;  

         for (i = 0; i < row; i++)
         {
             for (j = 0; j < col; j++)	//�˴�������ٷ�,�г�������Ӯ�ÿ�����
             {
                 if (arr[i][j] == 'X' && arr[i + 1][j + 1] == 'X' && arr[i + 2][j + 2] == 'X' && i<(row-2)&& i<(col - 2)
                     || arr[i][j] == 'X' && arr[i][j + 1] == 'X' && arr[i][j + 2] == 'X' && j<(col-2)
                     || arr[i][j] == 'X' && arr[i + 1][j] == 'X' && arr[i + 2][j] == 'X' && i<(row-2)
                     || arr[i][j] == 'X' && arr[i + 1][j - 1] == 'X' && arr[i + 2][j - 2] == 'X' && i<(row-2)&&(j>=2))  									
                 {
                     printf("��ϲ��Ӯ�ˣ�\n");
                     return 1;
                 }
             }
         }
         for (i = 0; i < row; i++)	//�ж��Ƿ����Ӯ��
         {
             for (j = 0; j < col; j++)  // ͬ�������Ӯ�����һ��
             {
                 if (arr[i][j] == '@'&&arr[i + 1][j + 1] == '@'&&arr[i + 2][j + 2] == '@'&& i<(row - 2) && i<(row - 2)
                     || arr[i][j] == '@'&&arr[i][j + 1] == '@'&&arr[i][j + 2] == '@'&&j<(col - 2)
                     || arr[i][j] == '@'&&arr[i + 1][j] == '@'&&arr[i + 2][j] == '@'&&i<(row - 2)
                     || arr[i][j] == '@'&&arr[i + 1][j - 1] == '@'&&arr[i + 2][j - 2] == '@' && i<(row - 2) && (j >= 2))
                 {
                     printf("����Ӯ�ˣ�\n");
                     return 1;
                 }
             }
         }

         for (i = 0; i < row; i++)	//�ж�������û��,��������Ҫô����Ӯ,Ҫô��ƽ�֡�
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
             printf("ƽ�֣�\n");
             return 1;
         }
     return 0;
 }
