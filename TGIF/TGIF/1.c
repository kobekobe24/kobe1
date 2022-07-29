#include<stdio.h>
//5597
int main()
{
	int num[31] = {1,0};
	int temp;
	for (int i = 0; i < 28; i++)
	{
		scanf_s("%d", &temp);
		num[temp] = 1;
	}
	//번호 0번은 없으니까 num[0] 은 0으로 두고
	//28번을 받아 넣는다.
	printf("\n");
	for (int i = 0; i < 31; i++)
		if (num[i] == 0)
			printf("%d\n", i);


	return 0;
}