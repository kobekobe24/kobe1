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
	printf("�ȳ��ϼ��� ���� �������Դϴ�.\n");

	//1��
	printf("���� a b c�� �Է��Ͻÿ� ");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int result = one(a, b, c);
	printf("������� %d�̴�.\n", result);

	//2��
	printf("�ʸ� �Է��Ͻÿ� ");
	scanf_s("%d", &a);
	result = two(a);
	printf("������� %d �̴�.\n", result);

	//3��
	three();

	rewind(stdin);


	//4��
	printf("ù��° ���� �Է� ");
	char q;
	q = getchar();
	rewind(stdin);
	printf("�ι�° �����Է� ");
	char w;
	w = getchar();
	four(q, w);
	rewind(stdin);

	//5��
	result = five();
	printf("������� %d �Դϴ�.\n", result);

	//6��
	printf("a���� b���� ���ϴµ� a b? ");
	scanf_s("%d %d", &a, &b);
	result = six(a, b);
	printf("������� %d�Դϴ�.\n", result);

	//7��
	printf("a b �׸��� �����ڸ� �Է��Ͻÿ� ");
	char d;
	scanf_s("%d %d %c", &a, &b, &d);
	result = seven(a, b, d);
	printf("������� %d �Դϴ�.\n", result);
	rewind(stdin);

	//8��
	printf("n���� ���Ұǵ� n? ");
	scanf_s("%d", &a);
	result = eight(a);
	printf("������� %d�̴�.\n", result);

	//9��
	result = nine(a);
	printf("������� %d�̴�.\n", result);

	//10��
	printf("���° ����? ");
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
		printf("�����Դϴ�.");
		return -1;
	}
	printf("�ð��� %d��, %d���Դϴ�.", sec / 60, sec % 60);
	return sec / 60;
}

//5��
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

	for (int i = 0; i < a; i++) //a�� �ݺ�= a��° ����
	{
		printf("%d ", t1);
		t0 = t1;
		t1 = plus;
		plus = t0 + t1;
	}
	return t1;
}
