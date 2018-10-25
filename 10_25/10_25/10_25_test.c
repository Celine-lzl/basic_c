#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int main()
{
	int chose = 0;									
    int input = 0;
    int i = 0;
	char arr[ROW][COL] = { 0 };
    srand((unsigned int)time(NULL));
    while(1)
    {
        if (i == 0)
        {
            menu();
            init(arr, ROW, COL);
            printf("请选择是否开始游戏:");
        }
         i = 1;   
        scanf("%d", &input);
        switch (input)
        {
        case 1:
			printf("请输入你要选择的游戏难度\n");
			printf("*******************************\n");
			printf("********   0.简单   ***********\n");
			printf("***********1.困难   ***********\n");
			printf("*******************************\n");
			scanf("%d",&chose);
			if(chose==0)
			{
				 printboard(arr, ROW, COL);
				 while (1)
				{
					 playermove(arr, ROW, COL);
					 printboard(arr, ROW, COL);         
					 if(win(arr, ROW, COL)==1)
						 {
							 i = 0;
							 break;
						 }
					 computermove(arr, ROW, COL); 
					 printboard(arr, ROW, COL);
					if (win(arr, ROW, COL) == 1)
						{
						  i = 0;
						 break;
						 }
				  }
            break;
			}
			else if(chose==1)
			printf("正在筹备中，敬请期待\n");
			//hell_game();
			else
			printf("输入错误，请重新输入\n");
		
		
        case 0:
            printf("游戏退出！\n");
        /*    system("pause");*/
            return 0;
            break;
        default:
            printf("输入错误！请重新输入:");
            break;
        }
    }
     return 0;
	}
	
