#include<stdio.h>
void three()
{
	system("color a0");
}

void four(char c, char d)
{
	char kobe[9] = "color ";
	kobe[6] = c;
	kobe[7] = d;
	kobe[8] = '\0';
	system(kobe);
	printf("\n");
}

int main()
{
	printf("안녕하세요 저는 박재형입니다.\n");

	//1번
	printf("변수 a b c를 입력하시오 ");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int result = one(a, b, c);
	printf("결과값은 %d이다.\n", result);

	//2번
	printf("초를 입력하시오 ");
	scanf_s("%d", &a);
	result = two(a);
	printf("결과값은 %d 이다.\n", result);

	//3번
	three();

	rewind(stdin);


	//4번
	printf("첫번째 문자 입력 ");
	char q;
	q = getchar();
	rewind(stdin);
	printf("두번째 문자입력 ");
	char w;
	w = getchar();
	four(q, w);
	rewind(stdin);

	//5번
	result = five();
	printf("결과값은 %d 입니다.\n", result);

	//6번
	printf("a부터 b까지 곱하는데 a b? ");
	scanf_s("%d %d", &a, &b);
	result = six(a, b);
	printf("결과값은 %d입니다.\n", result);

	//7번
	printf("a b 그리고 연산자를 입력하시오 ");
	char d;
	scanf_s("%d %d %c", &a, &b, &d);
	result = seven(a, b, d);
	printf("결과값은 %d 입니다.\n", result);
	rewind(stdin);

	//8번
	printf("n까지 곱할건데 n? ");
	scanf_s("%d", &a);
	result = eight(a);
	printf("결과값은 %d이다.\n", result);

	//9번
	result = nine(a);
	printf("결과값은 %d이다.\n", result);

	//10번
	printf("몇번째 수열? ");
	scanf_s("%d", &a);
	result = ten(a);
	printf("%d", result);






	return 0;
}

int one(int x, int y, int z)
{
	int sum = 0;
	for (int i = x; i <= y; i++)
	{
		if (i % z != 0)
		{
			sum += i;
		}
	}
	return sum;
}
int two(int sec)
{
	if (sec > 3600 || sec < 0)
	{
		printf("오류입니다.");
		return -1;
	}
	printf("시간은 %d분, %d초입니다.", sec / 60, sec % 60);
	return sec / 60;
}

//5번
int five()
{
	int sum = 1;
	printf("1 ");
	for (int i = 2; i <= 100; i++)
	{
		sum += i;
		printf("+%d ", i);
	}
	printf("= %d\n", sum);
	return sum;
}

int six(int a, int b)
{
	int sum = 1;
	printf("1");
	for (int i = a + 1; i <= b; i++)
	{
		sum *= i;
		printf(" x%d", i);
	}
	printf(" =%d\n", sum);
	return sum;
}

int seven(int a, int b, char c)
{
	switch (c)
	{
	case '+':
	{
		int sum = 0;
		for (int i = a; i <= b; i++)
		{
			sum += i;
		}
		return sum;
	}
	case '*':
	{
		int sum = 1;
		for (int i = a; i <= b; i++)
		{
			sum *= i;
		}
		return sum;
	}
	case 'x':
	{
		int sum = 1;
		for (int i = a; i <= b; i++)
		{
			sum *= i;
		}
		return sum;
	}
	default:
		return -1;
	}
}

int eight(int a)
{
	int sum = 1;
	for (int i = 1; i <= a; i++)
	{
		sum *= i;
	}
	return sum;
}

int nine(int a)
{
	if (a <= 1)
		return 1;
	return a * nine(a - 1);
}

int ten(int a)
{
	int t0 = 0;
	int t1 = 1;
	int plus = 0;
	plus = t0 + t1;

	for (int i = 0; i < a; i++) //a번 반복= a번째 수열
	{
		printf("%d ", t1);
		t0 = t1;
		t1 = plus;
		plus = t0 + t1;
	}
	return t1;
}
