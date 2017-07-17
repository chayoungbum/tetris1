#include <iostream>
#include <string>
#include <conio.h>
#include<windows.h>
using namespace std;
#define UP				72
#define EMPTY 0
void rotation(int shape[5][5])
{
	int i, j;
	int temp[5][5];
	for (i = 0; i<5; i++)
		for (j = 0; j<5; j++)
			temp[j][4 - i] = shape[i][j];
	for (i = 0; i<5; i++)
		for (j = 0; j<5; j++)
			shape[i][j] = temp[i][j];
}
void gotoxy(int x, int y)
{

	COORD Pos = { y - 1,x - 1 };//모니터 좌표를 위한 구조체 선언
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); //실제 좌표를 셋팅
}
int main()
{
	int keys = 0;
	int i = 1;

	int shape[5][5] =
	{
		{ 0,0,0,0,0 },
		{ 0,0,1,0,0 },
		{ 0,0,1,0,0 },
		{ 0,1,1,1,0 },
		{ 0,0,0,0,0 }
	};
	string blocktype = "■";
	string blan_blocktype = "□";
	shape[0][0] = (0, 0);
	while (1) {
		keys = getch();
		if (keys == UP)
			rotation(shape);
		gotoxy(1, 1);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (shape[i][j] == 1)
					cout << blan_blocktype;
				else
					cout << blocktype;

			}
			cout << endl;
		}
		/*
		gotoxy(1, 1);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cout << "";
			}
			cout << endl;
		}
		*/
	}
	
}