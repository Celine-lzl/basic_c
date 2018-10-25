#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__
#define ROW 3  //行
#define COL 3  //列
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu(void);//开始菜单
void init(char arr[ROW][COL], int row, int col);//初始化数组
void printboard(char arr[ROW][COL], int row, int col);//游戏棋盘
void playermove(char arr[ROW][COL],int row,int col);  //玩家走
void computermove(char arr[ROW][COL], int row, int col);  //电脑走
int win(char arr[ROW][COL], int row, int col);   //判断胜利
#endif // __GAME_H__
