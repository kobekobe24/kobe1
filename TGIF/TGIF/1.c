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
	//��ȣ 0���� �����ϱ� num[0] �� 0���� �ΰ�
	//28���� �޾� �ִ´�.
	printf("\n");
	for (int i = 0; i < 31; i++)
		if (num[i] == 0)
			printf("%d\n", i);


	return 0;
}