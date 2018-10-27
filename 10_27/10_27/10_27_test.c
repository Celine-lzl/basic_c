#define _CRT_SECURE_NO_WARNINGS 1
//#define N 10
//int main()
//{
//	int a[N][N];
//	int j = 0;
//	int i = 0;
//	for(i=0; i<N; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for(i=2; i<N; i++)
//	{
//		for(j=1; j<i; j++)
//		{
//			a[i][j] = a[i-1][j]+a[i-1][j-1];
//		}
//	}
//	for(i=0; i<N; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf(" \n");
//	}
//	return 0;
//}


//  1234567
//     *     第一行，三个空格（4-1），1个星号（2*1-1）
//    ***    第二行，两个空格（4-2），3个星号（2*2-1）
//	 *****   第三行，一个空格（4-3），5个星号（2*3-1）
//  *******  第四行，没有空格（4-4），7个星号（2*4-1）
//   *****   5
//    ***	 6
//	   *	 7

//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	int line = 0;  //上半部分行数
//	int i = 0; 
//	int j = 0;
//	int n = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		for (n = 0; n < line - 1 - i; n++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i+1; j++)
//		{
//				printf("*");
//		}
//			printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (n = 0; n < i + 1; n++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	system("pause");
//	return 0;
//}


  //1234567
  //   *     第一行，三个空格（4-1），1个星号（2*1-1）
  //  ***    第二行，两个空格（4-2），3个星号（2*2-1）
  // *****   第三行，一个空格（4-3），5个星号（2*3-1）
  //*******  第四行，没有空格（4-4），7个星号（2*4-1）
  // *****   5
  //  ***	   6
  //   *	   7
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int s = 0;
	int row = 0;
	printf("请输入你要打印的上半部分的行数 \n");
	scanf("%d",&row);
	for(i=1; i <= row; i++)		//首先打印上半部分
	{
		for(j=1; j <= row-i; j++)
		{
			printf(" ");
		}
		for(s=1; s <= (2*i-1); s++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=row-1; i > 0; i--)		//打印下半部分  
	{
		for(j=row-i; j >0; j--) 
		{
			printf(" ");
		}
		for(s=(2*i-1); s > 0; s--)
		{
			printf("*");
		}
		printf("\n");
	}

return 0;
}