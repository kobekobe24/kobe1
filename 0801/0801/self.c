#include<stdio.h>
#include<Windows.h>
#include<conio.h>

int Rule_explain();											// 오목의 룰을 설명하는 함수
int check_33(int x, int y);
int check_44(int x, int y);									// 흑의 착수규칙 (3 x 3)을 체크하는 함수
int Omok_Board[20][20] = { 0 };								// 게임 시작전 오목판을 초기화하는 전역변수 

int Color = 2;												// 돌의 시작 색깔을 정하는 전역변수 ( 1 == 백돌 , 2 == 흑돌 ), 흑돌이 먼저 시작
int Winner_Checking(int Board[][20]);						// 승자를 체크하는 함수 (오목판의 주소를 인자로보내서 5개의 숫자를 체크)
void Gotoxy(int x, int y);									// X,Y 좌표로 명령프롬포트를 보내는 함수  
void Game_Start();											// 게임을 시작하는 함수
void Draw_Omok_Board();										// 19 x 19 오목판을 그리는 함수
void Key_Down(int Board[][20], char key, int* x, int* y);	// 키를 입력받아 움직이는 함수
void Erase_Stone(int x, int y);								// 커서를 옮기면 판을 다시 그리는 함수 
void Draw_Stone();											// 돌을 그리는 함수 (1이면 ○ , 2이면 ●)을 출력 (누적시켜서 게임을 진행)
void Put_Stone(int Board[][20], int x, int y);              // 0으로 초기화된 2차원 배열에 1또는 2의 값을 대입
void Draw_Put_Stone(int Board[][20]);						// 프롬포트가 있는 위치에 (1이면 ○ , 2이면 ●)을 출력
void Re_Game();												// 게임이 끝난 후, 게임을 다시 실행하는 함수
void Player_Change(int a);


int main(void)
{
	int cot;
	cot = Rule_explain();
	if (cot == 0)
		return 0;
	Gme_Start();

}
// 룰을 설명
int Rule_explain()
{
	int x = 30, y = 5;
	char press;
	Gotoxy(x, y);
	printf("*****  오목 룰 설명   *****\n");
	x = 20;
	y = 7;
	Gotoxy(x, y);
	printf("* 흑돌이 먼저 수를 두게 됩니다 *\n");
	y = 9;
	Gotoxy(x, y);
	printf("* 흑돌은 3x3, 4x4 수를 둘 수 없습니다 *\n");
	y = 11;
	Gotoxy(x, y);
	printf("* 돌이 5개 이상 연결되면 승리합니다 *\n");
	y = 13;
	Gotoxy(x, y);
	printf("* 게임을 시작하시려면 Space Bar를 눌러주세요 *\n");
	y = 15;
	Gotoxy(x, y);
	printf("* 게임을 종료하시려면 Esc를 눌러주세요 *\n");

	Gotoxy(20, 19);
	for (; 1;)
	{
		press = _getch(); //문자도 숫자도 아닌, 아스키코드값을 받는다.
		if (press == 27)
			return 0;
		if (press == 32)
		{
			Gotoxy(x, y);
			system("cls");
		    return 1;
		}
	}
}
//게임 진행 함수
void Game_Start()
{
	int x = 18, y = 8, i,j;
    for(i = 0;i<20;i++)
		for (j = 0; j < 20; j++) //판을 깨끗이 청소하는 개념
		{
			Omok_Board[i][j] = 0;
		}
	Gotoxy(0, 0); //0,0에서부터 바둑판을 그린다.
	Draw_Omok_Board(); //바둑판 그리기
	Gotoxy(x, y); //커서가 지나간 자리를 복원하는 함수
	Draw_Stone(); //돌의 색을 정의
	char Key;
	do
	{
		Key = _getch(); //입력받은 아스키코드값을 키에 저장
		Erase_Stone(x, y);
		Key_Down(Omok_Board, Key, &x, &y); //키가 눌러졌을때 처리함수
		Draw_Put_Stone(Omok_Board); //놓은 돌을 그리는 함수
		if (Winner_Checking(Omok_Board))
			return;
		Gotoxy(x, y);
		Draw_Stone(); //돌 출력 함수
	} while (Key != 27);
}
//복원함수
void Erase_Stone(int x, int y)// x,y의 좌표값을 매개변수로 전달
{                   
	Gotoxy(x, y);                                   // 현재 돌이 위치한 곳으로 이동 
	if (x == 0 && y == 0)                           // 그곳이 만약 0,0 (왼쪽 위 모서리)인 경우
		printf("┌");
	else if (x == 36 && y == 0)                     // 그곳이 만약 36,0 (오른쪽 위 모서리)인 경우
		printf("┐");
	else if (x == 0 && y == 18)                     // 그곳이 만약 0,18 (왼쪽 아래 모서리)인 경우
		printf("└");
	else if (x == 36 && y == 18)                    // 그곳이 만약 36,18 (오른쪽 아래 모서리)인 경우
		printf("┘");
	else if (x == 0)                                // 그곳이 만약 0,* (왼쪽줄)인 경우                 
		printf("├");
	else if (y == 0)                                // 그곳이 만약 *,0 (윗줄)인 경우
		printf("┬");
	else if (x == 36)                               // 그곳이 만약 36,* (오른쪽줄)인 경우
		printf("┤");
	else if (y == 18)                               // 그곳이 만약 *,18 (아랫줄)인 경우
		printf("┴");
	else                                           // 그 외의 경우
		printf("┼");
}
void Draw_Stone()
{
	if (Color == 1)
		printf("");
	else
		printf("");
}
void Key_Down(int Board[][200], char key, int* x, int* y)
{
	int checking3x3, checking4x4;
	int a, b;
	switch (key)
	{
	case 72:                                    // key값의 ASCII코드가 72번일 때 (위쪽 방향키)
		if (*y - 1 < 0)                          // y-1 했을 때 0 미만이면 처리 안함
			break;
		else                                     // 0 미만이 아닐경우에는 y값을 1 감소
			*y -= 1;
		break;
	case 80:                                    // key값의 ASCII코드가 80번일 때 (아래쪽 방향키)
		if (*y + 1 > 18)                         // y+1 했을 때 18을 초과하면 처리 안함
			break;
		else                                     // 18을 초과하지 않았을 경우 y값 1 증가
			*y += 1;
		break;
	case 75:                                    // key값의 ASCII코드가 75번일 때 (왼쪽 방향키)
		if (*x - 2 < 0)                          // x-2 했을 때 0 미만이면 경우 처리 안함
			break;
		else                                     // 0 미만이 아닐경우에는 x값 2 감소
			*x -= 2;
		break;
	case 77:                                   // key값의 ASCII코드가 77번일 때 (오른쪽 방향키)
		if (*x + 2 > 36)                           // x+2했을 때 36을 초과하면 처리 안함
			break;
		else                                     // 36을 초과하지 않았을 경우 x값 2 증가
			*x += 2;
		break;
	case 32: {
		a = *x;
		b = *y;
		checking3x3 = check_33(a, b); //33이나
		checking4x4 = check_44(a, b); //44 안 걸리는지 확인하기 위해서

	}
}




void Gotoxy(int x, int y)
{
	COORD Pos = { .X = x, .Y = y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	//원하는 좌표로 커서 이동하기
}