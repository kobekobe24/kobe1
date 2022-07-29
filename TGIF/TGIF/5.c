#include<stdio.h>
//10809
int main()
{
	//x
	if (0)
	{
		char arr[100];
		gets(arr);
		int checkarr[26] = { 0, };
		int count = 0;
		for (int i = 0; arr[i] != NULL; i++)
		{
			arr[i] -= 97;
			checkarr[arr[i]]++;
		}
		for (int j = 0; j < 26; j++)
			printf("%d ", checkarr[j]);
	}
	char arr1[100];
	gets(arr1);
	int checkarr[26] = { 0, };
	int count = 0;
	for (int i = 0; arr1[i] != NULL; i++)
	{

	}

	return 0;
}