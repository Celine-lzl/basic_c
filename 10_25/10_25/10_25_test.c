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
            printf("��ѡ���Ƿ�ʼ��Ϸ:");
        }
         i = 1;   
        scanf("%d", &input);
        switch (input)
        {
        case 1:
			printf("��������Ҫѡ�����Ϸ�Ѷ�\n");
			printf("*******************************\n");
			printf("********   0.��   ***********\n");
			printf("***********1.����   ***********\n");
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
			printf("���ڳﱸ�У������ڴ�\n");
			//hell_game();
			else
			printf("�����������������\n");
		
		
        case 0:
            printf("��Ϸ�˳���\n");
        /*    system("pause");*/
            return 0;
            break;
        default:
            printf("�����������������:");
            break;
        }
    }
     return 0;
	}
	
