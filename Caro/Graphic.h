#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <mmsystem.h>
#include <vector>
#include "Game.h"
#define SIZE  20  // SIZE BÀN CỜ 
#define Black			0
#define DarkBlue		1
#define DarkGreen		2
#define DarkCyan		3
#define DarkRed			4
#define DarkPink		5
#define DarkYellow		6
#define DarkWhite		7
#define Grey			8
#define Blue			9
#define Green			10
#define Cyan			11
#define Red				12
#define Pink			13
#define Yellow			14
#define White			15
#define defaultColor    7 
using namespace std;
#pragma comment(lib, "winmm.lib")


void HienTroChuot();
void AnTroChuot();
void SetConsole(int width, int height);
void Textcolor(int color);
void gotoXY(int x, int y);

void LichSu();
void PrintCaro();
void About();
void Help();
void ScreenStartGame();
void drawBoard();
void PrintScoreBoard();
int ReadChedo(char a[30]);
void ReadNameFile();
void LoadLoad();

void P1();
void P2();
void Draw();
void P1WIN();
void P2WIN();
void PDraw();
void Box();
void box();