#include<stdio.h>
int nine(int n)
{
	if (n == 1)
	{
		printf("1 = ");
			return 1;
	}
	printf("%d x ", n);
	return n * nine(n - 1);
}
int main()
{
	int n;
	printf("n ют╥б ");
	scanf_s("%d", &n);
	int result = nine(n);
	printf("%d", result);
	return 0;
}