#include<stdio.h>
int two()
{
	printf("�ʰ��� �Է��ϼ��� ");
	int sec;
	scanf_s("%d", &sec);
	if (sec >= 3600)
		return -1;
	printf("%d�� %d��\n", sec/60, sec%60);
	return sec%60;
}
int main()
{
	int result = two();
	printf("m���� %d", result);
	return 0;
}