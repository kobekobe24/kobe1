#include<stdio.h>
int main()
{
	//�Ҽ� ��� ������ c 249
	printf("�� �� ������ �Ҽ��� ���� ������ּ��� ");
	int n;
	scanf_s("%d", &n);
	if (n >= 2)
	{
		for (int q = 2; q <= n; q++)
		{
			for (int a = 2; a <= q; a++)
			{
				if (q % a != 0)
				{
					continue;
				}
				else
				{
					if (q == a)
						printf("%d ", a);
					break;
				}
			}
		}
	}
	printf("\n");

	int num;
	printf("�Ҽ� ���° �ڸ���? ");
	scanf_s("%d", &num);
	int count = 0;
	for (int i = 2;; i++)
	{
		for (int some = 2; some <= i; some++)
		{
			if (i % some != 0)
			{
				continue;
			}
			else
			{
				if (i == some)
				{
					printf("%d ", some);
					count++;
					break;
				}
				else
					break;
			}
		}
		if (count == num)
		{
			break;
		}
	}
	return 0;
}