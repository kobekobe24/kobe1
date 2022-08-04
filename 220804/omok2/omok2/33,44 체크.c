#include<stdio.h>
int Omok_Board[20][20];
int Check_4X4(int x, int y)
{
	int count = 0;
	// 가로체크. 
	if ((Omok_Board[y][x / 2 - 4] !=2 && Omok_Board[y][x / 2 - 3] == 2 && Omok_Board[y][x / 2 - 2] == 2 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 + 1] == 0) ||
		(Omok_Board[y][x / 2 + 4] == 0 && Omok_Board[y][x / 2 + 3] == 2 && Omok_Board[y][x / 2 + 2] == 2 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 - 1] !=2) ||
		(Omok_Board[y][x / 2 - 4] !=2 && Omok_Board[y][x / 2 - 3] == 2 && Omok_Board[y][x / 2 - 2] == 2 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 + 1] == 0) ||
		(Omok_Board[y][x / 2 + 4] == 0 && Omok_Board[y][x / 2 + 3] == 2 && Omok_Board[y][x / 2 + 2] == 2 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 - 1] !=2) ||


		(Omok_Board[y][x / 2 - 5] !=2 && Omok_Board[y][x / 2 - 4] == 2 && Omok_Board[y][x / 2 - 3] == 0 && Omok_Board[y][x / 2 - 2] == 2 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 + 1] !=2) ||
		(Omok_Board[y][x / 2 + 5] !=2 && Omok_Board[y][x / 2 + 4] == 2 && Omok_Board[y][x / 2 + 3] == 0 && Omok_Board[y][x / 2 + 2] == 2 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 - 1] !=2) ||
		(Omok_Board[y][x / 2 - 5] !=2 && Omok_Board[y][x / 2 - 4] == 2 && Omok_Board[y][x / 2 - 3] == 2 && Omok_Board[y][x / 2 - 2] == 0 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 + 1] !=2) ||
		(Omok_Board[y][x / 2 + 5] !=2 && Omok_Board[y][x / 2 + 4] == 2 && Omok_Board[y][x / 2 + 3] == 2 && Omok_Board[y][x / 2 + 2] == 0 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 - 1] !=2) ||
		(Omok_Board[y][x / 2 - 5] !=2 && Omok_Board[y][x / 2 - 4] == 2 && Omok_Board[y][x / 2 - 3] == 2 && Omok_Board[y][x / 2 - 2] == 2 && Omok_Board[y][x / 2 - 1] == 0 && Omok_Board[y][x / 2 + 1] !=2) ||
		(Omok_Board[y][x / 2 + 5] !=2 && Omok_Board[y][x / 2 + 4] == 2 && Omok_Board[y][x / 2 + 3] == 2 && Omok_Board[y][x / 2 + 2] == 2 && Omok_Board[y][x / 2 + 1] == 0 && Omok_Board[y][x / 2 - 1] !=2) ||


		(Omok_Board[y][x / 2 - 3] !=2 && Omok_Board[y][x / 2 - 2] == 2 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 + 2] == 0) ||
		(Omok_Board[y][x / 2 + 3] == 0 && Omok_Board[y][x / 2 + 2] == 2 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 - 2] !=2) ||
		(Omok_Board[y][x / 2 - 3] !=2 && Omok_Board[y][x / 2 - 2] == 2 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 + 2] == 0) ||
		(Omok_Board[y][x / 2 + 3] == 0 && Omok_Board[y][x / 2 + 2] == 2 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 - 2] !=2) ||


		(Omok_Board[y][x / 2 - 4] !=2 && Omok_Board[y][x / 2 - 3] == 2 && Omok_Board[y][x / 2 - 2] == 2 && Omok_Board[y][x / 2 - 1] == 0 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 + 2] !=2) ||
		(Omok_Board[y][x / 2 + 4] !=2 && Omok_Board[y][x / 2 + 3] == 2 && Omok_Board[y][x / 2 + 2] == 2 && Omok_Board[y][x / 2 + 1] == 0 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 - 2] !=2) ||
		(Omok_Board[y][x / 2 - 4] !=2 && Omok_Board[y][x / 2 - 3] == 2 && Omok_Board[y][x / 2 - 2] == 0 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 + 2] !=2) ||
		(Omok_Board[y][x / 2 + 4] !=2 && Omok_Board[y][x / 2 + 3] == 2 && Omok_Board[y][x / 2 + 2] == 0 && Omok_Board[y][x / 2 + 1] == 2 && Omok_Board[y][x / 2 - 1] == 2 && Omok_Board[y][x / 2 - 2] !=2))

		count++;
	// 세로체크. 
	if ((Omok_Board[y - 4][x / 2] !=2 && Omok_Board[y - 3][x / 2] == 2 && Omok_Board[y - 2][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 0) ||
		(Omok_Board[y + 4][x / 2] == 0 && Omok_Board[y + 3][x / 2] == 2 && Omok_Board[y + 2][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y - 1][x / 2] !=2) ||
		(Omok_Board[y - 4][x / 2] !=2 && Omok_Board[y - 3][x / 2] == 2 && Omok_Board[y - 2][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 0) ||
		(Omok_Board[y + 4][x / 2] == 0 && Omok_Board[y + 3][x / 2] == 2 && Omok_Board[y + 2][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y - 1][x / 2] !=2) ||


		(Omok_Board[y - 5][x / 2] !=2 && Omok_Board[y - 4][x / 2] == 2 && Omok_Board[y - 3][x / 2] == 0 && Omok_Board[y - 2][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y + 1][x / 2] !=2) ||
		(Omok_Board[y + 5][x / 2] !=2 && Omok_Board[y + 4][x / 2] == 2 && Omok_Board[y + 3][x / 2] == 0 && Omok_Board[y + 2][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y - 1][x / 2] !=2) ||
		(Omok_Board[y - 5][x / 2] !=2 && Omok_Board[y - 4][x / 2] == 2 && Omok_Board[y - 3][x / 2] == 2 && Omok_Board[y - 2][x / 2] == 0 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y + 1][x / 2] !=2) ||
		(Omok_Board[y + 5][x / 2] !=2 && Omok_Board[y + 4][x / 2] == 2 && Omok_Board[y + 3][x / 2] == 2 && Omok_Board[y + 2][x / 2] == 0 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y - 1][x / 2] !=2) ||
		(Omok_Board[y - 5][x / 2] !=2 && Omok_Board[y - 4][x / 2] == 2 && Omok_Board[y - 3][x / 2] == 2 && Omok_Board[y - 2][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 0 && Omok_Board[y + 1][x / 2] !=2) ||
		(Omok_Board[y + 5][x / 2] !=2 && Omok_Board[y + 4][x / 2] == 2 && Omok_Board[y + 3][x / 2] == 2 && Omok_Board[y + 2][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 0 && Omok_Board[y - 1][x / 2] !=2) ||

		(Omok_Board[y - 3][x / 2] !=2 && Omok_Board[y - 2][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y + 2][x / 2] == 0) ||
		(Omok_Board[y + 3][x / 2] == 0 && Omok_Board[y + 2][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y - 2][x / 2] !=2) ||
		(Omok_Board[y - 3][x / 2] !=2 && Omok_Board[y - 2][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y + 2][x / 2] == 0) ||
		(Omok_Board[y + 3][x / 2] == 0 && Omok_Board[y + 2][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y - 2][x / 2] !=2) ||


		(Omok_Board[y - 4][x / 2] !=2 && Omok_Board[y - 3][x / 2] == 2 && Omok_Board[y - 2][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 0 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y + 2][x / 2] !=2) ||
		(Omok_Board[y + 4][x / 2] !=2 && Omok_Board[y + 3][x / 2] == 2 && Omok_Board[y + 2][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 0 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y - 2][x / 2] !=2) ||
		(Omok_Board[y - 4][x / 2] !=2 && Omok_Board[y - 3][x / 2] == 2 && Omok_Board[y - 2][x / 2] == 0 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y + 2][x / 2] !=2) ||
		(Omok_Board[y + 4][x / 2] !=2 && Omok_Board[y + 3][x / 2] == 2 && Omok_Board[y + 2][x / 2] == 0 && Omok_Board[y + 1][x / 2] == 2 && Omok_Board[y - 1][x / 2] == 2 && Omok_Board[y - 2][x / 2] !=2))
		count++;

	// 대각선체크. 
	if ((Omok_Board[y - 4][x / 2 - 4] !=2 && Omok_Board[y - 3][x / 2 - 3] == 2 && Omok_Board[y - 2][x / 2 - 2] == 2 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y + 1][x / 2 + 1] == 0) ||
		(Omok_Board[y + 4][x / 2 + 4] == 0 && Omok_Board[y + 3][x / 2 + 3] == 2 && Omok_Board[y + 2][x / 2 + 2] == 2 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y - 1][x / 2 - 1] !=2) ||
		(Omok_Board[y - 4][x / 2 - 4] !=2 && Omok_Board[y - 3][x / 2 - 3] == 2 && Omok_Board[y - 2][x / 2 - 2] == 2 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y + 1][x / 2 + 1] == 0) ||
		(Omok_Board[y + 4][x / 2 + 4] == 0 && Omok_Board[y + 3][x / 2 + 3] == 2 && Omok_Board[y + 2][x / 2 + 2] == 2 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y - 1][x / 2 - 1] !=2) ||

		(Omok_Board[y - 5][x / 2 - 5] !=2 && Omok_Board[y - 4][x / 2 - 4] == 2 && Omok_Board[y - 3][x / 2 - 3] == 0 && Omok_Board[y - 2][x / 2 - 2] == 2 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y + 1][x / 2 + 1] !=2) ||
		(Omok_Board[y + 5][x / 2 + 5] !=2 && Omok_Board[y + 4][x / 2 + 4] == 2 && Omok_Board[y + 3][x / 2 + 3] == 0 && Omok_Board[y + 2][x / 2 + 2] == 2 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y - 1][x / 2 - 1] !=2) ||
		(Omok_Board[y - 5][x / 2 - 5] !=2 && Omok_Board[y - 4][x / 2 - 4] == 2 && Omok_Board[y - 3][x / 2 - 3] == 2 && Omok_Board[y - 2][x / 2 - 2] == 0 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y + 1][x / 2 + 1] !=2) ||
		(Omok_Board[y + 5][x / 2 + 5] !=2 && Omok_Board[y + 4][x / 2 + 4] == 2 && Omok_Board[y + 3][x / 2 + 3] == 2 && Omok_Board[y + 2][x / 2 + 2] == 0 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y - 1][x / 2 - 1] !=2) ||
		(Omok_Board[y - 5][x / 2 - 5] !=2 && Omok_Board[y - 4][x / 2 - 4] == 2 && Omok_Board[y - 3][x / 2 - 3] == 2 && Omok_Board[y - 2][x / 2 - 2] == 2 && Omok_Board[y - 1][x / 2 - 1] == 0 && Omok_Board[y + 1][x / 2 + 1] !=2) ||
		(Omok_Board[y + 5][x / 2 + 5] !=2 && Omok_Board[y + 4][x / 2 + 4] == 2 && Omok_Board[y + 3][x / 2 + 3] == 2 && Omok_Board[y + 2][x / 2 + 2] == 2 && Omok_Board[y + 1][x / 2 + 1] == 0 && Omok_Board[y - 1][x / 2 - 1] !=2) ||
		
		(Omok_Board[y - 3][x / 2 - 3] !=2 && Omok_Board[y - 2][x / 2 - 2] == 2 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y + 2][x / 2 + 2] == 0) ||
		(Omok_Board[y + 3][x / 2 + 3] == 0 && Omok_Board[y + 2][x / 2 + 2] == 2 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y - 2][x / 2 - 2] !=2) ||
		(Omok_Board[y - 3][x / 2 - 3] !=2 && Omok_Board[y - 2][x / 2 - 2] == 2 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y + 2][x / 2 + 2] == 0) ||
		(Omok_Board[y + 3][x / 2 + 3] == 0 && Omok_Board[y + 2][x / 2 + 2] == 2 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y - 2][x / 2 - 2] !=2) ||


		(Omok_Board[y - 4][x / 2 - 4] !=2 && Omok_Board[y - 3][x / 2 - 3] == 2 && Omok_Board[y - 2][x / 2 - 2] == 2 && Omok_Board[y - 1][x / 2 - 1] == 0 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y + 2][x / 2 + 2] !=2) ||
		(Omok_Board[y + 4][x / 2 + 4] !=2 && Omok_Board[y + 3][x / 2 + 3] == 2 && Omok_Board[y + 2][x / 2 + 2] == 2 && Omok_Board[y + 1][x / 2 + 1] == 0 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y - 2][x / 2 - 2] !=2) ||
		(Omok_Board[y - 4][x / 2 - 4] !=2 && Omok_Board[y - 3][x / 2 - 3] == 2 && Omok_Board[y - 2][x / 2 - 2] == 0 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y + 2][x / 2 + 2] !=2) ||
		(Omok_Board[y + 4][x / 2 + 4] !=2 && Omok_Board[y + 3][x / 2 + 3] == 2 && Omok_Board[y + 2][x / 2 + 2] == 0 && Omok_Board[y + 1][x / 2 + 1] == 2 && Omok_Board[y - 1][x / 2 - 1] == 2 && Omok_Board[y - 2][x / 2 - 2] !=2))
		
		
		count++;
	// 반대 대각선체크. 
	if ((Omok_Board[y - 4][x / 2 + 4] !=2 && Omok_Board[y - 3][x / 2 + 3] == 2 && Omok_Board[y - 2][x / 2 + 2] == 2 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y + 1][x / 2 - 1] == 0) ||
		(Omok_Board[y + 4][x / 2 - 4] == 0 && Omok_Board[y + 3][x / 2 - 3] == 2 && Omok_Board[y + 2][x / 2 - 2] == 2 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y - 1][x / 2 + 1] !=2) ||
		(Omok_Board[y - 4][x / 2 + 4] !=2 && Omok_Board[y - 3][x / 2 + 3] == 2 && Omok_Board[y - 2][x / 2 + 2] == 2 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y + 1][x / 2 - 1] == 0) ||
		(Omok_Board[y + 4][x / 2 - 4] == 0 && Omok_Board[y + 3][x / 2 - 3] == 2 && Omok_Board[y + 2][x / 2 - 2] == 2 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y - 1][x / 2 + 1] !=2) ||


		(Omok_Board[y - 5][x / 2 + 5] !=2 && Omok_Board[y - 4][x / 2 + 4] == 2 && Omok_Board[y - 3][x / 2 + 3] == 0 && Omok_Board[y - 2][x / 2 + 2] == 2 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y + 1][x / 2 - 1] !=2) ||
		(Omok_Board[y + 5][x / 2 - 5] !=2 && Omok_Board[y + 4][x / 2 - 4] == 2 && Omok_Board[y + 3][x / 2 - 3] == 0 && Omok_Board[y + 2][x / 2 - 2] == 2 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y - 1][x / 2 + 1] !=2) ||
		(Omok_Board[y - 5][x / 2 + 5] !=2 && Omok_Board[y - 4][x / 2 + 4] == 2 && Omok_Board[y - 3][x / 2 + 3] == 2 && Omok_Board[y - 2][x / 2 + 2] == 0 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y + 1][x / 2 - 1] !=2) ||
		(Omok_Board[y + 5][x / 2 - 5] !=2 && Omok_Board[y + 4][x / 2 - 4] == 2 && Omok_Board[y + 3][x / 2 - 3] == 2 && Omok_Board[y + 2][x / 2 - 2] == 0 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y - 1][x / 2 + 1] !=2) ||
		(Omok_Board[y - 5][x / 2 - 5] !=2 && Omok_Board[y - 4][x / 2 + 4] == 2 && Omok_Board[y - 3][x / 2 + 3] == 2 && Omok_Board[y - 2][x / 2 + 2] == 2 && Omok_Board[y - 1][x / 2 + 1] == 0 && Omok_Board[y + 1][x / 2 - 1] !=2) ||
		(Omok_Board[y + 5][x / 2 + 5] !=2 && Omok_Board[y + 4][x / 2 - 4] == 2 && Omok_Board[y + 3][x / 2 - 3] == 2 && Omok_Board[y + 2][x / 2 - 2] == 2 && Omok_Board[y + 1][x / 2 - 1] == 0 && Omok_Board[y - 1][x / 2 + 1] !=2) ||
		(Omok_Board[y - 3][x / 2 + 3] !=2 && Omok_Board[y - 2][x / 2 + 2] == 2 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y + 2][x / 2 - 2] == 0) ||
		(Omok_Board[y + 3][x / 2 - 3] == 0 && Omok_Board[y + 2][x / 2 - 2] == 2 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y - 2][x / 2 + 2] !=2) ||
		(Omok_Board[y - 3][x / 2 + 3] !=2 && Omok_Board[y - 2][x / 2 + 2] == 2 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y + 2][x / 2 - 2] == 0) ||
		(Omok_Board[y + 3][x / 2 - 3] == 0 && Omok_Board[y + 2][x / 2 - 2] == 2 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y - 2][x / 2 + 2] !=2) ||

		(Omok_Board[y - 4][x / 2 + 4] !=2 && Omok_Board[y - 3][x / 2 + 3] == 2 && Omok_Board[y - 2][x / 2 + 2] == 2 && Omok_Board[y - 1][x / 2 + 1] == 0 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y + 2][x / 2 - 2] !=2) ||
		(Omok_Board[y + 4][x / 2 - 4] !=2 && Omok_Board[y + 3][x / 2 - 3] == 2 && Omok_Board[y + 2][x / 2 - 2] == 2 && Omok_Board[y + 1][x / 2 - 1] == 0 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y - 2][x / 2 + 2] !=2) ||
		(Omok_Board[y - 4][x / 2 + 4] !=2 && Omok_Board[y - 3][x / 2 + 3] == 2 && Omok_Board[y - 2][x / 2 + 2] == 0 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y + 2][x / 2 - 2] !=2) ||
		(Omok_Board[y + 4][x / 2 - 4] !=2 && Omok_Board[y + 3][x / 2 - 3] == 2 && Omok_Board[y + 2][x / 2 - 2] == 0 && Omok_Board[y + 1][x / 2 - 1] == 2 && Omok_Board[y - 1][x / 2 + 1] == 2 && Omok_Board[y - 2][x / 2 + 2] !=2))
		count++;
	if (count > 1) return 1;
	else return 0;
}
