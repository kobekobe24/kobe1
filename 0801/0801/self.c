#include<stdio.h>
#include<Windows.h>
#include<conio.h>

int Rule_explain();											// ������ ���� �����ϴ� �Լ�
int check_33(int x, int y);
int check_44(int x, int y);									// ���� ������Ģ (3 x 3)�� üũ�ϴ� �Լ�
int Omok_Board[20][20] = { 0 };								// ���� ������ �������� �ʱ�ȭ�ϴ� �������� 

int Color = 2;												// ���� ���� ������ ���ϴ� �������� ( 1 == �鵹 , 2 == �浹 ), �浹�� ���� ����
int Winner_Checking(int Board[][20]);						// ���ڸ� üũ�ϴ� �Լ� (�������� �ּҸ� ���ڷκ����� 5���� ���ڸ� üũ)
void Gotoxy(int x, int y);									// X,Y ��ǥ�� ���������Ʈ�� ������ �Լ�  
void Game_Start();											// ������ �����ϴ� �Լ�
void Draw_Omok_Board();										// 19 x 19 �������� �׸��� �Լ�
void Key_Down(int Board[][20], char key, int* x, int* y);	// Ű�� �Է¹޾� �����̴� �Լ�
void Erase_Stone(int x, int y);								// Ŀ���� �ű�� ���� �ٽ� �׸��� �Լ� 
void Draw_Stone();											// ���� �׸��� �Լ� (1�̸� �� , 2�̸� ��)�� ��� (�������Ѽ� ������ ����)
void Put_Stone(int Board[][20], int x, int y);              // 0���� �ʱ�ȭ�� 2���� �迭�� 1�Ǵ� 2�� ���� ����
void Draw_Put_Stone(int Board[][20]);						// ������Ʈ�� �ִ� ��ġ�� (1�̸� �� , 2�̸� ��)�� ���
void Re_Game();												// ������ ���� ��, ������ �ٽ� �����ϴ� �Լ�
void Player_Change(int a);


int main(void)
{
	int cot;
	cot = Rule_explain();
	if (cot == 0)
		return 0;
	Gme_Start();

}
// ���� ����
int Rule_explain()
{
	int x = 30, y = 5;
	char press;
	Gotoxy(x, y);
	printf("*****  ���� �� ����   *****\n");
	x = 20;
	y = 7;
	Gotoxy(x, y);
	printf("* �浹�� ���� ���� �ΰ� �˴ϴ� *\n");
	y = 9;
	Gotoxy(x, y);
	printf("* �浹�� 3x3, 4x4 ���� �� �� �����ϴ� *\n");
	y = 11;
	Gotoxy(x, y);
	printf("* ���� 5�� �̻� ����Ǹ� �¸��մϴ� *\n");
	y = 13;
	Gotoxy(x, y);
	printf("* ������ �����Ͻ÷��� Space Bar�� �����ּ��� *\n");
	y = 15;
	Gotoxy(x, y);
	printf("* ������ �����Ͻ÷��� Esc�� �����ּ��� *\n");

	Gotoxy(20, 19);
	for (; 1;)
	{
		press = _getch(); //���ڵ� ���ڵ� �ƴ�, �ƽ�Ű�ڵ尪�� �޴´�.
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
//���� ���� �Լ�
void Game_Start()
{
	int x = 18, y = 8, i,j;
    for(i = 0;i<20;i++)
		for (j = 0; j < 20; j++) //���� ������ û���ϴ� ����
		{
			Omok_Board[i][j] = 0;
		}
	Gotoxy(0, 0); //0,0�������� �ٵ����� �׸���.
	Draw_Omok_Board(); //�ٵ��� �׸���
	Gotoxy(x, y); //Ŀ���� ������ �ڸ��� �����ϴ� �Լ�
	Draw_Stone(); //���� ���� ����
	char Key;
	do
	{
		Key = _getch(); //�Է¹��� �ƽ�Ű�ڵ尪�� Ű�� ����
		Erase_Stone(x, y);
		Key_Down(Omok_Board, Key, &x, &y); //Ű�� ���������� ó���Լ�
		Draw_Put_Stone(Omok_Board); //���� ���� �׸��� �Լ�
		if (Winner_Checking(Omok_Board))
			return;
		Gotoxy(x, y);
		Draw_Stone(); //�� ��� �Լ�
	} while (Key != 27);
}
//�����Լ�
void Erase_Stone(int x, int y)// x,y�� ��ǥ���� �Ű������� ����
{                   
	Gotoxy(x, y);                                   // ���� ���� ��ġ�� ������ �̵� 
	if (x == 0 && y == 0)                           // �װ��� ���� 0,0 (���� �� �𼭸�)�� ���
		printf("��");
	else if (x == 36 && y == 0)                     // �װ��� ���� 36,0 (������ �� �𼭸�)�� ���
		printf("��");
	else if (x == 0 && y == 18)                     // �װ��� ���� 0,18 (���� �Ʒ� �𼭸�)�� ���
		printf("��");
	else if (x == 36 && y == 18)                    // �װ��� ���� 36,18 (������ �Ʒ� �𼭸�)�� ���
		printf("��");
	else if (x == 0)                                // �װ��� ���� 0,* (������)�� ���                 
		printf("��");
	else if (y == 0)                                // �װ��� ���� *,0 (����)�� ���
		printf("��");
	else if (x == 36)                               // �װ��� ���� 36,* (��������)�� ���
		printf("��");
	else if (y == 18)                               // �װ��� ���� *,18 (�Ʒ���)�� ���
		printf("��");
	else                                           // �� ���� ���
		printf("��");
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
	case 72:                                    // key���� ASCII�ڵ尡 72���� �� (���� ����Ű)
		if (*y - 1 < 0)                          // y-1 ���� �� 0 �̸��̸� ó�� ����
			break;
		else                                     // 0 �̸��� �ƴҰ�쿡�� y���� 1 ����
			*y -= 1;
		break;
	case 80:                                    // key���� ASCII�ڵ尡 80���� �� (�Ʒ��� ����Ű)
		if (*y + 1 > 18)                         // y+1 ���� �� 18�� �ʰ��ϸ� ó�� ����
			break;
		else                                     // 18�� �ʰ����� �ʾ��� ��� y�� 1 ����
			*y += 1;
		break;
	case 75:                                    // key���� ASCII�ڵ尡 75���� �� (���� ����Ű)
		if (*x - 2 < 0)                          // x-2 ���� �� 0 �̸��̸� ��� ó�� ����
			break;
		else                                     // 0 �̸��� �ƴҰ�쿡�� x�� 2 ����
			*x -= 2;
		break;
	case 77:                                   // key���� ASCII�ڵ尡 77���� �� (������ ����Ű)
		if (*x + 2 > 36)                           // x+2���� �� 36�� �ʰ��ϸ� ó�� ����
			break;
		else                                     // 36�� �ʰ����� �ʾ��� ��� x�� 2 ����
			*x += 2;
		break;
	case 32: {
		a = *x;
		b = *y;
		checking3x3 = check_33(a, b); //33�̳�
		checking4x4 = check_44(a, b); //44 �� �ɸ����� Ȯ���ϱ� ���ؼ�

	}
}




void Gotoxy(int x, int y)
{
	COORD Pos = { .X = x, .Y = y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	//���ϴ� ��ǥ�� Ŀ�� �̵��ϱ�
}