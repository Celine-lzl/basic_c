#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__
#define ROW 3  //��
#define COL 3  //��
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu(void);//��ʼ�˵�
void init(char arr[ROW][COL], int row, int col);//��ʼ������
void printboard(char arr[ROW][COL], int row, int col);//��Ϸ����
void playermove(char arr[ROW][COL],int row,int col);  //�����
void computermove(char arr[ROW][COL], int row, int col);  //������
int win(char arr[ROW][COL], int row, int col);   //�ж�ʤ��
#endif // __GAME_H__
