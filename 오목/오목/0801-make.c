#include<stdio.h>
#include<Windows.h>
void gotoxy(int x, int y);
int main()
{
	gotoxy(3, 3);
	printf("1");

	return 0;
}
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}