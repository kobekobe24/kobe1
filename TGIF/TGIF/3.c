#include<stdio.h>
//2744
int main()
{
	if (0)
	{
		char a = 'A';
		a += 5;
		printf("%c", a);
	}
	char arr[100];
	gets(arr);
	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)
		{
			arr[i] += 32;
			printf("%c", arr[i]);
		}
		else if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] -= 32;
			printf("%c", arr[i]);
		}
	}
	return 0;
}