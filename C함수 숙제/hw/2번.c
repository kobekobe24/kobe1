#include<stdio.h>
int two()
{
	printf("초값을 입력하세요 ");
	int sec;
	scanf_s("%d", &sec);
	if (sec >= 3600)
		return -1;
	printf("%d분 %d초\n", sec/60, sec%60);
	return sec%60;
}
int main()
{
	int result = two();
	printf("m값은 %d", result);
	return 0;
}