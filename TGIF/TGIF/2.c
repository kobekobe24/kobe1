#include<stdio.h>
//2743
int main()
{
	char arr[100];
	gets(arr);
	int count = 0;
	for (int i = 0; arr[i] != NULL; i++)
	{
		count++;
	}
	printf("%d", count);
}